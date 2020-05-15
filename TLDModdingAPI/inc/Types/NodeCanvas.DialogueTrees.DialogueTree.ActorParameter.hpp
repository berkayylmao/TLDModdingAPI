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


namespace ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree {
struct __ActorParameter_Il2CppStaticFields {
};

struct __ActorParameter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ActorParameter_Il2CppClass {
  Il2CppClass_1 _1;
  __ActorParameter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ActorParameter_Il2CppVtbl vtbl;
};

class ActorParameter {
public:
  // Il2Cpp fields:
  __ActorParameter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* _keyName;
  System_String* _id;
  ModdingAPI::Exposed::UnityEngine::Object* _actorObject;
  ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* _actor;

  // Member methods:
  System_String* get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  System_String* get_ID() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D610))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* get_actor() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D740))(this);
  }
  void set_actor(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*, ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D7D0))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, name);
  }
  void ::ctor(System_String* name, ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* actor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*, System_String*, ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D8A0))(this, name, actor);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree::ActorParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
};
}