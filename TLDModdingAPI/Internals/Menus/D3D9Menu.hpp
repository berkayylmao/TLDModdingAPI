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
#include "BaseMenu.hpp"
// d3d9
#include <d3d9.h>

MODDINGAPI_NAMESPACE_BEGIN()
namespace Internals::Menus::D3D9 {
  static bool isImguiInitialized = false;

  static void __stdcall hkBeginScene(LPDIRECT3DDEVICE9 pDevice) {
    if (!isImguiInitialized) {
      ImGui_Impl_DX9::Init(pDevice);

      BaseMenu::LoadStyle();
      isImguiInitialized = true;
    }

    ImGui_Impl_DX9::NewFrame();
    BaseMenu::NewFrame();
  }
  static void __stdcall hkEndScene(LPDIRECT3DDEVICE9 pDevice) {
    if (isImguiInitialized) {
      BaseMenu::DrawMenu();
      BaseMenu::FinishFrame();
      ImGui_Impl_DX9::RenderDrawData(ImGui::GetDrawData());
    }
  }

  static void __stdcall hkBeforeReset(LPDIRECT3DDEVICE9      pDevice,
                                      D3DPRESENT_PARAMETERS* pPresentationParameters) {
    if (isImguiInitialized) ImGui_Impl_DX9::InvalidateDeviceObjects();
  }
  static void __stdcall hkAfterReset(LPDIRECT3DDEVICE9      pDevice,
                                     D3DPRESENT_PARAMETERS* pPresentationParameters) {
    if (!pDevice || pDevice->TestCooperativeLevel() != D3D_OK) {
      if (isImguiInitialized) ImGui_Impl_DX9::Shutdown();
      isImguiInitialized = false;
      return;
    }

    ImGui_Impl_DX9::CreateDeviceObjects();
  }
}  // namespace Internals::Menus::D3D9
MODDINGAPI_NAMESPACE_END()
