// clang-format off
//
//   BSD 4-Clause License
//   
//   Copyright (c) 2020 Berkay Yigit <berkaytgy@gmail.com>
//   All rights reserved.
//   
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions are met:
//   1. Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//   2. Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//   3. All advertising materials mentioning features or use of this software
//      must display the following acknowledgement:
//      This product includes software developed by Berkay Yigit.
//      To support the developer, please donate to:
//      "https://www.paypal.me/berkayylmao".
//   4. Neither the name of "TLD Modding API" nor the
//      names of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written permission.
//   
//   THIS SOFTWARE IS PROVIDED BY Berkay Yigit ''AS IS'' AND  ANY EXPRESS OR
//   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
//   OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
//   IN NO EVENT SHALL Berkay Yigit BE LIABLE FOR ANY DIRECT, INDIRECT, 
//   INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
//   BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//   ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// clang-format on

#pragma once
#include "pch.h"

MODDINGAPI_NAMESPACE_BEGIN()
namespace Internals::Hooks {
  static auto vFnQueue         = std::vector<std::function<void()>>();
  static auto vFnQueueWArg     = std::vector<std::pair<std::function<void(void*)>, void*>>();
  static auto vPermFnQueue     = std::vector<std::function<bool()>>();
  static auto vPermFnQueueWArg = std::vector<std::pair<std::function<bool(void*)>, void*>>();

  static void hkGameManager_Update() {
    for (auto& _iterator = std::begin(vPermFnQueue); _iterator != std::end(vPermFnQueue);) {
      if ((*_iterator)())
        _iterator = vPermFnQueue.erase(_iterator);
      else
        ++_iterator;
    }
    for (auto& _iterator = std::begin(vPermFnQueueWArg); _iterator != std::end(vPermFnQueueWArg);) {
      if ((*_iterator).first((*_iterator).second))
        _iterator = vPermFnQueueWArg.erase(_iterator);
      else
        ++_iterator;
    }

    for (const auto& fn : vFnQueue) fn();
    for (const auto& fn : vFnQueueWArg) fn.first(fn.second);
    vFnQueue.clear();
    vFnQueueWArg.clear();
  }
  static void hkGameManager_Update_ASMProxy() {
    hkGameManager_Update();
    hkGameManager_Update();
    hkGameManager_Update();
  }
}  // namespace Internals::Hooks
MODDINGAPI_NAMESPACE_END()