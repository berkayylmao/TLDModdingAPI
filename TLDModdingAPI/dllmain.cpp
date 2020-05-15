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
//      This product includes software developed by the Berkay Yigit.
//      To support the developer, please donate to:
//      "https://www.paypal.me/berkayylmao".
//   4. Neither the name of the "berkayylmao's The Long Dark Mods" nor the
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

#include "pch.h"
// Internals
#include "Internals/Internals.hpp"
#include "Internals/Menus/D3D9Menu.hpp"
#include "Internals/Menus/D3D11Menu.hpp"
#include "GenericHelpers/Memory/DetourHook.hpp"
// OnGameLoaded
#include "inc/Types/System_String.hpp"
#include "inc/Types/UnityEngine_SceneManagement_Scene.hpp"
#include "inc/Types/UnityEngine_SceneManagement_SceneManager.hpp"

MODDINGAPI_NAMESPACE_BEGIN()
// Mod functions
constexpr char* CONSTANT_strFnModGetModName       = _STRINGIFY(MOD_NAMESPACE) "::GetModName";
constexpr char* CONSTANT_strFnModGetModAuthorName = _STRINGIFY(MOD_NAMESPACE) "::GetModAuthorName";
constexpr char* CONSTANT_strFnModGetModVersion    = _STRINGIFY(MOD_NAMESPACE) "::GetModVersion";
constexpr char* CONSTANT_strFnModOnLoad           = _STRINGIFY(MOD_NAMESPACE) "::OnLoad";
constexpr char* CONSTANT_strFnModOnFrame          = _STRINGIFY(MOD_NAMESPACE) "::OnFrame";
constexpr char* CONSTANT_strFnModDrawMenu         = _STRINGIFY(MOD_NAMESPACE) "::DrawMenu";
constexpr char* CONSTANT_strFnModOnGameLoaded     = _STRINGIFY(MOD_NAMESPACE) "::OnGameLoaded";
constexpr char* CONSTANT_strFnModOnSceneChanged   = _STRINGIFY(MOD_NAMESPACE) "::OnSceneChanged";

// Paths
constexpr char* CONSTANT_strTLDModdingAPIFolderName = "TLDModdingAPI";
constexpr char* CONSTANT_strLogsFolderName          = "Logs";
constexpr char* CONSTANT_strModsFolderName          = "Mods";

// MessageBox titles
constexpr char* CONSTANT_strMsgTitleError     = "TLD Modding API - ERROR";
constexpr char* CONSTANT_strMsgTitleWarning   = "TLD Modding API - WARNING";
constexpr char* CONSTANT_strMsgTitleInfoTitle = "TLD Modding API - INFORMATION";

// Debug messages
constexpr char* CONSTANT_strMsgDebugCallingFnFormat = "Calling '%s' on '%s'.";

// Error messages
constexpr char* CONSTANT_strMsgErrorGetModuleFileNameWErrorFormat =
    "GetModuleFileNameW failed.\r\nError code: %#08X.";

// Warning messages
constexpr char* CONSTANT_strMsgWarningMissingXFormat =
    "'%s' is missing! Mods that depend on it may not work.";
constexpr char* CONSTANT_strMsgWarningLoadXFailedFormat =
    "'%s' could not be loaded! Mods that depend on it may not work.";
constexpr char* CONSTANT_strMsgWarningLoadXFailedFormatWErrorCode =
    "'%s' could not be loaded! Mods that depend on it may not work.\r\nError code: %#08X.";
constexpr char* CONSTANT_strMsgWarningInitXFailedFormat =
    "'%s' could not be initiliazed! Mods that depend on it may not work.";
constexpr char* CONSTANT_strMsgWarningMirrorHookAutoInitFailed =
    "MirrorHook could not initiliaze automatically. Manually feeding hWnd.";

