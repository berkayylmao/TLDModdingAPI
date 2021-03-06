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


namespace ModdingAPI::Exposed {
struct __PropertyReference_Il2CppStaticFields {
  int32_t s_Hash;
};

struct __PropertyReference_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PropertyReference_Il2CppClass {
  Il2CppClass_1 _1;
  __PropertyReference_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PropertyReference_Il2CppVtbl vtbl;
};

class PropertyReference {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C887F8;
  static inline    __PropertyReference_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PropertyReference_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PropertyReference_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PropertyReference_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Component* mTarget;
  System_String* mName;
  ModdingAPI::Exposed::System::Reflection::FieldInfo* mField;
  ModdingAPI::Exposed::System::Reflection::PropertyInfo* mProperty;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Component* get_target() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Component*(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_target(ModdingAPI::Exposed::UnityEngine::Component* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PropertyReference*, ModdingAPI::Exposed::UnityEngine::Component*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D6F40))(this, value);
  }
  System_String* get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PropertyReference*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D6F50))(this, value);
  }
  bool get_isValid() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D6F60))(this);
  }
  bool get_isEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7030))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Component* target, System_String* fieldName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PropertyReference*, ModdingAPI::Exposed::UnityEngine::Component*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F0E70))(this, target, fieldName);
  }
  ModdingAPI::Exposed::System::Type* GetPropertyType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D71D0))(this);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PropertyReference*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D72F0))(this, obj);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7480))(this);
  }
  void Set(ModdingAPI::Exposed::UnityEngine::Component* target, System_String* methodName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PropertyReference*, ModdingAPI::Exposed::UnityEngine::Component*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F0E70))(this, target, methodName);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DEFE0))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7520))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7530))(this);
  }
  Il2CppObject* Get() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7770))(this);
  }
  bool Set(Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PropertyReference*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7830))(this, value);
  }
  bool Cache() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PropertyReference*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7DC0))(this);
  }
  bool Convert(Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PropertyReference*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D7F10))(this, value);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> s_Hash = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Hash; }
  );

  // Static methods:
  static inline System_String* ToString(ModdingAPI::Exposed::UnityEngine::Component* comp, System_String* property) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Component*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D75E0))(comp, property);
  }
  static inline bool Convert(ModdingAPI::Exposed::System::Type* from, ModdingAPI::Exposed::System::Type* to) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D8080))(from, to);
  }
  static inline bool Convert(Il2CppObject* value, ModdingAPI::Exposed::System::Type* to) {
    return reinterpret_cast<bool(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D8140))(value, to);
  }
  static inline bool Convert(Il2CppObject* value, ModdingAPI::Exposed::System::Type* from, ModdingAPI::Exposed::System::Type* to) {
    return reinterpret_cast<bool(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D8240))(value, from, to);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x17D85D0))();
  }
};
}