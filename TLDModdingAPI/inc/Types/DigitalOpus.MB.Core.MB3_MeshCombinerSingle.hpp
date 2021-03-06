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
#include "ModdingAPI.Exposed.UnityEngine.Matrix4x4.hpp"


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core {
struct __MB3_MeshCombinerSingle_Il2CppStaticFields {
};

struct __MB3_MeshCombinerSingle_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_LOG_LEVEL;
  VirtualInvokeData _5_set_LOG_LEVEL;
  VirtualInvokeData _6_get_validationLevel;
  VirtualInvokeData _7_set_validationLevel;
  VirtualInvokeData _8_get_textureBakeResults;
  VirtualInvokeData _9_set_textureBakeResults;
  VirtualInvokeData _10_get_resultSceneObject;
  VirtualInvokeData _11_set_resultSceneObject;
  VirtualInvokeData _12_get_targetRenderer;
  VirtualInvokeData _13_set_targetRenderer;
  VirtualInvokeData _14_get_renderType;
  VirtualInvokeData _15_set_renderType;
  VirtualInvokeData _16_get_outputOption;
  VirtualInvokeData _17_set_outputOption;
  VirtualInvokeData _18_get_lightmapOption;
  VirtualInvokeData _19_set_lightmapOption;
  VirtualInvokeData _20_get_doNorm;
  VirtualInvokeData _21_set_doNorm;
  VirtualInvokeData _22_get_doTan;
  VirtualInvokeData _23_set_doTan;
  VirtualInvokeData _24_get_doCol;
  VirtualInvokeData _25_set_doCol;
  VirtualInvokeData _26_get_doUV;
  VirtualInvokeData _27_set_doUV;
  VirtualInvokeData _28_get_doUV1;
  VirtualInvokeData _29_set_doUV1;
  VirtualInvokeData _30_doUV2;
  VirtualInvokeData _31_get_doUV3;
  VirtualInvokeData _32_set_doUV3;
  VirtualInvokeData _33_get_doUV4;
  VirtualInvokeData _34_set_doUV4;
  VirtualInvokeData _35_get_doBlendShapes;
  VirtualInvokeData _36_set_doBlendShapes;
  VirtualInvokeData _37_get_recenterVertsToBoundsCenter;
  VirtualInvokeData _38_set_recenterVertsToBoundsCenter;
  VirtualInvokeData _39_GetLightmapIndex;
  VirtualInvokeData _40_ClearBuffers;
  VirtualInvokeData _41_ClearMesh;
  VirtualInvokeData _42_DestroyMesh;
  VirtualInvokeData _43_DestroyMeshEditor;
  VirtualInvokeData _44_GetObjectsInCombined;
  VirtualInvokeData _45_GetNumObjectsInCombined;
  VirtualInvokeData _46_GetNumVerticesFor;
  VirtualInvokeData _47_GetNumVerticesFor;
  VirtualInvokeData _48_BuildSourceBlendShapeToCombinedIndexMap;
  VirtualInvokeData _49_Apply;
  VirtualInvokeData _50_Apply;
  VirtualInvokeData _51_Apply;
  VirtualInvokeData _52_UpdateGameObjects;
  VirtualInvokeData _53_AddDeleteGameObjects;
  VirtualInvokeData _54_AddDeleteGameObjectsByID;
  VirtualInvokeData _55_CombinedMeshContains;
  VirtualInvokeData _56_UpdateSkinnedMeshApproximateBounds;
  VirtualInvokeData _57_UpdateSkinnedMeshApproximateBoundsFromBones;
  VirtualInvokeData _58_CheckIntegrity;
  VirtualInvokeData _59_UpdateSkinnedMeshApproximateBoundsFromBounds;
  VirtualInvokeData _60__CreateTemporaryTextrueBakeResult;
  VirtualInvokeData _61_GetMaterialsOnTargetRenderer;
  VirtualInvokeData _62_ApplyShowHide;
};

