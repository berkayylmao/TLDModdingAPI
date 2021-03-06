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
#include "ModdingAPI.Exposed.System.ConsoleKeyInfo.hpp"


namespace ModdingAPI::Exposed::System {
struct __TermInfoDriver_Il2CppStaticFields {
  int32_t* native_terminal_size;
  int32_t terminal_size;
  ModdingAPI::Exposed::System::String_array* locations;
  ModdingAPI::Exposed::System::Int32_array* _consoleColorToAnsiCode;
};

struct __TermInfoDriver_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_ReadKey;
  VirtualInvokeData _5_get_Initialized;
  VirtualInvokeData _6_Init;
  VirtualInvokeData _7_get_WindowHeight;
  VirtualInvokeData _8_get_WindowWidth;
  VirtualInvokeData _9_ReadLine;
  VirtualInvokeData _10_SetCursorPosition;
};

struct __TermInfoDriver_Il2CppClass {
  Il2CppClass_1 _1;
  __TermInfoDriver_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TermInfoDriver_Il2CppVtbl vtbl;
};

class TermInfoDriver {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8C498;
  static inline    __TermInfoDriver_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TermInfoDriver_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TermInfoDriver_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TermInfoDriver_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::TermInfoReader* reader;
  int32_t cursorLeft;
  int32_t cursorTop;
  System_String* title;
  System_String* titleFormat;
  bool cursorVisible;
  System_String* csrVisible;
  System_String* csrInvisible;
  System_String* clear;
  System_String* bell;
  System_String* term;
  ModdingAPI::Exposed::System::IO::StreamReader* stdin;
  ModdingAPI::Exposed::System::IO::CStreamWriter* stdout;
  int32_t windowWidth;
  int32_t windowHeight;
  int32_t bufferHeight;
  int32_t bufferWidth;
  ModdingAPI::Exposed::System::Char_array* buffer;
  int32_t readpos;
  int32_t writepos;
  System_String* keypadXmit;
  System_String* keypadLocal;
  bool inited;
  Il2CppObject* initLock;
  bool initKeys;
  System_String* origPair;
  System_String* origColors;
  System_String* cursorAddress;
  int32_t fgcolor;
  System_String* setfgcolor;
  System_String* setbgcolor;
  int32_t maxColors;
  bool noGetPosition;
  ModdingAPI::Exposed::System::Collections::Hashtable* keymap;
  ModdingAPI::Exposed::System::ByteMatcher* rootmap;
  int32_t rl_startx;
  int32_t rl_starty;
  ModdingAPI::Exposed::System::Byte_array* control_characters;
  ModdingAPI::Exposed::System::Char_array* echobuf;
  int32_t echon;

  // Member methods:
  void WriteConsole(System_String* str) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE970A0))(this, str);
  }
  void ::ctor(System_String* term) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE970D0))(this, term);
  }
  bool get_Initialized() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319870))(this);
  }
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE979F0))(this);
  }
  void IncrementX() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98300))(this);
  }
  void WriteSpecialKey(ModdingAPI::Exposed::System::ConsoleKeyInfo key) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, ModdingAPI::Exposed::System::ConsoleKeyInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98390))(this, key);
  }
  void WriteSpecialKey(wchar_t c) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE985B0))(this, c);
  }
  bool IsSpecialKey(ModdingAPI::Exposed::System::ConsoleKeyInfo key) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, ModdingAPI::Exposed::System::ConsoleKeyInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98600))(this, key);
  }
  bool IsSpecialKey(wchar_t c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE986A0))(this, c);
  }
  void GetCursorPosition() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98770))(this);
  }
  void CheckWindowDimensions() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98860))(this);
  }
  int32_t get_WindowHeight() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98AB0))(this);
  }
  int32_t get_WindowWidth() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98AE0))(this);
  }
  void AddToBuffer(int32_t b) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98B10))(this, b);
  }
  void AdjustBuffer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98C50))(this);
  }
  ModdingAPI::Exposed::System::ConsoleKeyInfo CreateKeyInfoFromInt(int32_t n, bool alt) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ConsoleKeyInfo(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98C70))(this, n, alt);
  }
  Il2CppObject* GetKeyFromBuffer(bool cooked) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE98DA0))(this, cooked);
  }
  ModdingAPI::Exposed::System::ConsoleKeyInfo ReadKeyInternal(bool fresh) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ConsoleKeyInfo(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99200))(this, fresh);
  }
  bool InputPending() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99400))(this);
  }
  void QueueEcho(wchar_t c) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99440))(this, c);
  }
  void Echo(ModdingAPI::Exposed::System::ConsoleKeyInfo key) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, ModdingAPI::Exposed::System::ConsoleKeyInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99590))(this, key);
  }
  void EchoFlush() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE997D0))(this);
  }
  int32_t Read(ModdingAPI::Exposed::System::Char_array* dest, int32_t index, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99820))(this, dest, index, count);
  }
  ModdingAPI::Exposed::System::ConsoleKeyInfo ReadKey(bool intercept) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ConsoleKeyInfo(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99EA0))(this, intercept);
  }
  System_String* ReadLine() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99F50))(this);
  }
  System_String* ReadToEnd() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99F60))(this);
  }
  System_String* ReadUntilConditionInternal(bool haltOnNewLine) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE99F70))(this, haltOnNewLine);
  }
  void SetCursorPosition(int32_t left, int32_t top) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE9A320))(this, left, top);
  }
  void CreateKeyMap() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE9A570))(this);
  }
  void InitKeys() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE9CC40))(this);
  }
  void AddStringMapping(int32_t s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TermInfoDriver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE9CEF0))(this, s);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t*> native_terminal_size = __CppStaticProperty<int32_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->native_terminal_size; }
  );
  static inline __CppStaticProperty<int32_t> terminal_size = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->terminal_size; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> locations = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->locations; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> _consoleColorToAnsiCode = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_consoleColorToAnsiCode; }
  );

  // Static methods:
  static inline System_String* TryTermInfoDir(System_String* dir, System_String* term) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE96D40))(dir, term);
  }
  static inline System_String* SearchTerminfo(System_String* term) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE96ED0))(term);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xE9CF50))();
  }
};
}