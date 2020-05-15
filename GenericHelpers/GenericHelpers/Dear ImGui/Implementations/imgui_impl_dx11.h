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

// dear imgui: Renderer for DirectX11
// This needs to be used along with a Platform Binding (e.g. Win32)

// Implemented features:
//  [X] Renderer: User texture binding. Use 'ID3D11ShaderResourceView*' as ImTextureID. Read the FAQ
//  about ImTextureID! [X] Renderer: Support for large meshes (64k+ vertices) with 16-bit indices.

// You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example
// of using this. If you are new to dear imgui, read examples/README.txt and read the documentation
// at the top of imgui.cpp. https://github.com/ocornut/imgui

#pragma once
#include "GenericHelpers/Dear ImGui/imgui.h"  // IMGUI_IMPL_API

struct ID3D11Device;
struct ID3D11DeviceContext;

namespace ImGui_Impl_DX11 {
  IMGUI_IMPL_API bool Init(ID3D11Device* device, ID3D11DeviceContext* device_context);
  IMGUI_IMPL_API void Shutdown();
  IMGUI_IMPL_API void NewFrame();
  IMGUI_IMPL_API void RenderDrawData(ImDrawData* draw_data);

  // Use if you want to reset your rendering device without losing Dear ImGui state.
  IMGUI_IMPL_API void InvalidateDeviceObjects();
  IMGUI_IMPL_API bool CreateDeviceObjects();
}  
