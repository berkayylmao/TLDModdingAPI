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
//   4. Neither the name of "berkayylmao's The Long Dark Mods" nor the
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

/*
 * Generated by Il2CppTypeDumper (by berkayylmao) on 10:43 02/05/2020 UTC.
 * MIT License
 * Copyright(c) 2020 Berkay Yigit <berkaytgy@gmail.com>
 *
 * A fork of Il2CppDumper (by Perfare)
 * Il2CppDumper license:
 *   MIT License
 *   Copyright(c) 2016 Perfare
 */

#pragma once
#include "Il2CppBase.h"
#include "ModdingAPI.Exposed.Rewired.ElementAssignment.hpp"
#include "ModdingAPI.Exposed.Rewired.ControllerPollingInfo.hpp"
#include "ModdingAPI::Exposed::Rewired::ControllerPollingInfo.hpp"
#include "ModdingAPI::Exposed::Rewired::ElementAssignment.hpp"
#include "ModdingAPI::Exposed::Rewired::ElementAssignmentConflictCheck.hpp"


namespace ModdingAPI::Exposed::Rewired::InputMapper {
struct __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppStaticFields {
};

struct __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppClass {
  Il2CppClass_1 _1;
  __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppVtbl vtbl;
};

class QyHNJbbeobuceauLSmiIBRHLWKz {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C721C8;
  static inline    __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __QyHNJbbeobuceauLSmiIBRHLWKz_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::InputMapper* uNxdinwYVsqwsFuvrknqiyaoWaP;
  ModdingAPI::Exposed::Rewired::InputMapper::Options* vcLOUybllVkGlzzCKUTQlRfmouo;
  ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK* JQQDkLbmtQecSWevTZOzoqrbeiP;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* AAXksUrJbqaTUzNdOqbNzgwpRyZ;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* EvkCQhzXQAXJRxatdoGupjOZugA;
  int32_t XPHXoDRugmjfCRFZiEQgLqSpFWDa;
  int32_t sPvULakrpsYShBIVrckTAlZbVeKu;
  float OwZphpMyBkUJShqpmyfAhtNFPAi;
  bool icWCceuHjVxvKQoWabsEZjMPUHk;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* oKgNNhieOQzfopQGJKMgFwfTZoL;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* VIlguvuGbdDKKlQVYslohmQEcRw;
  ModdingAPI::Exposed::Rewired::ElementAssignment ytinKOruixbfrNvnDChiParSmMm;

