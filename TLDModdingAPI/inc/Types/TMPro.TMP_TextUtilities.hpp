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
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI::Exposed::TMPro::TMP_TextUtilities::LineSegment.hpp"


namespace ModdingAPI::Exposed::TMPro {
struct __TMP_TextUtilities_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Vector3_array* m_rectWorldCorners;
};

struct __TMP_TextUtilities_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TMP_TextUtilities_Il2CppClass {
  Il2CppClass_1 _1;
  __TMP_TextUtilities_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TMP_TextUtilities_Il2CppVtbl vtbl;
};

class TMP_TextUtilities {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C24B18;
  static inline    __TMP_TextUtilities_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TMP_TextUtilities_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TMP_TextUtilities_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TMP_TextUtilities_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*> m_rectWorldCorners = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_rectWorldCorners; }
  );

  // Static methods:
  static inline int32_t GetCursorIndexFromPosition(ModdingAPI::Exposed::TMPro::TMP_Text* textComponent, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA8110))(textComponent, position, camera);
  }
  static inline int32_t GetCursorIndexFromPosition(ModdingAPI::Exposed::TMPro::TMP_Text* textComponent, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera, int32_t cursor) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA83E0))(textComponent, position, camera, cursor);
  }
  static inline int32_t FindNearestLine(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA8770))(text, position, camera);
  }
  static inline int32_t FindNearestCharacterOnLine(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, int32_t line, ModdingAPI::Exposed::UnityEngine::Camera* camera, bool visibleOnly) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t, ModdingAPI::Exposed::UnityEngine::Camera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA8B30))(text, position, line, camera, visibleOnly);
  }
  static inline bool IsIntersectingRectTransform(ModdingAPI::Exposed::UnityEngine::RectTransform* rectTransform, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::RectTransform*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA91E0))(rectTransform, position, camera);
  }
  static inline int32_t FindIntersectingCharacter(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera, bool visibleOnly) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA9450))(text, position, camera, visibleOnly);
  }
  static inline int32_t FindNearestCharacter(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera, bool visibleOnly) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA98A0))(text, position, camera, visibleOnly);
  }
  static inline int32_t FindIntersectingWord(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA9EE0))(text, position, camera);
  }
  static inline int32_t FindNearestWord(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAAE00))(text, position, camera);
  }
  static inline int32_t FindIntersectingLine(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAABD20))(text, position, camera);
  }
  static inline int32_t FindIntersectingLink(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAC020))(text, position, camera);
  }
  static inline int32_t FindNearestLink(ModdingAPI::Exposed::TMPro::TMP_Text* text, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Camera* camera) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAACA70))(text, position, camera);
  }
  static inline bool PointIntersectRectangle(ModdingAPI::Exposed::UnityEngine::Vector3 m, ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c, ModdingAPI::Exposed::UnityEngine::Vector3 d) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAADA30))(m, a, b, c, d);
  }
  static inline bool ScreenPointToWorldPointInRectangle(ModdingAPI::Exposed::UnityEngine::Transform* transform, ModdingAPI::Exposed::UnityEngine::Vector2 screenPoint, ModdingAPI::Exposed::UnityEngine::Camera* cam, ModdingAPI::Exposed::UnityEngine::Vector3 worldPoint) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAADD10))(transform, screenPoint, cam, worldPoint);
  }
  static inline bool IntersectLinePlane(ModdingAPI::Exposed::TMPro::TMP_TextUtilities::LineSegment line, ModdingAPI::Exposed::UnityEngine::Vector3 point, ModdingAPI::Exposed::UnityEngine::Vector3 normal, ModdingAPI::Exposed::UnityEngine::Vector3 intersectingPoint) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextUtilities::LineSegment, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAE000))(line, point, normal, intersectingPoint);
  }
  static inline float DistanceToLine(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAE2B0))(a, b, point);
  }
  static inline wchar_t ToLowerFast(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAE5E0))(c);
  }
  static inline wchar_t ToUpperFast(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAE680))(c);
  }
  static inline int32_t GetSimpleHashCode(System_String* s) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7D10))(s);
  }
  static inline uint32_t GetSimpleHashCodeLowercase(System_String* s) {
    return reinterpret_cast<uint32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAE720))(s);
  }
  static inline int32_t HexToInt(wchar_t hex) {
    return reinterpret_cast<int32_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAE810))(hex);
  }
  static inline int32_t StringHexToInt(System_String* s) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAE920))(s);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAEA70))();
  }
};
}