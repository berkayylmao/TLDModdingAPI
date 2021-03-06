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
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"


namespace ModdingAPI::Exposed::Mono::Security::Interface {
struct __MonoTlsSettings_Il2CppStaticFields {
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* defaultSettings;
};

struct __MonoTlsSettings_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MonoTlsSettings_Il2CppClass {
  Il2CppClass_1 _1;
  __MonoTlsSettings_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MonoTlsSettings_Il2CppVtbl vtbl;
};

class MonoTlsSettings {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C80AB0;
  static inline    __MonoTlsSettings_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MonoTlsSettings_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MonoTlsSettings_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MonoTlsSettings_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField;
  ModdingAPI::Exposed::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* _ClientCertificateSelectionCallback_k__BackingField;
  ModdingAPI::Exposed::System::Nullable_T_ _CertificateValidationTime_k__BackingField;
  ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _TrustAnchors_k__BackingField;
  Il2CppObject* _UserSettings_k__BackingField;
  ModdingAPI::Exposed::System::String_array* _CertificateSearchPaths_k__BackingField;
  bool _SendCloseNotify_k__BackingField;
  ModdingAPI::Exposed::System::Nullable_T_ _EnabledProtocols_k__BackingField;
  ModdingAPI::Exposed::Mono::Security::Interface::CipherSuiteCode_array* _EnabledCiphers_k__BackingField;
  bool cloned;
  bool checkCertName;
  bool checkCertRevocationStatus;
  ModdingAPI::Exposed::System::Nullable_T_ useServicePointManagerCallback;
  bool skipSystemValidators;
  bool callbackNeedsChain;
  ModdingAPI::Exposed::Mono::Security::Interface::ICertificateValidator* certificateValidator;

  // Member methods:
  ModdingAPI::Exposed::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_RemoteCertificateValidationCallback(ModdingAPI::Exposed::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  ModdingAPI::Exposed::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_ClientCertificateSelectionCallback(ModdingAPI::Exposed::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  ModdingAPI::Exposed::System::Nullable_T_ get_UseServicePointManagerCallback() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2530))(this);
  }
  void set_UseServicePointManagerCallback(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2540))(this, value);
  }
  bool get_CallbackNeedsCertificateChain() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2550))(this);
  }
  ModdingAPI::Exposed::System::Nullable_T_ get_CertificateValidationTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6E8AC0))(this);
  }
  void set_CertificateValidationTime(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2560))(this, value);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void set_TrustAnchors(ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A410))(this, value);
  }
  Il2CppObject* get_UserSettings() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  void set_UserSettings(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A420))(this, value);
  }
  ModdingAPI::Exposed::System::String_array* get_CertificateSearchPaths() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  void set_CertificateSearchPaths(ModdingAPI::Exposed::System::String_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, value);
  }
  bool get_SendCloseNotify() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4EFF30))(this);
  }
  void set_SendCloseNotify(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4EFF40))(this, value);
  }
  ModdingAPI::Exposed::System::Nullable_T_ get_EnabledProtocols() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9E9FB0))(this);
  }
  void set_EnabledProtocols(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2570))(this, value);
  }
  ModdingAPI::Exposed::Mono::Security::Interface::CipherSuiteCode_array* get_EnabledCiphers() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::CipherSuiteCode_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383960))(this);
  }
  void set_EnabledCiphers(ModdingAPI::Exposed::Mono::Security::Interface::CipherSuiteCode_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::Mono::Security::Interface::CipherSuiteCode_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383970))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2580))(this);
  }
  ModdingAPI::Exposed::Mono::Security::Interface::ICertificateValidator* get_CertificateValidator() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::ICertificateValidator*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(ModdingAPI::Exposed::Mono::Security::Interface::ICertificateValidator* validator) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::Mono::Security::Interface::ICertificateValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C29B0))(this, validator);
  }
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* Clone() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2B30))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* other) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2C80))(this, other);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*> defaultSettings = __CppStaticProperty<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*>(
   []() { return &GetStaticClassInstance()->pStaticFields->defaultSettings; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2590))();
  }
  static inline ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C2700))();
  }
};
}