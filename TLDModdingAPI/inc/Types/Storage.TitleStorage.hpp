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
#include "ModdingAPI.Exposed.System.Runtime.InteropServices.GCHandle.hpp"


namespace ModdingAPI::Exposed::Storage {
struct __TitleStorage_Il2CppStaticFields {
  ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageSaveLoadCallback* gSaveLoadThunk;
  ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageQuotaCallback* gQuotaThunk;
  ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageDeleteCallback* gDeleteThunk;
  ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageUserSignedOutStorageInvalidCallback* gUserSignedOutInvalidThunk;
};

struct __TitleStorage_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
};

struct __TitleStorage_Il2CppClass {
  Il2CppClass_1 _1;
  __TitleStorage_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TitleStorage_Il2CppVtbl vtbl;
};

class TitleStorage {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C937C0;
  static inline    __TitleStorage_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TitleStorage_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TitleStorage_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TitleStorage_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Storage::TitleStorage::OnUserSignedOutDelegate* OnUserSignedOut;
  bool AmSignedIn;
  bool RequireUser;
  intptr_t m_Self;
  ModdingAPI::Exposed::System::Runtime::InteropServices::GCHandle m_Handle;

  // Member methods:
  void add_OnUserSignedOut(ModdingAPI::Exposed::Storage::TitleStorage::OnUserSignedOutDelegate* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, ModdingAPI::Exposed::Storage::TitleStorage::OnUserSignedOutDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAD9D0))(this, value);
  }
  void remove_OnUserSignedOut(ModdingAPI::Exposed::Storage::TitleStorage::OnUserSignedOutDelegate* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, ModdingAPI::Exposed::Storage::TitleStorage::OnUserSignedOutDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EADAC0))(this, value);
  }
  ModdingAPI::Exposed::Storage::AsyncQuotaOp* RequestQuotaAsync(ModdingAPI::Exposed::Storage::AsyncQuotaOp::QuotaRequestDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Storage::AsyncQuotaOp*(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, ModdingAPI::Exposed::Storage::AsyncQuotaOp::QuotaRequestDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EADF60))(this, callback);
  }
  ModdingAPI::Exposed::Storage::SaveLoadOp* UploadFileAsync(System_String* filename, ModdingAPI::Exposed::System::Byte_array* data, ModdingAPI::Exposed::Storage::SaveLoadOp::SaveLoadDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Storage::SaveLoadOp*(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, System_String*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::Storage::SaveLoadOp::SaveLoadDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAE2F0))(this, filename, data, callback);
  }
  ModdingAPI::Exposed::Storage::SaveLoadOp* DownloadFileAsync(System_String* filename, ModdingAPI::Exposed::System::Byte_array* buffer, ModdingAPI::Exposed::Storage::SaveLoadOp::SaveLoadDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Storage::SaveLoadOp*(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, System_String*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::Storage::SaveLoadOp::SaveLoadDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAE5A0))(this, filename, buffer, callback);
  }
  ModdingAPI::Exposed::Storage::SaveLoadOp* DownloadFileAsync(System_String* targetXuid, System_String* filename, ModdingAPI::Exposed::System::Byte_array* buffer, ModdingAPI::Exposed::Storage::SaveLoadOp::SaveLoadDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Storage::SaveLoadOp*(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, System_String*, System_String*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::Storage::SaveLoadOp::SaveLoadDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAE7B0))(this, targetXuid, filename, buffer, callback);
  }
  ModdingAPI::Exposed::Storage::DeleteFileOp* DeleteFileAsync(System_String* filename, ModdingAPI::Exposed::Storage::DeleteFileOp::DeleteFileDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Storage::DeleteFileOp*(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, System_String*, ModdingAPI::Exposed::Storage::DeleteFileOp::DeleteFileDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAE9C0))(this, filename, callback);
  }
  void ::ctor(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAEC90))(this, self);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Storage::TitleStorage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAEE00))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageSaveLoadCallback*> gSaveLoadThunk = __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageSaveLoadCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->gSaveLoadThunk; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageQuotaCallback*> gQuotaThunk = __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageQuotaCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->gQuotaThunk; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageDeleteCallback*> gDeleteThunk = __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageDeleteCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->gDeleteThunk; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageUserSignedOutStorageInvalidCallback*> gUserSignedOutInvalidThunk = __CppStaticProperty<ModdingAPI::Exposed::Storage::TitleStoragePlugin::TitleStorageUserSignedOutStorageInvalidCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->gUserSignedOutInvalidThunk; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::Storage::TitleStorage* Create(int32_t userId, int32_t type, System_String* configurationId) {
    return reinterpret_cast<ModdingAPI::Exposed::Storage::TitleStorage*(__fastcall*)(int32_t, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EADBB0))(userId, type, configurationId);
  }
  static inline void QuotaRequestThunk(uint32_t result, uint64_t outTotalBytes, intptr_t userData, uint64_t outUsedBytes) {
    reinterpret_cast<void(__fastcall*)(uint32_t, uint64_t, intptr_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAEF20))(result, outTotalBytes, userData, outUsedBytes);
  }
  static inline void SaveLoadRequestThunk(uint32_t result, uint32_t size, intptr_t userData) {
    reinterpret_cast<void(__fastcall*)(uint32_t, uint32_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAF1E0))(result, size, userData);
  }
  static inline void DeleteRequestThunk(uint32_t result, int32_t ok, intptr_t userData) {
    reinterpret_cast<void(__fastcall*)(uint32_t, int32_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAF3A0))(result, ok, userData);
  }
  static inline void UserSignedOutInvalidThunk(uint32_t userId, intptr_t userData) {
    reinterpret_cast<void(__fastcall*)(uint32_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAF560))(userId, userData);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EAF690))();
  }
};
}