// Info messages
constexpr char* CONSTANT_strMsgInfoLoadingXFormat   = "Attempting to load '%s'...";
constexpr char* CONSTANT_strMsgInfoLoadedXFormat    = "Loaded '%s' successfully!";
constexpr char* CONSTANT_strMsgInfoSettingUpXFormat = "Setting up '%s'...";
constexpr char* CONSTANT_strMsgInfoWaitUnity        = "Waiting for Unity to initialize...";
constexpr char* CONSTANT_strMsgInfoMirrorHookReady  = "MirrorHook is ready!";

HMODULE hThisModule = NULL;

DWORD WINAPI Init(LPVOID) {
  ModdingAPI_Log(LogLevel::Info, "Welcome to TLD Modding API v" MODDINGAPI_VERSION_STR "!");
  wchar_t szModulePath[MAX_PATH] = {0};
  // Get TLD's directory
  {
    if (!GetModuleFileNameW(hThisModule, szModulePath, _countof(szModulePath))) {
      std::string msg =
          fmt::sprintf(CONSTANT_strMsgErrorGetModuleFileNameWErrorFormat, GetLastError());
      ModdingAPI_Log(LogLevel::Error, msg);
      MessageBoxA(NULL, msg.c_str(), CONSTANT_strMsgTitleError, MB_ICONERROR);

      return FALSE;
    }
  }

  bool        hasLoadedMirrorHook = false, wasMirrorHookInitSuccessful = false;
  static auto mLoadedMods             = std::map<HMODULE, std::string>();
  const auto  pathGameFolder          = std::filesystem::path(szModulePath).parent_path();
  const auto  pathTLDModdingAPIFolder = pathGameFolder / CONSTANT_strTLDModdingAPIFolderName;
  const auto  pathModsFolder          = pathTLDModdingAPIFolder / CONSTANT_strModsFolderName;
  const auto  pathLogsFolder          = pathTLDModdingAPIFolder / CONSTANT_strLogsFolderName;

  // Handle logs directory + new log filename
  {
#ifdef _DEBUG
    AllocConsole();
    FILE* pDummy;
    freopen_s(&pDummy, "CONOUT$", "w", stdout);
    Helpers::Logger::details::logLevel = LogLevel::DebugConsole;
#else
    Helpers::Logger::details::logLevel = LogLevel::Info;
#endif

    std::stringstream ss;
    time_t            time = std::time(nullptr);
    tm                timeInfo;
    localtime_s(&timeInfo, &time);
    ss << std::put_time(&timeInfo, "TLDModdingAPI_Log [%d-%m-%Y %H.%M.%S].log");

    // Delete logs if more than 20 exist
    {
      if (std::filesystem::exists(pathLogsFolder)) {
        size_t numLogFiles = std::count_if(
            std::filesystem::directory_iterator(pathLogsFolder), {},
            static_cast<bool (*)(const std::filesystem::path&)>(std::filesystem::is_regular_file));
        if (numLogFiles > 20) {
          // Deletes all files until I figure out how to sort by name, TODO:Improve
          std::filesystem::remove_all(pathLogsFolder);
        }
      }
    }

    std::filesystem::create_directories(pathLogsFolder);
    Helpers::Logger::details::pathLogFile = (pathLogsFolder / ss.str()).string();
  }

  // Log paths
  {
    ModdingAPI_Log(LogLevel::Debug, fmt::sprintf(L"szModulePath: %ls", std::wstring(szModulePath)));
    ModdingAPI_Log(LogLevel::Debug, fmt::format("pathGameFolder: {}", pathGameFolder.string()));
    ModdingAPI_Log(LogLevel::Debug, fmt::format("pathModsFolder: {}", pathModsFolder.string()));
    ModdingAPI_Log(LogLevel::Debug,
                   fmt::format("pathTLDModdingAPIFolder: {}", pathTLDModdingAPIFolder));
  }

  // Try to load MirrorHook
  {
    ModdingAPI_Log(LogLevel::Info, fmt::sprintf(CONSTANT_strMsgInfoLoadingXFormat, "MirrorHook"));
    if (!std::filesystem::exists(pathTLDModdingAPIFolder / "MirrorHook.dll")) {
      ModdingAPI_Log(LogLevel::Warning,
                     fmt::sprintf(CONSTANT_strMsgWarningMissingXFormat, "MirrorHook.dll"));
    } else {
      if (!LoadLibraryW((pathTLDModdingAPIFolder / "MirrorHook.dll").wstring().c_str())) {
        ModdingAPI_Log(LogLevel::Warning,
                       fmt::sprintf(CONSTANT_strMsgWarningLoadXFailedFormat, "MirrorHook"));
      } else {
        hasLoadedMirrorHook = true;
      }
    }
  }

  // Wait for Unity to init
  {
    ModdingAPI_Log(LogLevel::Info, CONSTANT_strMsgInfoWaitUnity);
    while (!GetModuleHandleW(L"GameAssembly.dll")) Sleep(250);
    ModdingAPI_Log(LogLevel::Debug, "GameAssembly.dll was loaded.");
  }

  // Hook GameManager::Update
  {
    ModdingAPI_Log(LogLevel::Debug, "Hooking GameManager::Update");
    // Fill in proxy
    {
      // -> Call Panel_MissionsStory$$MaybeShowNotificationsInQueue
      Helpers::Memory::GetInstance().WriteCall(
          (DWORD64)&Internals::Hooks::hkGameManager_Update_ASMProxy,
          Helpers::Memory::GetInstance().MakeAbsolute(0x1A52ED0), true);
      // -> Call hook
      Helpers::Memory::GetInstance().WriteCall(
          (DWORD64)&Internals::Hooks::hkGameManager_Update_ASMProxy + 5,
          (DWORD64)&Internals::Hooks::hkGameManager_Update, true);
      // -> Jump back
      Helpers::Memory::GetInstance().WriteJMP(
          (DWORD64)&Internals::Hooks::hkGameManager_Update_ASMProxy + 10,
          Helpers::Memory::GetInstance().MakeAbsolute(0x160804B), true);
    }

    // -> Detour GameManager::Update to proxy
    // Hooked function call: InterfaceManager.m_Panel_MissionsStory.MaybeShowNotificationsInQueue()
    Helpers::Memory::GetInstance().WriteJMP(
        0x1608046, (DWORD64)&Internals::Hooks::hkGameManager_Update_ASMProxy, false);
  }

  // Init MirrorHook
  {
    if (hasLoadedMirrorHook) {
      ModdingAPI_Log(LogLevel::Info,
                     fmt::sprintf(CONSTANT_strMsgInfoSettingUpXFormat, "MirrorHook"));
      {
        ModdingAPI_Log(LogLevel::Debug, "Getting MirrorHook handle...");
        HMODULE hMirrorHook = nullptr;
        while (!hMirrorHook) {
          hMirrorHook = GetModuleHandleW(L"MirrorHook.dll");
          Sleep(100);
        }

        wasMirrorHookInitSuccessful = true;
        if (!MirrorHook::WasAutoInitSuccessful()) {
          ModdingAPI_Log(LogLevel::Warning, CONSTANT_strMsgWarningMirrorHookAutoInitFailed);
          ModdingAPI_Log(LogLevel::Debug, "Trying to find host window...");
          HWND windowHandle = FindWindowW(L"UnityWndClass", L"TheLongDark");
          while (!windowHandle) {
            windowHandle = FindWindowW(L"UnityWndClass", L"TheLongDark");
            Sleep(1000);
          }
          ModdingAPI_Log(LogLevel::Debug, fmt::sprintf("Window handle: %#X.", windowHandle));

          if (GetModuleHandleW(L"d3d9.dll")) {
            if (wasMirrorHookInitSuccessful &=
                MirrorHook::PrepareFor(MirrorHook::Framework::D3D9, &windowHandle))
              ModdingAPI_Log(LogLevel::Debug, "MirrorHook window handle init (D3D9) failed.");
          }
          if (GetModuleHandleW(L"d3d11.dll")) {
            if (wasMirrorHookInitSuccessful &=
                MirrorHook::PrepareFor(MirrorHook::Framework::D3D11, &windowHandle))
              ModdingAPI_Log(LogLevel::Debug, "MirrorHook window handle init (D3D11) failed.");
          }

          if (!wasMirrorHookInitSuccessful)
            ModdingAPI_Log(LogLevel::Warning,
                           fmt::sprintf(CONSTANT_strMsgWarningInitXFailedFormat, "MirrorHook"));
        }

        if (!wasMirrorHookInitSuccessful)
          ModdingAPI_Log(LogLevel::Info, CONSTANT_strMsgInfoMirrorHookReady);
      }
    }
  }

  // Load mods
  {
    if (std::filesystem::exists(pathModsFolder) && std::filesystem::is_directory(pathModsFolder)) {
      SetCurrentDirectoryW(pathModsFolder.c_str());

      for (auto& file : std::filesystem::recursive_directory_iterator(pathModsFolder)) {
        if (!std::filesystem::is_regular_file(file))  // is not a link, directory or pipe
          continue;
        if (file.path().extension().string() != ".dll")  // is a dll file
          continue;
        if (GetModuleHandleW(file.path().filename().wstring().c_str()))  // is not already loaded
          continue;

        auto modAbsolutePath = pathModsFolder / file.path().filename();
        ModdingAPI_Log(LogLevel::Info, fmt::sprintf(CONSTANT_strMsgInfoLoadingXFormat,
                                                    file.path().filename().string()));

        auto handle = LoadLibraryW(modAbsolutePath.c_str());
        SetCurrentDirectoryW(pathModsFolder.c_str());  // mod may change this

        if (!handle) {
          auto err = GetLastError();
          if (err != ERROR_DLL_INIT_FAILED) {
            ModdingAPI_Log(LogLevel::Warning,
                           fmt::sprintf(CONSTANT_strMsgWarningLoadXFailedFormatWErrorCode,
                                        file.path().filename().string(), err));
          }
        } else {
          ModdingAPI_Log(LogLevel::Info,
                         fmt::sprintf(CONSTANT_strMsgInfoLoadedXFormat, file.path().filename()));
          mLoadedMods[handle] = file.path().filename().string();

          // Call Mod::OnLoad
          ModdingAPI_Log(LogLevel::Debug,
                         fmt::sprintf(CONSTANT_strMsgDebugCallingFnFormat, CONSTANT_strFnModOnLoad,
                                      file.path().filename().string()));
          // TODO: require config.json from modders, do priority listing
          Internals::CallModFunction<void(MODDINGAPI*)(bool)>(
              handle, CONSTANT_strFnModOnLoad, hasLoadedMirrorHook & wasMirrorHookInitSuccessful);
        }
      }
    }
  }

  // Host ImGui
  {
    if (hasLoadedMirrorHook && wasMirrorHookInitSuccessful) {
      ModdingAPI_Log(LogLevel::Info, fmt::sprintf(CONSTANT_strMsgInfoSettingUpXFormat,
                                                  "Modding API supplied ImGui"));
      for (const auto& mod : mLoadedMods) {
        Internals::Menus::MenuSubscriber subscriber;

        ModdingAPI_Log(LogLevel::Info,
                       fmt::sprintf("Getting subscriber's information...", mod.second));

        // Mod filename
        { subscriber.modFileName = mod.second; }

        // Mod name
        {
          auto modName = Internals::CallModFunction<const char*(MODDINGAPI*)(), const char*>(
              mod.first, CONSTANT_strFnModGetModName);
          if (!modName)
            subscriber.modName = "<NO MOD NAME GIVEN>";
          else
            subscriber.modName = modName;

          ModdingAPI_Log(LogLevel::Debug,
                         fmt::sprintf("'%s'->%s() = %s", mod.second, CONSTANT_strFnModGetModName,
                                      subscriber.modAuthorName));
        }

        // Mod author name
        {
          auto modAuthorName = Internals::CallModFunction<const char*(MODDINGAPI*)(), const char*>(
              mod.first, CONSTANT_strFnModGetModAuthorName);
          if (!modAuthorName)
            subscriber.modAuthorName = "<NO MOD AUTHOR NAME GIVEN>";
          else
            subscriber.modAuthorName = modAuthorName;

          ModdingAPI_Log(LogLevel::Debug,
                         fmt::sprintf("'%s'->%s() = %s", mod.second,
                                      CONSTANT_strFnModGetModAuthorName, subscriber.modAuthorName));
        }

        // Mod version
        {
          auto modVersion = Internals::CallModFunction<const char*(MODDINGAPI*)(), const char*>(
              mod.first, CONSTANT_strFnModGetModVersion);
          if (!modVersion)
            subscriber.modVersion = "<NO MOD VERSION GIVEN>";
          else
            subscriber.modVersion = modVersion;

          ModdingAPI_Log(LogLevel::Debug,
                         fmt::sprintf("'%s'->%s() = %s", mod.second, CONSTANT_strFnModGetModVersion,
                                      subscriber.modVersion));
        }

        ModdingAPI_Log(LogLevel::Info,
                       fmt::sprintf("Checking if '%s' is a menu subscriber...", mod.second));
        if (auto func = GetProcAddress(mod.first, CONSTANT_strFnModOnFrame)) {
          subscriber.fnModOnFrame = reinterpret_cast<void(MODDINGAPI*)()>(func);
          subscriber.hasOnFrame   = true;
          ModdingAPI_Log(LogLevel::Debug,
                         fmt::sprintf("'%s' has '%s'.", mod.second, CONSTANT_strFnModOnFrame));
        }
        if (auto func = GetProcAddress(mod.first, CONSTANT_strFnModDrawMenu)) {
          subscriber.fnModDrawMenu = reinterpret_cast<void(MODDINGAPI*)(ImGuiContext*)>(func);
          subscriber.hasDrawMenu   = true;
          ModdingAPI_Log(LogLevel::Debug,
                         fmt::sprintf("'%s' has '%s'.", mod.second, CONSTANT_strFnModDrawMenu));
        }

        Internals::Menus::BaseMenu::vMenuSubscribers.push_back(subscriber);
      }
      std::partition(std::begin(Internals::Menus::BaseMenu::vMenuSubscribers),
                     std::end(Internals::Menus::BaseMenu::vMenuSubscribers),
                     [](const Internals::Menus::MenuSubscriber& sub) { return sub.hasDrawMenu; });

      Internals::Menus::BaseMenu::pImGuiContext         = ImGui::CreateContext();
      Internals::Menus::BaseMenu::pImGuiIO              = &ImGui::GetIO();
      Internals::Menus::BaseMenu::pImGuiIO->FontDefault = NULL;
      Internals::Menus::BaseMenu::pImGuiIO->IniFilename = NULL;

      ImGui::SetColorEditOptions(ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_AlphaPreview |
                                 ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_DisplayRGB |
                                 ImGuiColorEditFlags_PickerHueWheel);

      ImGui_Impl_Win32_Init(MirrorHook::WndProc::GetWindowHandle());

      MirrorHook::D3D9::AddExtension(MirrorHook::D3D9::D3D9Extension::BeginScene,
                                     &Internals::Menus::D3D9::hkBeginScene);
      MirrorHook::D3D9::AddExtension(MirrorHook::D3D9::D3D9Extension::EndScene,
                                     &Internals::Menus::D3D9::hkEndScene);
      MirrorHook::D3D9::AddExtension(MirrorHook::D3D9::D3D9Extension::BeforeReset,
                                     &Internals::Menus::D3D9::hkBeforeReset);
      MirrorHook::D3D9::AddExtension(MirrorHook::D3D9::D3D9Extension::AfterReset,
                                     &Internals::Menus::D3D9::hkAfterReset);
      MirrorHook::D3D11::AddExtension(MirrorHook::D3D11::D3D11Extension::Present,
                                      &Internals::Menus::D3D11::hkPresent);
      MirrorHook::WndProc::AddExtension(&Internals::Menus::BaseMenu::WndProcHandler);
    }
  }

  bool inMainMenu = false;
  Internals::ExecuteInGameThread_Always_NoArg([&]() {
    static auto* strSceneMainMenuName = System_String::CreateString("MainMenu");
    if (System_String* strSceneName = UnityEngine_SceneManagement_Scene::GetNameInternal(
            UnityEngine_SceneManagement_SceneManager::GetActiveScene().m_Handle)) {
      if (inMainMenu = strSceneName->Equals(strSceneMainMenuName)) return true;
    }

    return false;
  });
  while (!inMainMenu) Sleep(100);

  // Call Mod::OnGameLoaded
  {
    for (const auto& mod : mLoadedMods) {
      ModdingAPI_Log(LogLevel::Debug, fmt::sprintf(CONSTANT_strMsgDebugCallingFnFormat,
                                                   CONSTANT_strFnModOnGameLoaded, mod.second));
      Internals::CallModFunction<void(MODDINGAPI*)()>(mod.first, CONSTANT_strFnModOnGameLoaded);
    }
  }

  // Hook UnityEngine.SceneManagement.SceneManager.Internal_ActiveSceneChanged
  {
    static Helpers::DetourHook detourHookHelper;
    static DWORD64             addrFNOrig = Helpers::Memory::GetInstance().MakeAbsolute(0x10A9D60);
    static void(MODDINGAPI * fnOrig)(UnityEngine_SceneManagement_Scene prev,
                                     UnityEngine_SceneManagement_Scene next) = nullptr;
    static void(MODDINGAPI * hk)(
        UnityEngine_SceneManagement_Scene prev,
        UnityEngine_SceneManagement_Scene next) = [](UnityEngine_SceneManagement_Scene prev,
                                                     UnityEngine_SceneManagement_Scene next) {
      ModdingAPI_Log(
          LogLevel::Debug,
          fmt::sprintf(
              L"Scene changed! New scene: %ls",
              std::wstring(*UnityEngine_SceneManagement_Scene::GetNameInternal(next.m_Handle))));

      // Call Mod::OnSceneChanged
      {
        for (const auto& mod : mLoadedMods) {
          ModdingAPI_Log(LogLevel::Debug,
                         fmt::sprintf(CONSTANT_strMsgDebugCallingFnFormat,
                                      CONSTANT_strFnModOnSceneChanged, mod.second));
          Internals::CallModFunction<void(MODDINGAPI*)(UnityEngine_SceneManagement_Scene)>(
              mod.first, CONSTANT_strFnModOnSceneChanged, next);
        }
      }

      auto* pDI = detourHookHelper.GetInfoOf(addrFNOrig);
      pDI->Unhook();
      fnOrig(prev, next);
      pDI->Hook();
    };
    fnOrig = detourHookHelper.Hook(addrFNOrig, hk);
  }

  return FALSE;
}
MODDINGAPI_NAMESPACE_END()

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID) {
  if (reason == DLL_PROCESS_ATTACH) {
    MODDINGAPI_NAMESPACE::hThisModule = hModule;
    DisableThreadLibraryCalls(hModule);
    CreateThread(NULL, 0, &MODDINGAPI_NAMESPACE::Init, NULL, 0, 0);
  }
  return TRUE;
}
