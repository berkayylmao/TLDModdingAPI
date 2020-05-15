/*
   The MIT License (MIT)
   
   Copyright (c) 2014-2020 Omar Cornut
   
   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.
   
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.
*/

// dear imgui: Platform Binding for Windows (standard windows API for 32 and 64 bits applications)
// This needs to be used along with a Renderer (e.g. DirectX11, OpenGL3, Vulkan..)

// Implemented features:
//  [X] Platform: Clipboard support (for Win32 this is actually part of core dear imgui)
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |=
//  ImGuiConfigFlags_NoMouseCursorChange'. [X] Platform: Keyboard arrays indexed using VK_* Virtual
//  Key Codes, e.g. ImGui::IsKeyPressed(VK_SPACE). [X] Platform: Gamepad support. Enabled with
//  'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.

#pragma once
#include "GenericHelpers/Dear ImGui/imgui.h"  // IMGUI_IMPL_API

IMGUI_IMPL_API bool ImGui_Impl_Win32_Init(void* hwnd);
IMGUI_IMPL_API void ImGui_Impl_Win32_Shutdown();
IMGUI_IMPL_API void ImGui_Impl_Win32_NewFrame();

// Configuration
// - Disable gamepad support or linking with xinput.lib
//#define IMGUI_IMPL_WIN32_DISABLE_GAMEPAD
//#define IMGUI_IMPL_WIN32_DISABLE_LINKING_XINPUT

// Win32 message handler your application need to call.
// - Intentionally commented out in a '#if 0' block to avoid dragging dependencies on <windows.h>
// from this helper.
// - You should COPY the line below into your .cpp code to forward declare the function and then you
// can call it.
#if 0
extern IMGUI_IMPL_API LRESULT ImGui_Impl_Win32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
#endif

// DPI-related helpers (optional)
// - Use to enable DPI awareness without having to create an application manifest.
// - Your own app may already do this via a manifest or explicit calls. This is mostly useful for
// our examples/ apps.
// - In theory we could call simple functions from Windows SDK such as SetProcessDPIAware(),
// SetProcessDpiAwareness(), etc.
//   but most of the functions provided by Microsoft require Windows 8.1/10+ SDK at compile time and
//   Windows 8/10+ at runtime, neither we want to require the user to have. So we dynamically select
//   and load those functions to avoid dependencies.
IMGUI_IMPL_API void  ImGui_Impl_Win32_EnableDpiAwareness();
IMGUI_IMPL_API float ImGui_Impl_Win32_GetDpiScaleForHwnd(void* hwnd);        // HWND hwnd
IMGUI_IMPL_API float ImGui_Impl_Win32_GetDpiScaleForMonitor(void* monitor);  // HMONITOR monitor