struct __MB3_MeshCombinerSingle_Il2CppClass {
  Il2CppClass_1 _1;
  __MB3_MeshCombinerSingle_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB3_MeshCombinerSingle_Il2CppVtbl vtbl;
};

class MB3_MeshCombinerSingle {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3C040;
  static inline    __MB3_MeshCombinerSingle_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MB3_MeshCombinerSingle_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MB3_MeshCombinerSingle_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MB3_MeshCombinerSingle_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t _LOG_LEVEL;
  int32_t _validationLevel;
  System_String* _name;
  ModdingAPI::Exposed::MB2_TextureBakeResults* _textureBakeResults;
  ModdingAPI::Exposed::UnityEngine::GameObject* _resultSceneObject;
  ModdingAPI::Exposed::UnityEngine::Renderer* _targetRenderer;
  int32_t _renderType;
  int32_t _outputOption;
  int32_t _lightmapOption;
  bool _doNorm;
  bool _doTan;
  bool _doCol;
  bool _doUV;
  bool _doUV3;
  bool _doUV4;
  bool _doBlendShapes;
  bool _recenterVertsToBoundsCenter;
  bool _optimizeAfterBake;
  float uv2UnwrappingParamsHardAngle;
  float uv2UnwrappingParamsPackMargin;
  bool _usingTemporaryTextureBakeResult;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* objectsInCombinedMesh;
  int32_t lightmapIndex;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mbDynamicObjectsInCombinedMesh;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* _instance2combined_map;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* verts;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* normals;
  ModdingAPI::Exposed::UnityEngine::Vector4_array* tangents;
  ModdingAPI::Exposed::UnityEngine::Vector2_array* uvs;
  ModdingAPI::Exposed::UnityEngine::Vector2_array* uv2s;
  ModdingAPI::Exposed::UnityEngine::Vector2_array* uv3s;
  ModdingAPI::Exposed::UnityEngine::Vector2_array* uv4s;
  ModdingAPI::Exposed::UnityEngine::Color_array* colors;
  ModdingAPI::Exposed::UnityEngine::Matrix4x4_array* bindPoses;
  ModdingAPI::Exposed::UnityEngine::Transform_array* bones;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape_array* blendShapes;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape_array* blendShapesInCombined;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray_array* submeshTris;
  ModdingAPI::Exposed::UnityEngine::Mesh* _mesh;
  ModdingAPI::Exposed::UnityEngine::BoneWeight_array* boneWeights;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* empty;
  ModdingAPI::Exposed::System::Int32_array* emptyIDs;

