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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::NodeCanvas::DialogueTrees {
struct __DialogueTreeController_Il2CppStaticFields {
};

struct __DialogueTreeController_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_graph;
  VirtualInvokeData _5_set_graph;
  VirtualInvokeData _6_get_blackboard;
  VirtualInvokeData _7_set_blackboard;
  VirtualInvokeData _8_get_graphType;
  VirtualInvokeData _9_Awake;
  VirtualInvokeData _10_OnDestroy;
  VirtualInvokeData _11_NodeCanvas_DialogueTrees_IDialogueActor_get_name;
  VirtualInvokeData _12_NodeCanvas_DialogueTrees_IDialogueActor_get_portrait;
  VirtualInvokeData _13_NodeCanvas_DialogueTrees_IDialogueActor_get_portraitSprite;
  VirtualInvokeData _14_NodeCanvas_DialogueTrees_IDialogueActor_get_dialogueColor;
  VirtualInvokeData _15_NodeCanvas_DialogueTrees_IDialogueActor_get_dialoguePosition;
  VirtualInvokeData _16_NodeCanvas_DialogueTrees_IDialogueActor_get_transform;
};

struct __DialogueTreeController_Il2CppClass {
  Il2CppClass_1 _1;
  __DialogueTreeController_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DialogueTreeController_Il2CppVtbl vtbl;
};

class DialogueTreeController {
public:
  // Il2Cpp fields:
  __DialogueTreeController_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  System_String* GraphOwner_boundGraphSerialization;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GraphOwner_boundGraphObjectReferences;
  int32_t enableAction;
  int32_t disableAction;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* GraphOwner_instances;
  bool GraphOwner_initialized;
  bool GraphOwner_startCalled;
  ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTree* GraphOwner_1__graph;
  ModdingAPI::Exposed::UnityEngine::Object* GraphOwner_1__blackboard;

  // Member methods:
  System_String* NodeCanvas::DialogueTrees::IDialogueActor::get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D8C0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Texture2D* NodeCanvas::DialogueTrees::IDialogueActor::get_portrait() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Sprite* NodeCanvas::DialogueTrees::IDialogueActor::get_portraitSprite() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Sprite*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Color NodeCanvas::DialogueTrees::IDialogueActor::get_dialogueColor() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFD1600))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 NodeCanvas::DialogueTrees::IDialogueActor::get_dialoguePosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D8D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Transform* NodeCanvas::DialogueTrees::IDialogueActor::get_transform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4117E0))(this);
  }
  void StartDialogue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D980))(this);
  }
  void StartDialogue(ModdingAPI::Exposed::System::Action_T_* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D990))(this, callback);
  }
  void StartDialogue(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* instigator) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*, ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D9A0))(this, instigator);
  }
  void StartDialogue(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* instigator, ModdingAPI::Exposed::System::Action_T_* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*, ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9D9B0))(this, instigator, callback);
  }
  void PauseDialogue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9DB80))(this);
  }
  void StopDialogue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9DBB0))(this);
  }
  void SetActorReference(System_String* paramName, ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* actor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*, System_String*, ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9DBE0))(this, paramName, actor);
  }
  void SetActorReferences(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* actors) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9DCC0))(this, actors);
  }
  ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor* GetActorReferenceByName(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::DialogueTrees::IDialogueActor*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9DDA0))(this, paramName);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::DialogueTreeController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E9DE90))(this);
  }
};
}