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
// Mod Macros
#define MOD_NAMESPACE         Mod
#define MOD_NAMESPACE_BEGIN() namespace MOD_NAMESPACE {
#define MOD_NAMESPACE_END()   }  // MOD_NAMESPACE
// Modding API Macros
#define MODDINGAPI                   __fastcall  // defaults to ms_abi
#define MODDINGAPI_FILENAME_STR      "TLDModdingAPI.dll"
#define MODDINGAPI_VERSION_STR       "1.0"
#define MODDINGAPI_NAMESPACE         TLDModdingAPI
#define MODDINGAPI_NAMESPACE_BEGIN() namespace MODDINGAPI_NAMESPACE {
#define MODDINGAPI_NAMESPACE_END()   }  // MODDINGAPI_NAMESPACE
// Helper Macros
#define __MODDINGAPI_MAKE_STR(x) #x
#define MODDINGAPI_MAKE_STR(x)   __MODDINGAPI_MAKE_STR(x)
// MirrorHook
#define MODDINGAPI_MIRRORHOOK_DEFINITIONS_PATH \
  "C:/Users/berkay/source/repos/MirrorHook/inc/Definitions.hpp"