  // Member methods:
  int32_t get_status() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8A0))(this);
  }
  float get_timeRemaining() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5829B0))(this);
  }
  ModdingAPI::Exposed::Rewired::InputMapper::Context* get_context() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::InputMapper::Context*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x582AC0))(this);
  }
  bool get_checkTimer() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x582AF0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::InputMapper* parent, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* events) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::InputMapper*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x582B30))(this, parent, events);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x583020))(this);
  }
  void eQhgAFZDDifoNaZKVFcYfNbkEuQg(ModdingAPI::Exposed::Rewired::InputMapper::Context* , ModdingAPI::Exposed::Rewired::InputMapper::Options* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::InputMapper::Context*, ModdingAPI::Exposed::Rewired::InputMapper::Options*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5830B0))(this, , );
  }
  void spXQTjfcNuAJSfIOEbHASXLPeWgS(System_String* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x583860))(this, );
  }
  void lBXBlwpAWWQAqLCbKGiyXWcglwu(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x583870))(this, );
  }
  void xpIiOMKNbRPJMhiSNPhLIRDZMGG() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x583C20))(this);
  }
  void vaUwmtessYPbEcXaAGcAXEfuiIC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x583C80))(this);
  }
  int32_t YUyCbBCqNdvaHNRBQDTmgcdlgsUo(ModdingAPI::Exposed::Rewired::ElementAssignment ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::ElementAssignment)>(Helpers::Memory::GetInstance().MakeAbsolute(0x583E10))(this, );
  }
  bool AZoWEcuMfqwFYnUCtwGpHbXvBFb(ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x584240))(this, , );
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* JLHKjcVJgBNJsSPuYRPgWOLGckf(int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x584A40))(this, );
  }
  ModdingAPI::Exposed::Rewired::ControllerPollingInfo xCrUYcHcQCMNHYSxScmWjMuVfCZ(ModdingAPI::Exposed::Rewired::InputMapper::Options* , int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerPollingInfo(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::InputMapper::Options*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x584C70))(this, , );
  }
  void TMKDdreFwxKOXSpCmqUAGMbmdvi() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x585A40))(this);
  }
  int32_t XcYGLMIlhcnaptLkdpEoWpsQWKva(ModdingAPI::Exposed::Rewired::ElementAssignment ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::ElementAssignment)>(Helpers::Memory::GetInstance().MakeAbsolute(0x586030))(this, );
  }
  void nUUQSWvkonMywvxewAgzGkkUeUJG() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x587320))(this);
  }
  void LEOaLMaxGPykjpOkCkBADwqHHaGf() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x587570))(this);
  }
  bool iiKalHGyHLFhpOLcxtaJbjSuySHN(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5876F0))(this, );
  }
  void gdwOiJXnLnciMPSafLzCoCMiCNC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5877C0))(this);
  }
  void urBhgKHuIVOunHGNYxtIlyyMdkc() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x587870))(this);
  }
  void hmYVZQzNLNHrPLzLvZqBOaYoPrf(ModdingAPI::Exposed::Rewired::ActionElementMap* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::ActionElementMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x587880))(this, );
  }
  void sPWDpooXOKGHnDORbGPAdlAfSvJ(System_String* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x587A80))(this, );
  }
  int32_t BUOvySvfHqgPhiIAlzuijJJiMST(ModdingAPI::Exposed::Rewired::ElementAssignment ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::ElementAssignment)>(Helpers::Memory::GetInstance().MakeAbsolute(0x587C50))(this, );
  }
  int32_t vvETdeuamolPqsTtZyvwnRRyHhw(int32_t , ModdingAPI::Exposed::Rewired::ElementAssignment ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, int32_t, ModdingAPI::Exposed::Rewired::ElementAssignment)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588030))(this, , );
  }
  int32_t vvETdeuamolPqsTtZyvwnRRyHhw(int32_t , ModdingAPI::Exposed::Rewired::ElementAssignment , bool ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, int32_t, ModdingAPI::Exposed::Rewired::ElementAssignment, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588230))(this, , , );
  }
  void XfsJSzhrXWHPodAwPDZIDhFbdXrB() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588400))(this);
  }
  void iUohHlOHhgQdnmaPBVBvDoiiQLR(System_String* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5885D0))(this, );
  }
  void dMpJAdEYvPliUndFoZiLtbmAfTL() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5887A0))(this);
  }
  void qEParjRkYFDFUHvxqBTzgMSvVNTv() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5887D0))(this);
  }
  void aiRwHwxKgDhviczQnkTaBSnjEbF(ModdingAPI::Exposed::Rewired::ElementAssignment ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::ElementAssignment)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588800))(this, );
  }
  void BcubeUFosMXSYjjqnZUVENvZqoYv(ModdingAPI::Exposed::Rewired::ActionElementMap* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::ActionElementMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588940))(this, );
  }
  void RbBSczSJrzvKrgNokTSVOQRUtOP() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588AC0))(this);
  }
  void cLRsafsXYzqbOGJvbORRquQRbwt(System_String* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588C40))(this, );
  }
  void QhlCZkRBlHvRGKJgiwwLsaiBCst(System_String* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588DD0))(this, );
  }
  void UCwOVYspcuYDQUNhbPdliJhGwRc(ModdingAPI::Exposed::Rewired::ElementAssignmentInfo* , ModdingAPI::Exposed::System::Collections::Generic::IList_T_* , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, ModdingAPI::Exposed::Rewired::ElementAssignmentInfo*, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x588F60))(this, , , );
  }
  void giPFacFQEPPiQuxzvZZafKSuTWn() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5891F0))(this);
  }
  void xhTphUiJixtgKWbGJbmvOnYGoFq() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x589370))(this);
  }
  void AsxFBtipvgJrvbtJgcQJBebLVit(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5894F0))(this, );
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::ControllerPollingInfo xCrUYcHcQCMNHYSxScmWjMuVfCZ(ModdingAPI::Exposed::Rewired::InputMapper::Options* , bool , int32_t , System_String* ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerPollingInfo(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::Options*, bool, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x584D30))(, , , );
  }
  static inline bool ewemxQbPsUulmkKinRhAUlTNYwF(ModdingAPI::Exposed::Rewired::ControllerPollingInfo , ModdingAPI::Exposed::Rewired::InputMapper::Options* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerPollingInfo, ModdingAPI::Exposed::Rewired::InputMapper::Options*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x585830))(, );
  }
  static inline bool rgxCgYijTqYWprtpJhLCcwmAwhs(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK* , ModdingAPI::Exposed::Rewired::ControllerPollingInfo , ModdingAPI::Exposed::Rewired::InputMapper::Options* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK*, ModdingAPI::Exposed::Rewired::ControllerPollingInfo, ModdingAPI::Exposed::Rewired::InputMapper::Options*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5859F0))(, , );
  }
  static inline bool vDCkMrfitGIonuuSaPsEJSwpDwF(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK* , ModdingAPI::Exposed::Rewired::ElementAssignment , ModdingAPI::Exposed::System::Collections::Generic::List_T_* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK*, ModdingAPI::Exposed::Rewired::ElementAssignment, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x586110))(, , );
  }
  static inline bool JzYAcTPaUtglMmffFuMvxlBLcEv(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK* , ModdingAPI::Exposed::Rewired::ElementAssignment , ModdingAPI::Exposed::System::Collections::Generic::List_T_* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK*, ModdingAPI::Exposed::Rewired::ElementAssignment, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x586350))(, , );
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* smWnSgfXcMFJhdZHGJuLEDKvcILi(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK* , ModdingAPI::Exposed::Rewired::ElementAssignment , ModdingAPI::Exposed::System::Collections::Generic::List_T_* ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK*, ModdingAPI::Exposed::Rewired::ElementAssignment, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x586930))(, , );
  }
  static inline bool HxDyXlqIBPUXPNLyeQTWhywjiGe(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK* , ModdingAPI::Exposed::Rewired::ElementAssignment , ModdingAPI::Exposed::Rewired::ElementAssignmentConflictCheck ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK*, ModdingAPI::Exposed::Rewired::ElementAssignment, ModdingAPI::Exposed::Rewired::ElementAssignmentConflictCheck)>(Helpers::Memory::GetInstance().MakeAbsolute(0x586F60))(, , );
  }
  static inline void zUSPTKOhqhecbKLTlClGydrZhCC(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK* , ModdingAPI::Exposed::Rewired::ElementAssignment , ModdingAPI::Exposed::System::Collections::Generic::List_T_* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputMapper::QyHNJbbeobuceauLSmiIBRHLWKz::KKmvfLLNVzlHxPEpHsxXaUIKWYK*, ModdingAPI::Exposed::Rewired::ElementAssignment, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x587100))(, , );
  }
};
}