  // Member methods:
  void set_textureBakeResults(ModdingAPI::Exposed::MB2_TextureBakeResults* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::MB2_TextureBakeResults*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2687E80))(this, value);
  }
  void set_renderType(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2687FD0))(this, value);
  }
  void set_resultSceneObject(ModdingAPI::Exposed::UnityEngine::GameObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26880C0))(this, value);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* instance2Combined_MapGet(int32_t gameObjectID) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688200))(this, gameObjectID);
  }
  void instance2Combined_MapAdd(int32_t gameObjectID, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26882A0))(this, gameObjectID, dgo);
  }
  void instance2Combined_MapRemove(int32_t gameObjectID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688360))(this, gameObjectID);
  }
  bool instance2Combined_MapTryGetValue(int32_t gameObjectID, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688400))(this, gameObjectID, dgo);
  }
  int32_t instance2Combined_MapCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26884B0))(this);
  }
  void instance2Combined_MapClear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688540))(this);
  }
  bool instance2Combined_MapContainsKey(int32_t gameObjectID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26885D0))(this, gameObjectID);
  }
  int32_t GetNumObjectsInCombined() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688690))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetObjectsInCombined() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688720))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Mesh* GetMesh() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Mesh*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26888A0))(this);
  }
  void SetMesh(ModdingAPI::Exposed::UnityEngine::Mesh* m) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::Mesh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E060))(this, m);
  }
  ModdingAPI::Exposed::UnityEngine::Transform_array* GetBones() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform_array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F4090))(this);
  }
  int32_t GetLightmapIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688A40))(this);
  }
  int32_t GetNumVerticesFor(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688A90))(this, go);
  }
  int32_t GetNumVerticesFor(int32_t instanceID) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688AD0))(this, instanceID);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* BuildSourceBlendShapeToCombinedIndexMap() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2688BA0))(this);
  }
  void _initialize(int32_t numResultMats) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2689080))(this, numResultMats);
  }
  bool _collectMaterialTriangles(ModdingAPI::Exposed::UnityEngine::Mesh* m, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo, ModdingAPI::Exposed::UnityEngine::Material_array* sharedMaterials, ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, ModdingAPI::Exposed::UnityEngine::Material_array*, ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2689C00))(this, m, dgo, sharedMaterials, sourceMats2submeshIdx_map);
  }
  bool _collectOutOfBoundsUVRects2(ModdingAPI::Exposed::UnityEngine::Mesh* m, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo, ModdingAPI::Exposed::UnityEngine::Material_array* sharedMaterials, ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* meshAnalysisResults, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelCache) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, ModdingAPI::Exposed::UnityEngine::Material_array*, ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x268A480))(this, m, dgo, sharedMaterials, sourceMats2submeshIdx_map, meshAnalysisResults, meshChannelCache);
  }
  bool _validateTextureBakeResults() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x268A980))(this);
  }
  bool _validateMeshFlags() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x268AB00))(this);
  }
  bool _showHide(ModdingAPI::Exposed::UnityEngine::GameObject_array* goToShow, ModdingAPI::Exposed::UnityEngine::GameObject_array* goToHide) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, ModdingAPI::Exposed::UnityEngine::GameObject_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x268AD00))(this, goToShow, goToHide);
  }
  bool _addToCombined(ModdingAPI::Exposed::UnityEngine::GameObject_array* goToAdd, ModdingAPI::Exposed::System::Int32_array* goToDelete, bool disableRendererInSource) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, ModdingAPI::Exposed::System::Int32_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x268B080))(this, goToAdd, goToDelete, disableRendererInSource);
  }
  void _copyAndAdjustUVsFromMesh(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo, ModdingAPI::Exposed::UnityEngine::Mesh* mesh, int32_t vertsIdx, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelsCache) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, ModdingAPI::Exposed::UnityEngine::Mesh*, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2690560))(this, dgo, mesh, vertsIdx, meshChannelsCache);
  }
  void _copyAndAdjustUV2FromMesh(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo, ModdingAPI::Exposed::UnityEngine::Mesh* mesh, int32_t vertsIdx, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelsCache) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, ModdingAPI::Exposed::UnityEngine::Mesh*, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2690D00))(this, dgo, mesh, vertsIdx, meshChannelsCache);
  }
  void UpdateSkinnedMeshApproximateBounds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2691000))(this);
  }
  void UpdateSkinnedMeshApproximateBoundsFromBones() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2691020))(this);
  }
  void UpdateSkinnedMeshApproximateBoundsFromBounds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2691300))(this);
  }
  int32_t _getNumBones(ModdingAPI::Exposed::UnityEngine::Renderer* r) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::Renderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2691600))(this, r);
  }
  ModdingAPI::Exposed::UnityEngine::Transform_array* _getBones(ModdingAPI::Exposed::UnityEngine::Renderer* r) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform_array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::Renderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2691810))(this, r);
  }
  void Apply(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate* uv2GenerationMethod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2691950))(this, uv2GenerationMethod);
  }
  void ApplyShowHide() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2691A70))(this);
  }
  void Apply(bool triangles, bool vertices, bool normals, bool tangents, bool uvs, bool uv2, bool uv3, bool uv4, bool colors, bool bones, bool blendShapesFlag, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate* uv2GenerationMethod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2692170))(this, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod);
  }
  int32_t _numNonZeroLengthSubmeshTris(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray_array* subTris) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2694090))(this, subTris);
  }
  void _updateMaterialsOnTargetRenderer(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray_array* subTris, int32_t numNonZeroLengthSubmeshTris) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2694120))(this, subTris, numNonZeroLengthSubmeshTris);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray_array* GetSubmeshTrisWithShowHideApplied() {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray_array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26943B0))(this);
  }
  bool UpdateGameObjects(ModdingAPI::Exposed::UnityEngine::GameObject_array* gos, bool recalcBounds, bool updateVertices, bool updateNormals, bool updateTangents, bool updateUV, bool updateUV2, bool updateUV3, bool updateUV4, bool updateColors, bool updateSkinningInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2694A60))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo);
  }
  bool _updateGameObjects(ModdingAPI::Exposed::UnityEngine::GameObject_array* gos, bool recalcBounds, bool updateVertices, bool updateNormals, bool updateTangents, bool updateUV, bool updateUV2, bool updateUV3, bool updateUV4, bool updateColors, bool updateSkinningInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2694AC0))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo);
  }
  bool _updateGameObject(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool updateVertices, bool updateNormals, bool updateTangents, bool updateUV, bool updateUV2, bool updateUV3, bool updateUV4, bool updateColors, bool updateSkinningInfo, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelCache, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* meshAnalysisResultsCache, ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map, ModdingAPI::Exposed::MB2_TextureBakeResults::Material2AtlasRectangleMapper* mat2rect_map) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool, bool, bool, bool, bool, bool, bool, bool, bool, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*, ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary*, ModdingAPI::Exposed::MB2_TextureBakeResults::Material2AtlasRectangleMapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2695120))(this, go, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo, meshChannelCache, meshAnalysisResultsCache, sourceMats2submeshIdx_map, mat2rect_map);
  }
  bool ShowHideGameObjects(ModdingAPI::Exposed::UnityEngine::GameObject_array* toShow, ModdingAPI::Exposed::UnityEngine::GameObject_array* toHide) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, ModdingAPI::Exposed::UnityEngine::GameObject_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2696640))(this, toShow, toHide);
  }
  bool AddDeleteGameObjects(ModdingAPI::Exposed::UnityEngine::GameObject_array* gos, ModdingAPI::Exposed::UnityEngine::GameObject_array* deleteGOs, bool disableRendererInSource) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2696760))(this, gos, deleteGOs, disableRendererInSource);
  }
  bool AddDeleteGameObjectsByID(ModdingAPI::Exposed::UnityEngine::GameObject_array* gos, ModdingAPI::Exposed::System::Int32_array* deleteGOinstanceIDs, bool disableRendererInSource) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, ModdingAPI::Exposed::System::Int32_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2696980))(this, gos, deleteGOinstanceIDs, disableRendererInSource);
  }
  bool CombinedMeshContains(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2696F60))(this, go);
  }
  void ClearBuffers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2697000))(this);
  }
  void ClearMesh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2697380))(this);
  }
  void DestroyMesh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2697530))(this);
  }
  void DestroyMeshEditor(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2697730))(this, editorMethods);
  }
  bool ValidateTargRendererAndMeshAndResultSceneObj() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2697920))(this);
  }
  ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary* BuildSourceMatsToSubmeshIdxMap(int32_t numResultMats) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Specialized::OrderedDictionary*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2697D50))(this, numResultMats);
  }
  void BuildSceneMeshObject(ModdingAPI::Exposed::UnityEngine::GameObject_array* gos, bool createNewChild) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2699990))(this, gos, createNewChild);
  }
  bool IsMirrored(ModdingAPI::Exposed::UnityEngine::Matrix4x4 tm) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2699B80))(this, tm);
  }
  void CheckIntegrity() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2699D80))(this);
  }
  void _ZeroArray(ModdingAPI::Exposed::UnityEngine::Vector3_array* arr, int32_t idx, int32_t length) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269A560))(this, arr, idx, length);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T__array* _buildBoneIdx2dgoMap() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T__array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269A660))(this);
  }
  void _CollectBonesToAddForDGO(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* bone2idx, ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_* boneIdxsToDelete, ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_* bonesToAdd, ModdingAPI::Exposed::UnityEngine::Renderer* r, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelCache) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*, ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_*, ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_*, ModdingAPI::Exposed::UnityEngine::Renderer*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269A9F0))(this, dgo, bone2idx, boneIdxsToDelete, bonesToAdd, r, meshChannelCache);
  }
  void _CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_* boneIdxsToDeleteHS, ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_* bonesToAdd, ModdingAPI::Exposed::UnityEngine::Transform_array* nbones, ModdingAPI::Exposed::UnityEngine::Matrix4x4_array* nbindPoses, ModdingAPI::Exposed::UnityEngine::BoneWeight_array* nboneWeights, int32_t totalDeleteVerts) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_*, ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_*, ModdingAPI::Exposed::UnityEngine::Transform_array*, ModdingAPI::Exposed::UnityEngine::Matrix4x4_array*, ModdingAPI::Exposed::UnityEngine::BoneWeight_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269B240))(this, boneIdxsToDeleteHS, bonesToAdd, nbones, nbindPoses, nboneWeights, totalDeleteVerts);
  }
  void _AddBonesToNewBonesArrayAndAdjustBWIndexes(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo, ModdingAPI::Exposed::UnityEngine::Renderer* r, int32_t vertsIdx, ModdingAPI::Exposed::UnityEngine::Transform_array* nbones, ModdingAPI::Exposed::UnityEngine::BoneWeight_array* nboneWeights, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelCache) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, ModdingAPI::Exposed::UnityEngine::Renderer*, int32_t, ModdingAPI::Exposed::UnityEngine::Transform_array*, ModdingAPI::Exposed::UnityEngine::BoneWeight_array*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269B8D0))(this, dgo, r, vertsIdx, nbones, nboneWeights, meshChannelCache);
  }
  void _copyUV2unchangedToSeparateRects() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269C050))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetMaterialsOnTargetRenderer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269C990))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x269CB90))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Renderer* BuildSceneHierarchPreBake(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* mom, ModdingAPI::Exposed::UnityEngine::GameObject* root, ModdingAPI::Exposed::UnityEngine::Mesh* m, bool createNewChild, ModdingAPI::Exposed::UnityEngine::GameObject_array* objsToBeAdded) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Renderer*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Mesh*, bool, ModdingAPI::Exposed::UnityEngine::GameObject_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26980B0))(mom, root, m, createNewChild, objsToBeAdded);
  }
  static inline void BuildPrefabHierarchy(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* mom, ModdingAPI::Exposed::UnityEngine::GameObject* instantiatedPrefabRoot, ModdingAPI::Exposed::UnityEngine::Mesh* m, bool createNewChild, ModdingAPI::Exposed::UnityEngine::GameObject_array* objsToBeAdded) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Mesh*, bool, ModdingAPI::Exposed::UnityEngine::GameObject_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2698A70))(mom, instantiatedPrefabRoot, m, createNewChild, objsToBeAdded);
  }
  static inline void _ConfigureSceneHierarch(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* mom, ModdingAPI::Exposed::UnityEngine::GameObject* root, ModdingAPI::Exposed::UnityEngine::MeshRenderer* mr, ModdingAPI::Exposed::UnityEngine::MeshFilter* mf, ModdingAPI::Exposed::UnityEngine::SkinnedMeshRenderer* smr, ModdingAPI::Exposed::UnityEngine::Mesh* m, ModdingAPI::Exposed::UnityEngine::GameObject_array* objsToBeAdded) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::MeshRenderer*, ModdingAPI::Exposed::UnityEngine::MeshFilter*, ModdingAPI::Exposed::UnityEngine::SkinnedMeshRenderer*, ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::UnityEngine::GameObject_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26994B0))(mom, root, mr, mf, smr, m, objsToBeAdded);
  }
};
}