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
#include "ModdingAPI::Exposed::UnityEngine::Hash128.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Hash128.hpp"


namespace ModdingAPI::Exposed {
struct __FastJson_Il2CppStaticFields {
  int32_t enumSerializationMethod;
  ModdingAPI::Exposed::System::Text::StringBuilder* m_StringBuilder;
  ModdingAPI::Exposed::System::Type_array* serializerrArgs;
  ModdingAPI::Exposed::System::Type_array* deserializerArgs;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* fieldSerializerCache;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* serializerCache;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* deserializerCache;
  ModdingAPI::Exposed::System::Byte_array* encodeCharaTable;
  ModdingAPI::Exposed::System::Byte_array* decodeCharaTable;
  ModdingAPI::Exposed::System::Byte_array* hexDecodeTable;
  ModdingAPI::Exposed::System::Boolean_array* jsonSeparator;
  ModdingAPI::Exposed::System::Char_array* hexBuff;
  ModdingAPI::Exposed::System::Char_array* numberBuff;
  ModdingAPI::Exposed::System::Reflection::FieldInfo_array* hash128Fields;
  ModdingAPI::Exposed::System::Char_array* hash128Buff;
};

struct __FastJson_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FastJson_Il2CppClass {
  Il2CppClass_1 _1;
  __FastJson_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FastJson_Il2CppVtbl vtbl;
};

class FastJson {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C60730;
  static inline    __FastJson_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FastJson_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FastJson_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FastJson_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<int32_t> enumSerializationMethod = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->enumSerializationMethod; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Text::StringBuilder*> m_StringBuilder = __CppStaticProperty<ModdingAPI::Exposed::System::Text::StringBuilder*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_StringBuilder; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*> serializerrArgs = __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->serializerrArgs; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*> deserializerArgs = __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->deserializerArgs; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> fieldSerializerCache = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->fieldSerializerCache; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> serializerCache = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->serializerCache; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> deserializerCache = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->deserializerCache; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> encodeCharaTable = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->encodeCharaTable; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> decodeCharaTable = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->decodeCharaTable; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> hexDecodeTable = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->hexDecodeTable; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Boolean_array*> jsonSeparator = __CppStaticProperty<ModdingAPI::Exposed::System::Boolean_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->jsonSeparator; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> hexBuff = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->hexBuff; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> numberBuff = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->numberBuff; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::FieldInfo_array*> hash128Fields = __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::FieldInfo_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->hash128Fields; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> hash128Buff = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->hash128Buff; }
  );

  // Static methods:
  static inline void RegisterSerializer(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::Serializer* serializer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::Serializer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19203E0))(type, serializer);
  }
  static inline void RegisterDeserializer(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::Deserializer* deserializer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::Deserializer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19204F0))(type, deserializer);
  }
  static inline System_String* Serialize(Il2CppObject* obj) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1920600))(obj);
  }
  static inline void _Serialize(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19207F0))(sb, obj);
  }
  static inline ModdingAPI::Exposed::FastJson::Serializer* _GetSerializer(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::FastJson::Serializer*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1920900))(type);
  }
  static inline void _SerializeArray(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19214E0))(sb, obj);
  }
  static inline void _SerializeList(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1921BF0))(sb, obj);
  }
  static inline void _SerializeDictionary(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1922140))(sb, obj);
  }
  static inline void _SerializeHashSet(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1922920))(sb, obj);
  }
  static inline void _SerializeObject(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1922F10))(sb, obj);
  }
  static inline bool _SerializeIfNull(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1923600))(sb, obj);
  }
  static inline void _Register(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::Serializer* serializer, ModdingAPI::Exposed::FastJson::Deserializer* deserializer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::Serializer*, ModdingAPI::Exposed::FastJson::Deserializer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19236B0))(type, serializer, deserializer);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19237F0))();
  }
  static inline int32_t HexToInt(wchar_t ch) {
    return reinterpret_cast<int32_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927300))(ch);
  }
  static inline wchar_t IntToHex(int32_t i) {
    return reinterpret_cast<wchar_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927410))(i);
  }
  static inline wchar_t IntToHex(uint32_t i) {
    return reinterpret_cast<wchar_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927420))(i);
  }
  static inline bool IsDigit(wchar_t ch) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9C23A0))(ch);
  }
  static inline bool IsSpace(wchar_t ch) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927430))(ch);
  }
  static inline bool IsJsonSeparator(wchar_t ch) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927440))(ch);
  }
  static inline wchar_t ToUpper(wchar_t ch) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927560))(ch);
  }
  static inline void _ToString(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927570))(sb, obj);
  }
  static inline void _SerializeSByte(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927660))(sb, obj);
  }
  static inline void _SerializeInt16(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19279E0))(sb, obj);
  }
  static inline void _SerializeInt32(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1927D50))(sb, obj);
  }
  static inline void _SerializeInt64(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1928090))(sb, obj);
  }
  static inline void _SerializeByte(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1928420))(sb, obj);
  }
  static inline void _SerializeUInt16(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1928670))(sb, obj);
  }
  static inline void _SerializeUInt32(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19288C0))(sb, obj);
  }
  static inline void _SerializeUInt64(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1928AF0))(sb, obj);
  }
  static inline void _SerializeBool(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1928D20))(sb, obj);
  }
  static inline void _SerializeChar(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1928E10))(sb, obj);
  }
  static inline void _SerializeString(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1928EF0))(sb, obj);
  }
  static inline void _SerializeEnumName(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1929310))(sb, obj);
  }
  static inline void _SerializeVector2(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* vec) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1929380))(sb, vec);
  }
  static inline void _SerializeVector3(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* vec) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19294F0))(sb, vec);
  }
  static inline void _SerializeVector4(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* vec) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19296B0))(sb, vec);
  }
  static inline void _SerializeQuaternion(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* q) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19299A0))(sb, q);
  }
  static inline void _SerializeRect(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* rect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1929C90))(sb, rect);
  }
  static inline void _SerializeColor(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* color) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1929F80))(sb, color);
  }
  static inline void _SerializeColor32(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* color) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192A270))(sb, color);
  }
  static inline System_String* Hash128ToString(ModdingAPI::Exposed::UnityEngine::Hash128 hash) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Hash128)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192A5D0))(hash);
  }
  static inline void _SerializeHash128(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* hash) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192A860))(sb, hash);
  }
  static inline void _SerializeDate(ModdingAPI::Exposed::System::Text::StringBuilder* sb, Il2CppObject* date) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192AA90))(sb, date);
  }
  static inline Il2CppObject* Deserialize(System_String* jsonText, ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192AB90))(jsonText, type);
  }
  static inline Il2CppObject* _Deserialize(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192AD20))(type, parser);
  }
  static inline Il2CppObject* _GetDefault(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192AE60))(type);
  }
  static inline ModdingAPI::Exposed::FastJson::Deserializer* _GetDeserializer(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::FastJson::Deserializer*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192AEC0))(type);
  }
  static inline Il2CppObject* _DeserializeArray(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192BA00))(type, parser);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* _ParseArray(ModdingAPI::Exposed::FastJson::JsonParser* parser, ModdingAPI::Exposed::System::Type* elementType, ModdingAPI::Exposed::FastJson::Deserializer* deserializer, int32_t nest, ModdingAPI::Exposed::System::Int32_array* length) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::FastJson::JsonParser*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::Deserializer*, int32_t, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192C300))(parser, elementType, deserializer, nest, length);
  }
  static inline void _SetArray(ModdingAPI::Exposed::System::Array* array, ModdingAPI::Exposed::System::Int32_array* indices, ModdingAPI::Exposed::System::Collections::Generic::List_T_* listList, int32_t nest) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192C6A0))(array, indices, listList, nest);
  }
  static inline Il2CppObject* _DeserializeList(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192C8A0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeHashSet(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192CBF0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeDictionary(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192CF00))(type, parser);
  }
  static inline Il2CppObject* _DeserializeEnum(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192D2C0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeObject(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192D430))(type, parser);
  }
  static inline Il2CppObject* _DeserializeInt16(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192D710))(type, parser);
  }
  static inline Il2CppObject* _DeserializeInt32(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192D7B0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeInt64(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192D850))(type, parser);
  }
  static inline Il2CppObject* _DeserializeUInt16(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192D8F0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeUInt32(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192D990))(type, parser);
  }
  static inline Il2CppObject* _DeserializeUInt64(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DA30))(type, parser);
  }
  static inline Il2CppObject* _DeserializeString(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DAD0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeFloat(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DB30))(type, parser);
  }
  static inline Il2CppObject* _DeserializeDouble(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DC60))(type, parser);
  }
  static inline Il2CppObject* _DeserializeByte(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DD70))(type, parser);
  }
  static inline Il2CppObject* _DeserializeSByte(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DE10))(type, parser);
  }
  static inline Il2CppObject* _DeserializeBoolean(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DEB0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeDecimal(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192DF50))(type, parser);
  }
  static inline Il2CppObject* _DeserializeChar(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192E060))(type, parser);
  }
  static inline Il2CppObject* _DeserializeVector2(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192E100))(type, parser);
  }
  static inline Il2CppObject* _DeserializeVector3(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192E2D0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeVector4(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192E520))(type, parser);
  }
  static inline Il2CppObject* _DeserializeQuaternion(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192E7D0))(type, parser);
  }
  static inline Il2CppObject* _DeserializeRect(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192EA80))(type, parser);
  }
  static inline Il2CppObject* _DeserializeColor(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192ED30))(type, parser);
  }
  static inline Il2CppObject* _DeserializeColor32(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192EFE0))(type, parser);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Hash128 ParseHash128(System_String* hex) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Hash128(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192F1F0))(hex);
  }
  static inline Il2CppObject* _DeserializeHash128(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192F470))(type, parser);
  }
  static inline Il2CppObject* _DeserializeDate(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::FastJson::JsonParser* parser) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::FastJson::JsonParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192F6E0))(type, parser);
  }
  static inline ModdingAPI::Exposed::System::Reflection::FieldInfo* _GetFieldInfo(ModdingAPI::Exposed::System::Type* type, System_String* fieldName, int32_t bindingFlags) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::FieldInfo*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x192F800))(type, fieldName, bindingFlags);
  }
};
}