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
struct __Panel_Story_Il2CppStaticFields {
};

struct __Panel_Story_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_Story_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_Story_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_Story_Il2CppVtbl vtbl;
};

class Panel_Story {
public:
  // Il2Cpp fields:
  __Panel_Story_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_StoryEnabledObj;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_StoryDisabledObj;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_TopMenuStoryObj;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_MainStoryObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SaveSlotObject;
  ModdingAPI::Exposed::UITable* m_ConsoleButtonTable;
  int32_t m_StoryExperienceMode;
  System_String* m_StoryStartSpawnPoint;
  ModdingAPI::Exposed::ScrollList* m_ScrollList;
  ModdingAPI::Exposed::UILabel* m_MissionJumpDescription;
  ModdingAPI::Exposed::ScrollList* m_SaveSlotScrollList;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_SlotBGObjects;
  ModdingAPI::Exposed::UILabel* m_SaveSlotChooseLabel;
  ModdingAPI::Exposed::TextInputField* m_SlotNameInputField;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SaveSlotDeleteButton;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SaveSlotRenameButton;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SaveSlotConfirmButton;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SaveSlotBackButton;
  ModdingAPI::Exposed::UILabel* m_CategoryLabel;
  ModdingAPI::Exposed::UILabel* m_StartButtonLabel;
  ModdingAPI::Exposed::ScrollList* m_ScrollListEpisodePreview;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonNextEpisodePreview;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonPrevEpisodePreview;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_EpisodePreviewScrollListItems;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_DescriptionListEpisodePreview;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ThumbnailDefault;
  ModdingAPI::Exposed::UITexture* m_ThumbnailTexture;
  System_String* m_TitleLocalizationId;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuRoot;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_MenuItems;
  ModdingAPI::Exposed::BasicMenu* m_BasicMenu;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SwitchViewButton;
  ModdingAPI::Exposed::UILabel* m_LoadingDisplay;
  int32_t m_MenuState;
  int32_t m_SelectedSaveSlotIndex;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_StorySaveSlots;
  System_String* m_NewGameMissionJumpString;
  System_String* m_StoryStartMission;
  ModdingAPI::Exposed::Panel_Story::JumpNavTree* m_CurrentNav;
  ModdingAPI::Exposed::Panel_Story::JumpNavTree* m_TreeRoot;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_JumpList;
  bool m_AsyncLoadCompleted;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4B90))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4C30))(this);
  }
  void ProcessCheat() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  ModdingAPI::Exposed::System::Action* GetActionFromType(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action*(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4DC0))(this, type);
  }
  void ConfigureMenu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B50D0))(this);
  }
  void AddMenuItem(int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B5580))(this, itemIndex);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B5810))(this);
  }
  void UpdateEpisodePreview() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B5B90))(this);
  }
  void RefreshEpisodePreviewDesc() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B5EE0))(this);
  }
  void UpdateMainState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B6010))(this);
  }
  void UpdateSelectSlot() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B6190))(this);
  }
  void OnSelectEpisodePreviewByReference(ModdingAPI::Exposed::UnityEngine::GameObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B6920))(this, obj);
  }
  void OnEpisodePreviewNext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B6AA0))(this);
  }
  void OnEpisodePreviewPrev() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B6B90))(this);
  }
  void ScrollUp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ScrollDown() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnScrollItemSelect(int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, itemIndex);
  }
  void RefreshStorySaveSlots() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B6C70))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B6F50))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void OnStartButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B7290))(this);
  }
  int32_t GetStoryGender() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B7340))(this);
  }
  void OnNewEpisode(System_String* missionJumpString, int32_t episode, System_String* saveDisplayName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, System_String*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B73E0))(this, missionJumpString, episode, saveDisplayName);
  }
  void OnNewEpisodeFadeCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B79F0))(this);
  }
  void DeprecatedOnNewStory() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B7B10))(this);
  }
  void OnMissionJump() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  bool OnLoadStory(ModdingAPI::Exposed::SaveSlotInfo* ssi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::SaveSlotInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B7B50))(this, ssi);
  }
  void LoadStorySaveSlot(ModdingAPI::Exposed::SaveSlotInfo* ssi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::SaveSlotInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B7C90))(this, ssi);
  }
  void DeserializeStoryManagerCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8020))(this);
  }
  void OnSaveSlotNext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8150))(this);
  }
  void OnSaveSlotPrev() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8170))(this);
  }
  void SelectSlot(int32_t slotIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8190))(this, slotIndex);
  }
  void DeprecatedOnSaveSlotContinue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8380))(this);
  }
  void OnRename() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B84D0))(this);
  }
  void OnRenameExistingSandboxCancelled(bool wasCancelled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B88C0))(this, wasCancelled);
  }
  void ClearSaveSlotList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8980))(this);
  }
  void OnRenameExistingSandboxConfirmed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8A30))(this);
  }
  void OnDeleteCancelled(bool wasCancelled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8C50))(this, wasCancelled);
  }
  void OnDelete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B8D10))(this);
  }
  void OnDeleteConfirmed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B9000))(this);
  }
  void DeleteSaveSlot(ModdingAPI::Exposed::SaveSlotInfo* ssi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::SaveSlotInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B90B0))(this, ssi);
  }
  void OnSaveSlotBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B9180))(this);
  }
  void EnterMenuState(int32_t newState) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B92E0))(this, newState);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B93D0))(this);
  }
  void RebuildSaveSlotScrollList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B94B0))(this);
  }
  int32_t GetNumStorySaveSlots() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B98B0))(this);
  }
  ModdingAPI::Exposed::SaveSlotInfo* GetStorySaveSlotInfo(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::SaveSlotInfo*(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B9940))(this, index);
  }
  ModdingAPI::Exposed::SaveSlotInfo* GetStorySaveSlotInfo(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::SaveSlotInfo*(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B9A10))(this, name);
  }
  void OnClickNew() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B9B70))(this);
  }
  void OnClickLoad() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B9E40))(this);
  }
  void OnClickResume() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B9F80))(this);
  }
  void OnClickBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BA090))(this);
  }
  void OnDoubleClick() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnSwitchView() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnSelectionUpdate(System_String* name, int32_t value, int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, name, value, itemIndex);
  }
  void LoadStory(ModdingAPI::Exposed::SaveSlotInfo* ssi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::SaveSlotInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BA1B0))(this, ssi);
  }
  void LoadStoryForMigration(ModdingAPI::Exposed::SaveSlotInfo* ssi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::SaveSlotInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BA450))(this, ssi);
  }
  void BuildChallengeTree() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BA970))(this);
  }
  void BuildJumpTree() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BAC80))(this);
  }
  void BuildSandboxTree() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BADF0))(this);
  }
  void BuildStoryTree() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BB100))(this);
  }
  void CancelAsyncLoad() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BBD10))(this);
  }
  bool CanSwitchView() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BBE60))(this);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BBF20))(this);
  }
  void DoFileJump() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BBF30))(this);
  }
  System_String* GetFileJumpCategory() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BC0B0))(this);
  }
  void NavigateDown() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BC1D0))(this);
  }
  bool OnJumpBack() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BC2F0))(this);
  }
  void SetupJumpScrollList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BC330))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* SortJumpData(ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* jumplist) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BC8C0))(this, jumplist);
  }
  void LoadAllJumpData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BCB90))(this);
  }
  void OnJumpLoadComplete(ModdingAPI::Exposed::System::Collections::Generic::List_T_* jumps) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BCF00))(this, jumps);
  }
  void UpdateAsyncLoading() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BD000))(this);
  }
  void UpdateJumpButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BD0F0))(this);
  }
  void UpdateJumpMenu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BD290))(this);
  }
  void UpdateSelectedJump() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BD480))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Story*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18BD810))(this);
  }
};
}