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
//   4. Neither the name of "TLD Modding API" nor the
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

#pragma once
#include "pch.h"
#include "Internals/Internals.hpp"
#include "Internals/Menus/MenuSubscriber.hpp"
#include "GenericHelpers/Dear ImGui/imgui_internal.h"

MODDINGAPI_NAMESPACE_BEGIN()
namespace Internals::Menus::BaseMenu {
  namespace details {
    static void LoadStyle() {
      ImGuiStyle* style               = &ImGui::GetStyle();
      style->Alpha                    = 0.9f;
      style->WindowPadding            = ImVec2(10.0f, 10.0f);
      style->WindowRounding           = 1.0f;
      style->WindowBorderSize         = 0.0f;
      style->WindowMinSize            = ImVec2(250.0f, 150.0f);
      style->WindowTitleAlign         = ImVec2(0.0f, 0.5f);
      style->WindowMenuButtonPosition = ImGuiDir_Left;
      style->ChildRounding            = 1.0f;
      style->ChildBorderSize          = 1.0f;
      style->PopupRounding            = 2.0f;
      style->PopupBorderSize          = 1.0f;
      style->FramePadding             = ImVec2(5.0f, 2.0f);
      style->FrameRounding            = 1.0f;
      style->FrameBorderSize          = 0.0f;
      style->ItemSpacing              = ImVec2(5.0f, 5.0f);
      style->ItemInnerSpacing         = ImVec2(5.0f, 5.0f);
      style->IndentSpacing            = 25.0f;
      style->ScrollbarSize            = 10.0f;
      style->ScrollbarRounding        = 1.0f;
      style->GrabMinSize              = 5.0f;
      style->GrabRounding             = 1.0f;
      style->ButtonTextAlign          = ImVec2(0.5f, 0.5f);
      style->AntiAliasedLines         = true;
      style->AntiAliasedFill          = true;

      style->Colors[ImGuiCol_Text]                  = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
      style->Colors[ImGuiCol_TextDisabled]          = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
      style->Colors[ImGuiCol_WindowBg]              = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_ChildBg]               = ImVec4(0.09f, 0.09f, 0.09f, 0.99f);
      style->Colors[ImGuiCol_PopupBg]               = ImVec4(0.09f, 0.09f, 0.09f, 0.99f);
      style->Colors[ImGuiCol_Border]                = ImVec4(1.00f, 1.00f, 1.00f, 0.39f);
      style->Colors[ImGuiCol_BorderShadow]          = ImVec4(1.00f, 1.00f, 1.00f, 0.10f);
      style->Colors[ImGuiCol_FrameBg]               = ImVec4(0.19f, 0.19f, 0.19f, 1.00f);
      style->Colors[ImGuiCol_FrameBgHovered]        = ImVec4(0.70f, 0.44f, 0.00f, 0.40f);
      style->Colors[ImGuiCol_FrameBgActive]         = ImVec4(0.80f, 0.50f, 0.00f, 0.40f);
      style->Colors[ImGuiCol_TitleBg]               = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
      style->Colors[ImGuiCol_TitleBgActive]         = ImVec4(0.85f, 0.53f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
      style->Colors[ImGuiCol_MenuBarBg]             = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
      style->Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
      style->Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.31f, 0.31f, 0.31f, 0.80f);
      style->Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.51f, 0.51f, 0.51f, 0.80f);
      style->Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
      style->Colors[ImGuiCol_CheckMark]             = ImVec4(0.85f, 0.53f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_SliderGrab]            = ImVec4(0.85f, 0.53f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_SliderGrabActive]      = ImVec4(1.00f, 0.63f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_Button]                = ImVec4(0.80f, 0.50f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_ButtonHovered]         = ImVec4(0.90f, 0.60f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_ButtonActive]          = ImVec4(1.00f, 0.70f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_Header]                = ImVec4(1.00f, 0.63f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_HeaderHovered]         = ImVec4(1.00f, 0.63f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_HeaderActive]          = ImVec4(1.00f, 0.63f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_Separator]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
      style->Colors[ImGuiCol_SeparatorHovered]      = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
      style->Colors[ImGuiCol_SeparatorActive]       = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
      style->Colors[ImGuiCol_ResizeGrip]            = ImVec4(0.80f, 0.50f, 0.00f, 0.40f);
      style->Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(0.90f, 0.60f, 0.00f, 0.80f);
      style->Colors[ImGuiCol_ResizeGripActive]      = ImVec4(1.00f, 0.70f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_Tab]                   = ImVec4(0.80f, 0.50f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_TabHovered]            = ImVec4(0.90f, 0.60f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_TabActive]             = ImVec4(1.00f, 0.70f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_TabUnfocused]          = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
      style->Colors[ImGuiCol_TabUnfocusedActive]    = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
      style->Colors[ImGuiCol_PlotLines]             = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
      style->Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
      style->Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
      style->Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.85f, 0.53f, 0.00f, 0.40f);
      style->Colors[ImGuiCol_DragDropTarget]        = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
      style->Colors[ImGuiCol_NavHighlight]          = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
      style->Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
      style->Colors[ImGuiCol_NavWindowingDimBg]     = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
      style->Colors[ImGuiCol_ModalWindowDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
    }

    static inline void PushItemDisabled() {
      ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
      ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
    }
    static inline void PopItemDisabled() {
      ImGui::PopItemFlag();
      ImGui::PopStyleVar();
    }
  }  // namespace details

  constexpr char* CONSTANT_strMenuTitle  = "TLD Modding API v" MODDINGAPI_VERSION_STR;
  constexpr char* CONSTANT_strMenuGitHub = "https://github.com/berkayylmao/TLDModdingAPI";
  constexpr char* CONSTANT_strMenuPayPal = "Support me! https://www.paypal.me/berkayylmao";
  constexpr char* CONSTANT_strMenuVisibilityToggle = "Press Numpad+ to hide/show this menu.";
  constexpr char* CONSTANT_strRunningModsHeader    = "Running mods:";
  constexpr char* CONSTANT_strRunningModsWMenusHeader =
      "Running mods that have a menu:\r\n(use buttons to open menus)";

  static std::vector<MenuSubscriber> vMenuSubscribers;
  static ImGuiContext*               pImGuiContext       = nullptr;
  static ImGuiIO*                    pImGuiIO            = nullptr;
  static bool                        isMainWindowVisible = true;

  static void LoadStyle() { details::LoadStyle(); }
  static void NewFrame() {
    ImGui_Impl_Win32_NewFrame();
    ImGui::NewFrame();

    pImGuiIO->FontGlobalScale = std::max(1.0f, pImGuiIO->DisplaySize.y / 1080.0f);  // 1080p as base
  }
  static void FinishFrame() { ImGui::Render(); }
  static void DrawMenu() {
    for (const auto& mod : vMenuSubscribers)
      if (mod.hasOnFrame) mod.fnModOnFrame();

    if (isMainWindowVisible) {
      ImGui::SetNextWindowPos(ImVec2(pImGuiIO->DisplaySize.x - 10.0f, 10.0f), ImGuiCond_Appearing,
                              ImVec2(1.0f, 0.0f));
      if (ImGui::Begin(CONSTANT_strMenuTitle, &isMainWindowVisible,
                       ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::TextUnformatted(CONSTANT_strMenuVisibilityToggle);
        ImGui::TextUnformatted(CONSTANT_strMenuGitHub);
        ImGui::TextUnformatted(CONSTANT_strMenuPayPal);
        ImGui::Separator();

        static bool listedModsWMenuHeader = false, listedModHeader = false, wasMenuActive = false;
        for (auto& sub : vMenuSubscribers) {
          if (sub.hasDrawMenu) {
            if (!listedModsWMenuHeader) {
              ImGui::TextUnformatted(CONSTANT_strRunningModsWMenusHeader);
              listedModsWMenuHeader = true;
            }
            auto strModDetails = fmt::format("{} ({})", sub.modName, sub.modFileName);

            // Draw menu button
            {
              wasMenuActive = sub.isMenuActive;
              if (wasMenuActive) details::PushItemDisabled();
              if (ImGui::Button(strModDetails.c_str(), ImVec2(-FLT_MIN, 0.0f)))
                sub.isMenuActive = true;
              if (wasMenuActive) details::PopItemDisabled();
            }

            // Draw menu (if active)
            if (sub.isMenuActive) {
              auto strWindowTitle = fmt::format("{}", sub.modName);
              if (ImGui::Begin(
                      strWindowTitle.c_str(), &sub.isMenuActive,
                      ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_AlwaysAutoResize)) {
                ImGui::TextUnformatted(strModDetails.c_str());
                ImGui::TextUnformatted(fmt::format("Version: {}", sub.modVersion).c_str());
                ImGui::TextUnformatted(fmt::format("by {}", sub.modAuthorName).c_str());
                ImGui::Separator();

                sub.fnModDrawMenu(pImGuiContext);
              }
              ImGui::SetCursorPosX(ImGui::CalcTextSize(strWindowTitle.c_str()).x);
              ImGui::End();
            }
          } else {
            if (!listedModHeader) {
              ImGui::TextUnformatted(CONSTANT_strRunningModsHeader);
              listedModHeader = true;
            }

            // Draw info label
            {
              details::PushItemDisabled();
              ImGui::TextUnformatted(
                  fmt::format("{} v{} ({})", sub.modName, sub.modVersion, sub.modFileName).c_str());
              details::PopItemDisabled();
            }
          }
        }
        listedModsWMenuHeader = listedModHeader = false;
      }
      ImGui::End();
    }
  }

  static LRESULT CALLBACK WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (pImGuiContext) {
      if (uMsg == WM_QUIT) {
        ImGui_Impl_DX9::Shutdown();
        ImGui_Impl_DX11::Shutdown();
        ImGui::DestroyContext();
        return MirrorHook::WndProc::WndProcHook_NoReturn;
      }

      ImGui_Impl_Win32_WndProcHandler(hWnd, uMsg, wParam, lParam);
      if (uMsg == WM_KEYUP) {
        if (!pImGuiIO->WantCaptureKeyboard || !pImGuiIO->WantTextInput) {
          if (wParam == VK_ADD) isMainWindowVisible = !isMainWindowVisible;
        }
      }
    }
    return MirrorHook::WndProc::WndProcHook_NoReturn;
  }
}  // namespace Internals::Menus::BaseMenu
MODDINGAPI_NAMESPACE_END()
