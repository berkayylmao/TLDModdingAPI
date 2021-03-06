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
struct __Panel_MainMenu_Il2CppStaticFields {
  bool m_IsRestarting;
  bool m_SavedGamesLoaded;
  float m_AdjustedFadeInDuration;
  bool m_HasMainMenuFadedIn;
};

struct __Panel_MainMenu_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_MainMenu_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_MainMenu_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_MainMenu_Il2CppVtbl vtbl;
};

class Panel_MainMenu {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2C250;
  static inline    __Panel_MainMenu_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Panel_MainMenu_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Panel_MainMenu_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Panel_MainMenu_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UIPanel* m_MainPanel;
  System_String* m_MainMenuMusic;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_VersionLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_AllObjects;
  bool m_StartFadedOut;
  float m_FadeOutTimeSeconds;
  float m_FadeInTimeSeconds;
  float m_MinDOFFocalLength;
  float m_MaxDOFFocalLength;
  float m_NoInputTimeBeforeFading;
  int32_t m_DefaultWeather;
  int32_t m_DefaultTODStartHour;
  int32_t m_DefaultTODStartMinutes;
  int32_t m_DefaultWindDirection;
  int32_t m_DefaultWindStrength;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_MainWindow;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SelectFeatWindow;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_DefaultSelectedButtonMainMenu;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_XboxUserPopup;
  ModdingAPI::Exposed::UILabel* m_XboxUserNameLabel;
  ModdingAPI::Exposed::UILabel* m_TrialModeTimer;
  ModdingAPI::Exposed::UILabel* m_SaveErrorMessage;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesLakeRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesCoastalRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesRuralRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesWhalingStationRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesCrashMountainRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesMarshRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesTracksRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesMountainTownRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesRiverValleyRegion;
  ModdingAPI::Exposed::System::String_array* m_IndoorStartScenesCanneryRegion;
  float m_IndoorStartChancePilgrim;
  float m_IndoorStartChanceVoyageur;
  float m_IndoorStartChanceStalker;
  float m_IndoorStartChanceInterloper;
  int32_t m_NumGamesBeforeAllowIndoorStart;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BuyNowObject;
  ModdingAPI::Exposed::GameRegion_array* m_InterloperRegions;
  ModdingAPI::Exposed::GameRegion_array* m_FourDaysOfNightRegions;
  float m_InitialScreenFadeInDuration;
  ModdingAPI::Exposed::UISprite* m_Sprite_FadeOverlay;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_HalloweenObject;
  ModdingAPI::Exposed::UILabel* m_4DONDayLabel;
  ModdingAPI::Exposed::UILabel* m_4DONDailyTimerLabel;
  System_String* m_MissionJumpToLoadOnStart;
  ModdingAPI::Exposed::StartSettings* m_StartSettings;
  uint32_t m_MusicPlayingID;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ConditionSystems;
  bool m_Quit;
  bool m_StartSettingsApplied;
  float m_PanelAlpha;
  float m_PanelAlphaTarget;
  float m_TimeNoInput;
  bool m_GameVersionWrittenToLog;
  int32_t m_SelectedSaveSlotIndex;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SandboxSlots;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ChallengeSaveSlots;
  int32_t m_SlotTypeSelected;
  float m_ScreenElapsedTime;
  System_String* m_SteamMovieFilename;
  System_String* m_GOGMovieFilename;
  System_String* m_XboxMovieFilename;
  System_String* m_PS4MovieFilename;
  System_String* m_UwpMovieFilename;
  System_String* m_TitleLocalizationId;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuRoot;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_MenuItems;
  ModdingAPI::Exposed::BasicMenu* m_BasicMenu;
  bool m_ShowResetBindingsConfirmation;
  float m_WaitingForProfileToLoadTimer;
  int32_t m_HoldMovieForD3D9Frames;
  bool m_PlayedIntroMovie;
  bool m_ShownNotifications;
  bool m_SelectedFourDaysOfNight;
  bool m_DoneFourDaysOfNightDeleteCheck;
  int32_t m_NotificationUpdateState;
  bool m_HasEnabledMainMenu;
  ModdingAPI::Exposed::ScrollList* m_FeatSelectionScrollList;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FeatSelectionButtonLeft;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FeatSelectionButtonRight;
  ModdingAPI::Exposed::UISprite* m_ProgressBarSprite;
  ModdingAPI::Exposed::UILabel* m_ProgressLabel;
  ModdingAPI::Exposed::UILabel* m_FeatNameLabel;
  ModdingAPI::Exposed::UILabel* m_FeatDescLabel;
  ModdingAPI::Exposed::UISprite* m_FeatDescLinebreak;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ActionButtonObject;
  ModdingAPI::Exposed::UILabel* m_ActionButtonLabelMouse;
  ModdingAPI::Exposed::UILabel* m_ActionButtonLabelGamepad;
  ModdingAPI::Exposed::UISprite* m_ActionButtonSpriteGamepad;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_XPModeSpriteObjects;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_ActiveFeatObjects;
  int32_t m_NumFeatsPilgrim;
  int32_t m_NumFeatsVoyageur;
  int32_t m_NumFeatsStalker;
  int32_t m_NumFeatsInterloper;
  float m_ActiveFeatCenteredX;
  float m_ActiveFeatSpacing;
  ModdingAPI::Exposed::UILabel* m_FeatBenefitHeaderLabel;
  ModdingAPI::Exposed::UILabel* m_FeatBenefitDescriptionLabel;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Feats;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SelectedFeats;
  System_String* m_ActionButtonLocID;
  bool m_ActionButtonEnabled;
  ModdingAPI::Exposed::UIButton* m_HinterlandMailingListWidget;
  ModdingAPI::Exposed::ButtonLegendContainer* m_HinterlandMailingListButtonLegendContainer;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_HinterlandMailingListHoverObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_HinterlandMailingListMouseBackground;
  ModdingAPI::Exposed::UnityEngine::BoxCollider* m_HinterlandMailingListBoxCollider;
  uint32_t m_CachedMaxLength;
  System_String* m_CachedKeyboardDesc;
  bool m_HinterlandMailingListInitialized;
  bool m_HinterlandMailingListButtonPressed;
  ModdingAPI::Exposed::UIButton* m_SkyboundInsidersWidget;
  ModdingAPI::Exposed::ButtonLegendContainer* m_SkyboundInsidersButtonLegendContainer;
  ModdingAPI::Exposed::UnityEngine::BoxCollider* m_SkyboundInsidersBoxCollider;
  bool m_SkyboundInsidersInitialized;
  bool m_SkyboundInsidersButtonPressed;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1740160))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1740280))(this);
  }
  bool HasEnabledMainMenu() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17405E0))(this);
  }
  ModdingAPI::Exposed::System::Action* GetActionFromType(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action*(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17405F0))(this, type);
  }
  void ResetSlotsRequests() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1740C40))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1740CC0))(this);
  }
  void OnMainMenuTop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1740EE0))(this);
  }
  bool IsSubMenuEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1740EF0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17414E0))(this);
  }
  void UpdateMainWindow() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17427D0))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17429A0))(this, enable);
  }
  void ClearUISaveData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1742EE0))(this);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void PrepareForSceneLoad() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1743290))(this);
  }
  void OnStory() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17432A0))(this);
  }
  void OnSandbox() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1743420))(this);
  }
  void OnFourDaysOfNight() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17436F0))(this);
  }
  void OnResumeSurvivalMode() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17439C0))(this);
  }
  void OnLoadSandboxMode(int32_t slotIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1743BC0))(this, slotIndex);
  }
  void OnLoadChallengeMode(int32_t slotIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1743DE0))(this, slotIndex);
  }
  void OnResumeChallengeMode() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744000))(this);
  }
  void OnLoadSandbox() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744200))(this);
  }
  void OnLoadChallenge() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744220))(this);
  }
  void SelectSlot(int32_t slotIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744240))(this, slotIndex);
  }
  void OnSaveSlotContinue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17442F0))(this);
  }
  int32_t GetNumSandboxSaveSlots() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744640))(this);
  }
  ModdingAPI::Exposed::SaveSlotInfo* GetSandboxSaveSlotInfo(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::SaveSlotInfo*(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17446D0))(this, index);
  }
  int32_t GetNumChallengeSaveSlots() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17447A0))(this);
  }
  ModdingAPI::Exposed::SaveSlotInfo* GetChallengeSaveSlotInfo(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::SaveSlotInfo*(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744830))(this, index);
  }
  void OnRenameExistingSandboxCancelled(bool wasCancelled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744900))(this, wasCancelled);
  }
  void OnRenameExistingSandboxConfirmed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17449C0))(this);
  }
  void DeleteSaveSlot() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744A70))(this);
  }
  void DeleteSandboxSave(ModdingAPI::Exposed::SaveSlotInfo* ssi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, ModdingAPI::Exposed::SaveSlotInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744B70))(this, ssi);
  }
  void DeleteChallengeSave(ModdingAPI::Exposed::SaveSlotInfo* ssi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, ModdingAPI::Exposed::SaveSlotInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744C70))(this, ssi);
  }
  void OnNewSandbox() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1744D70))(this);
  }
  void OnNewChallenge() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1745020))(this);
  }
  void OnSurvirvorWindow() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1745170))(this);
  }
  void OnSandboxFinal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1745230))(this);
  }
  void OnLoadGame() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1746720))(this);
  }
  void OnChallenges() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1746E10))(this);
  }
  void OnLogs() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1746FF0))(this);
  }
  void OnOptions() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17471C0))(this);
  }
  void OnExtras() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1747330))(this);
  }
  void OnQuit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1747480))(this);
  }
  void OnSelectSurvivorBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1747530))(this);
  }
  void OnSelectSurvivorContinue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1747720))(this);
  }
  System_String* NameSandboxGame(int32_t saveSlotType) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17478E0))(this, saveSlotType);
  }
  void ShowNameSaveSlotPopup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1747B90))(this);
  }
  void OnRenameNewSandboxComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1747E70))(this);
  }
  void OnRenameNewSandboxCancel(bool wasCancelled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1747E80))(this, wasCancelled);
  }
  void OnSelectExperienceContinue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1748010))(this);
  }
  void OnSelectSlotNameContinue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1748150))(this);
  }
  void PlayMainMenuMusic() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17482E0))(this);
  }
  void StopMainMenuMusic() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17483F0))(this);
  }
  void DisableMainMenuButtons() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17484F0))(this);
  }
  void EnableMainMenuButtons() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1748550))(this);
  }
  void DisableMainMenuButtonColliders() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17485B0))(this);
  }
  void EnableMainMenuButtonColliders() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17487B0))(this);
  }
  void UpdateFading() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17488F0))(this);
  }
  void FadeInPanel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1748DD0))(this);
  }
  void FadeOutPanel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1748DE0))(this);
  }
  void SetPanelAlpha(float alpha) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1748DF0))(this, alpha);
  }
  void SelectWindow(ModdingAPI::Exposed::UnityEngine::GameObject* windowToSelect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749050))(this, windowToSelect);
  }
  bool ShouldDisableMainMenuButtons() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17492E0))(this);
  }
  void OnBuyNow() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17499D0))(this);
  }
  bool HasSandboxSaveSlot() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749A60))(this);
  }
  bool HasEmptySandboxSaveSlot() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749AF0))(this);
  }
  bool HasChallengeSlot() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749B80))(this);
  }
  bool HasEmptyChallengeSlot() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749C10))(this);
  }
  void ClearSaveSlotList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749CA0))(this);
  }
  void WarmUpSmokeTrails() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749D80))(this);
  }
  void FadeOutSceneAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1749EC0))(this);
  }
  int32_t GetSandboxExperienceForIndex(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174A010))(this, index);
  }
  int32_t GetIndexFromSandboxExperience(int32_t mode) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174A150))(this, mode);
  }
  bool RegionLockedBySelectedMode() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174A2C0))(this);
  }
  void ShowResetBindingsConfirmation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174A560))(this);
  }
  void MaybeShowResetBindingsConfirmation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174A570))(this);
  }
  void ResetBindings() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174A7B0))(this);
  }
  void SetVersionLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174AAF0))(this);
  }
  void MaybeAdjustTreeBillboardDistance() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174ABD0))(this);
  }
  void LoadAllSlots() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174AE10))(this);
  }
  bool ProfileIsLoading() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B050))(this);
  }
  void PlayIntroMovie() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B180))(this);
  }
  void AddMenuItem(int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B280))(this, itemIndex);
  }
  void ConfigureMenu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B5C0))(this);
  }
  void OnSelectionUpdate(System_String* name, int32_t value, int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, name, value, itemIndex);
  }
  void Refresh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B8F0))(this);
  }
  bool HasFadedIn() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B920))(this);
  }
  float GetAlpha() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B9A0))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174B9B0))(this);
  }
  void MaybeUpdateNotificationsFromServer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174BBE0))(this);
  }
  void RetrieveNotificationsFromServer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174BD40))(this);
  }
  void UpdateSelectFeatWindow() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174C140))(this);
  }
  void UpdateSelectFeatVisuals() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174C160))(this);
  }
  void FeatSelectWindowSelected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174C4C0))(this);
  }
  void OnSelectFeatsContinue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174C6E0))(this);
  }
  void OnSelectFeatsBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174CA00))(this);
  }
  void OnToggleFeatActive() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174CAE0))(this);
  }
  void FeatSelectionNext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174CE10))(this);
  }
  void FeatSelectionPrev() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174CF30))(this);
  }
  void FeatSelectionIndexSelected(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174D050))(this, index);
  }
  void SetupFeatScrollList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174D150))(this);
  }
  void AddFeatToList(ModdingAPI::Exposed::Feat* f) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, ModdingAPI::Exposed::Feat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174D4B0))(this, f);
  }
  int32_t GetNumFeatsForXPMode(int32_t xpMode) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174D5D0))(this, xpMode);
  }
  void UpdateSelectedFeats() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174D620))(this);
  }
  void UpdateFeatProgressBar() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174DDF0))(this);
  }
  void UpdateFeatActionButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174DFE0))(this);
  }
  void UpdateFeatMarkerSprites() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174E380))(this);
  }
  void UpdateFeatControls() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174E870))(this);
  }
  void UpdateFeatButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174ECC0))(this);
  }
  void UpdateFeatLabels() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174EE00))(this);
  }
  int32_t GetNumUnlockedFeats() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174FA10))(this);
  }
  void InitializeHinterlandMailingListWidget() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174FB70))(this);
  }
  void OnClickHinterlandMailingListWidget() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17502D0))(this);
  }
  void UpdateHinterlandMailingListWidget() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17503C0))(this);
  }
  void InitializeSkyboundInsidersWidget() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnClickSkyboundInsidersWidget() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17509E0))(this);
  }
  void UpdateSkyboundInsidersWidget() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_MainMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1750AA0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> m_IsRestarting = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_IsRestarting; }
  );
  static inline __CppStaticProperty<bool> m_SavedGamesLoaded = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_SavedGamesLoaded; }
  );
  static inline __CppStaticProperty<float> m_AdjustedFadeInDuration = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AdjustedFadeInDuration; }
  );
  static inline __CppStaticProperty<bool> m_HasMainMenuFadedIn = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_HasMainMenuFadedIn; }
  );

  // Static methods:
  static inline void EnableCamera(bool isEnabled) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x174BAB0))(isEnabled);
  }
  static inline void MainMenuLoaded() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}