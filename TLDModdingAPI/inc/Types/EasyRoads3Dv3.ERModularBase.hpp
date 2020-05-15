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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Rect.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __ERModularBase_Il2CppStaticFields {
};

struct __ERModularBase_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERModularBase_Il2CppClass {
  Il2CppClass_1 _1;
  __ERModularBase_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERModularBase_Il2CppVtbl vtbl;
};

class ERModularBase {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C2C8F8;
  static inline    ERModularBase* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2E318;
  static inline    __ERModularBase_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline ERModularBase* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (ERModularBase**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __ERModularBase_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ERModularBase_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ERModularBase_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t updateInt;
  bool newSplatMapRestoreCode;
  int32_t toolbarInt;
  int32_t roadToolbarInt;
  int32_t markerToolbarInt;
  ModdingAPI::Exposed::UnityEngine::Texture_array* menuTexs;
  ModdingAPI::Exposed::UnityEngine::Texture_array* subMenuTexs;
  ModdingAPI::Exposed::UnityEngine::GameObject* cprefab;
  ModdingAPI::Exposed::UnityEngine::Texture* nodeHandleTexture;
  ModdingAPI::Exposed::UnityEngine::Texture* lockedTexture;
  ModdingAPI::Exposed::UnityEngine::Texture* unLockedTexture;
  ModdingAPI::Exposed::UnityEngine::Texture* selRoadTexture;
  ModdingAPI::Exposed::UnityEngine::Texture* headerTexture;
  ModdingAPI::Exposed::UnityEngine::Texture* sceneGUITex;
  ModdingAPI::Exposed::UnityEngine::Transform* roadObjectsParent;
  ModdingAPI::Exposed::UnityEngine::Transform* connectionObjectsParent;
  ModdingAPI::Exposed::UnityEngine::GameObject* OQDOOOQODC;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes;
  int32_t selectedRoadType;
  int32_t selectedNewRoadType;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* inspRoadTypes;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* inspRoadTypeInts;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* decalPresets;
  float roadWidth;
  ModdingAPI::Exposed::UnityEngine::Material* roadMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* crossingMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* roundAboutMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* roundAboutConnectionMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* roundAboutRoadMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* sidewalkMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* targetMaterial;
  ModdingAPI::Exposed::UnityEngine::Terrain* sourceTerrain;
  ModdingAPI::Exposed::System::String_array* roadMaterials;
  ModdingAPI::Exposed::System::String_array* connectionMaterials;
  int32_t selectedMaterial;
  int32_t selectedConnectionMaterial;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* materials;
  int32_t selectedRoadRoadType;
  bool roadOptions;
  bool markerOptions;
  bool showRoadSideObjects;
  bool markerSOOptions;
  bool roadTerrainOptions;
  bool camFlyOver;
  int32_t selectedRoadMaterial;
  int32_t roadTextureInfoIndex;
  ModdingAPI::Exposed::UnityEngine::Texture2D* selectedRoadTexture;
  float selectedRoadWidth;
  float selectedRoadLeftOffset;
  float selectedRoadRightOffset;
  float selectedRoadLeftInnerOffset;
  float selectedRoadRightInnerOffset;
  int32_t selectedCrossingMaterial;
  int32_t crossingTextureInfoIndex;
  int32_t handleSelection;
  int32_t positionHandleSelection;
  bool markerDirXZ;
  ModdingAPI::Exposed::UnityEngine::GameObject* defaultCrossing;
  ModdingAPI::Exposed::UnityEngine::GameObject* defaultTCrossing;
  ModdingAPI::Exposed::UnityEngine::GameObject* defaultCulDeSac;
  ModdingAPI::Exposed::UnityEngine::GameObject* defaultRoundabout;
  ModdingAPI::Exposed::UnityEngine::Texture2D* tex;
  ModdingAPI::Exposed::UnityEngine::Texture2D* infoTexture;
  bool showAllPrefabs;
  bool standardPrefabsFlag;
  bool sceneSettingsFoldOut;
  bool sceneRoadsFoldOut;
  bool scenePrefabsFoldOut;
  bool sidewalksFoldOut;
  bool terrainManagementFoldOut;
  bool importRoadDataFoldOut;
  bool lodGroupsFoldOut;
  bool defaultMaterialsFoldOut;
  bool kmlFlag;
  bool osmFlag;
  bool useOSMHeights;
  float heightRatio;
  bool dynamicPrefabsFoldOut;
  bool customPrefabsFoldOut;
  float prefabsDisplayType;
  float osmTerrainTopLon;
  float osmTerrainBottomLon;
  float osmTerrainLeftLat;
  float osmTerrainRightLat;
  float terrainMinIndent;
  float minIndent;
  float minSurrounding;
  float maxIndentSurrounding;
  float terrainY;
  float terrainDetailSplatX;
  float terrainDetailSplatY;
  ModdingAPI::Exposed::UnityEngine::Vector3 detailOffsetVec;
  float raise;
  ModdingAPI::Exposed::UnityEngine::Vector3 baseVector;
  bool mirrorCrossings;
  ModdingAPI::Exposed::System::String_array* terrainNames;
  ModdingAPI::Exposed::UnityEngine::Terrain_array* terrainObjects;
  ModdingAPI::Exposed::System::String_array* terrainSplatTextures;
  ModdingAPI::Exposed::UnityEngine::Terrain* activeTerrain;
  float activeTerrainY;
  int32_t selectedTerrain;
  bool selectedRoadsOnly;
  bool terrainDone;
  bool enableBackWithoutRestore;
  float detailDistance;
  float treeDistance;
  bool doHeightmap;
  bool doTrees;
  bool soTrees;
  bool doDetail;
  ModdingAPI::Exposed::UnityEngine::Rect terrainRect;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* surfaceObjects;
  float preserveTerrainFloat;
  float terrainSmoothIndentDistance;
  float terrainSmoothSurroundingDistance;
  int32_t indentSmoothStep;
  int32_t surroundingSmoothStep;
  bool doTangents;
  bool doLightmapUVs;
  bool doLODGroups;
  bool doSplatmaps;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* terrainHits;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* osmCrossingPoints;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* cornerPresets;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* sidewalkPresets;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* sidewalks;
  int32_t selectedSidewalk;
  int32_t selectedRoadTypeSidewalk;
  int32_t osmMotorway;
  int32_t osmMotorwayLink;
  int32_t osmTrunk;
  int32_t osmPrimary;
  int32_t osmSecondary;
  int32_t osmTertiary;
  int32_t osmUnclassified;
  int32_t osmResidential;
  int32_t osmService;
  int32_t osmTrack;
  int32_t osmPath;
  bool osmMotorwayFlag;
  bool osmMotorwayLinkFlag;
  bool osmTrunkFlag;
  bool osmPrimaryFlag;
  bool osmSecondaryFlag;
  bool osmTertiaryFlag;
  bool osmUnclassifiedFlag;
  bool osmResidentialFlag;
  bool osmServiceFlag;
  bool osmTrackFlag;
  bool osmPathFlag;
  bool lodGroups;
  int32_t LODLevels;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* LODLevelValues;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* LODLevelResolution;
  bool embedRoadShape;
  bool hideSurfaces;
  bool useLightProbes;
  bool hideLockedObjects;
  bool OOQQQQOCQD;
  bool isInBuildMode;
  bool progressFlag;
  int32_t progressTerrain;
  float progressStatus;
  float progressMax;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* QOQDQOOQDDQOOQ;
  ModdingAPI::Exposed::System::String_array* sideObjectNames;
  int32_t selSideObject;
  int32_t selSubSideObject;
  System_String* soID;
  System_String* sideObjectName;
  int32_t sideObjectType;
  ModdingAPI::Exposed::UnityEngine::GameObject* sideObjectSource;
  ModdingAPI::Exposed::UnityEngine::GameObject* soEndObject;
  int32_t sideObjectTerrainVegetationInt;
  int32_t prefabChildHandling;
  float sideObjectDistance;
  int32_t soYAxisRotation;
  float soSidewaysDistance;
  int32_t soSidewaysDistanceHandling;
  float soDensity;
  float soOffset;
  int32_t soTerrainAligment;
  bool soCombine;
  bool soWeld;
  int32_t soControllerType;
  ModdingAPI::Exposed::UnityEngine::Material* soMaterial;
  float soXPosition;
  float soYPosition;
  bool soMarkerActive;
  bool enableSOHandles;
  bool enableShapeNodeHandles;
  bool enableSOShapeNodeHandles;
  bool displayCriticalPoints;
  bool highlightRoad;
  bool highlightIndents;
  bool highlightSurroundings;
  bool highlightSideObject;
  bool onlyShowSelectedRoad;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soDeformationObjects;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soSplatmapObjects;
  bool buildSOinEditMode;
  bool tangentsInEditMode;
  bool calculateSmoothNormals;
  bool importSideObjectsAlert;
  bool importRoadPresetsAlert;
  bool importCrossingPresetsAlert;
  bool importSidewalkPresetsAlert;
  bool updateSideObjectsAlert;
  bool updateRoadPresetsAlert;
  bool updateCrossingPresetsAlert;
  bool updateSidewalkPresetsAlert;
  float waypointDistance;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* RoadObjectsSoUpdates;
  System_String* assetsFolderID;
  ModdingAPI::Exposed::UnityEngine::GameObject* meshSurface;
  ModdingAPI::Exposed::UnityEngine::Collider* meshTerrainCollider;
  float markerScale;
  float markerDistance;
  float minMarkerDistance;
  float maxMarkerDistance;
  bool debugFlag;
  float roadNetworkY;
  bool ignoreMinIndents;
  ModdingAPI::Exposed::UnityEngine::Vector3 zoomStart;
  ModdingAPI::Exposed::UnityEngine::Vector3 zoomEnd;
  ModdingAPI::Exposed::UnityEngine::Vector3 lookAtStart;
  ModdingAPI::Exposed::UnityEngine::Vector3 lookAtEnd;
  ModdingAPI::Exposed::UnityEngine::Quaternion zoomRot;
  float zoomStartTime;
  bool hideSurfaceHandles;
  bool dirtyBool;
  bool dirtyOnSceneBool;
  bool ODDOOCDODO;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* OQDOOOQODCScript;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* ODOCQODOCCCrossingsScript;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* ODOCQODOCCScript;
  int32_t OQDOOOQODCElement;
  int32_t ODQQQDDQDQ;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* OCCCQDQOCQ;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* ODQDOODCOQ;
  int32_t OOOQQDCQOD;
  int32_t selectedRoadSOMarker;
  int32_t selectedMarkerNode;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* selectedMarkerNodes;
  int32_t selectedMarkerSONode;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* selectedMarkerSONodes;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* selectedObjects;
  bool newRoadFlag;
  bool roadTypeUpdateFlag;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadScripts;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* prefabScripts;
  bool globalGridActive;
  bool gridGUIActive;
  ModdingAPI::Exposed::UnityEngine::Color globalGridColor;
  float globalGridSize;
  float globalGridRotation;
  ModdingAPI::Exposed::UnityEngine::Vector3 ggTL;
  ModdingAPI::Exposed::UnityEngine::Vector3 ggBL;
  ModdingAPI::Exposed::UnityEngine::Vector3 ggBR;
  bool localGridActive;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* localGrids;
  int32_t selectedLocalGrid;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* crMethod;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* upMethod;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* hmMethod;
  bool roadUpdated;
  bool clampUVs;
  int32_t soCategoryInt;
  int32_t soRoadCategoryInt;
  float minRoadWidth;
  float maxRoadWidth;
  float maxCurbHeight;
  float minCornerRadius;
  float maxCornerRadius;
  ModdingAPI::Exposed::UnityEngine::GameObject* SoTestObject;
  bool lockRoadNetwork;
  bool showNotifications;
  bool vegetationStudio;
  bool vegetationStudioActive;
  float vegetationStudioGrassPerimeter;
  float vegetationStudioPlantPerimeter;
  float vegetationStudioTreePerimeter;
  float vegetationStudioObjectPerimeter;
  float vegetationStudioLargeObjectPerimeter;

  // Member methods:
  void SetRoadTypeList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42DD70))(this);
  }
  void UpdateRoadTypeStatus() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42E820))(this);
  }
  void OQOCQOCQQC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42EA90))(this);
  }
  void OCQCDODOOO(ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42EDE0))(this, go, pos);
  }
  void OOQODQOQDD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42EF70))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* OOQQQOCCQD(ModdingAPI::Exposed::UnityEngine::GameObject* prefab, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* OCCCQDQOCQ, int32_t OOOQQDCQOD, int32_t connectionSegment) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42FA00))(this, prefab, OCCCQDQOCQ, OOOQQDCQOD, connectionSegment);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* AttachConnector(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* OCCCQDQOCQ, int32_t OOOQQDCQOD) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4307E0))(this, OCCCQDQOCQ, OOOQQDCQOD);
  }
  void ODDQCODCDQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* OCCCQDQOCQ, int32_t selectedMarker) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x430FD0))(this, OCCCQDQOCQ, selectedMarker);
  }
  int32_t OQDQDCQQOC(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* OCCCQDQOCQ, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* prefabScript, int32_t OOOQQDCQOD, int32_t startConnection, bool swapFlag) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x431280))(this, OCCCQDQOCQ, prefabScript, OOOQQDCQOD, startConnection, swapFlag);
  }
  int32_t OODQDCCCOO(System_String* roadShapeString, ModdingAPI::Exposed::System::Collections::Generic::List_T_* strings, ModdingAPI::Exposed::System::Collections::Generic::List_T_* crossingElements) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, System_String*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x431840))(this, roadShapeString, strings, crossingElements);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* OQDCOCDDQD(ModdingAPI::Exposed::UnityEngine::GameObject* prefab, ModdingAPI::Exposed::UnityEngine::Vector3 hitPos, ModdingAPI::Exposed::UnityEngine::GameObject* newPrefab, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* prefabScript, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* crossingsScript) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x432760))(this, prefab, hitPos, newPrefab, prefabScript, crossingsScript);
  }
  void ODDQOOQODD(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* prefabScript) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4339A0))(this, prefabScript);
  }
  void OQDQQDCCCC(ModdingAPI::Exposed::UnityEngine::GameObject* newPrefab, ModdingAPI::Exposed::UnityEngine::GameObject* prefab) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x433CC0))(this, newPrefab, prefab);
  }
  void ODQQQQQCOQ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4346C0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* OOQOOCQDCQ() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x434A60))(this);
  }
  void OQOCCDODCO() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x435810))(this);
  }
  void OOQQOOQODO(bool restoreTerrain) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4358F0))(this, restoreTerrain);
  }
  void OQOQCOQOOQ(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x438320))(this, pos);
  }
  void OCCDCQCOQC(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x438480))(this, pos);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 ODQQCDQCQO(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x438820))(this, pos);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetTerrainUV(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x438C30))(this, pos);
  }
  ModdingAPI::Exposed::UnityEngine::Terrain* OQQOODOQDQ(ModdingAPI::Exposed::UnityEngine::Vector3 pos, bool setSelected) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Terrain*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::Vector3, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x438E20))(this, pos, setSelected);
  }
  void OCCOCCOCCC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x439280))(this);
  }
  void UpdateLODLevels(int32_t levels) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x439820))(this, levels);
  }
  void UpdateSideObjectsInScene() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x439B20))(this);
  }
  void ODCQOCQDOD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x439D00))(this);
  }
  void ODCCCCDOOC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43A020))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType_array* GetRoadTypes() {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43A3F0))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType* GetRoadTypeByName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43AE30))(this, name);
  }
  System_String* GetNewRoadName(double id) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43B780))(this, id);
  }
  System_String* GetRoadNameByID(double id) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43BB00))(this, id);
  }
  void InitLoadImage(System_String* url) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43BCB0))(this, url);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* LoadImage(System_String* url) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43BE20))(this, url);
  }
  float OCQDCQCOQQ(ModdingAPI::Exposed::UnityEngine::Vector3 fwd, ModdingAPI::Exposed::UnityEngine::Vector3 targetDir, ModdingAPI::Exposed::UnityEngine::Vector3 up) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43BF80))(this, fwd, targetDir, up);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x43C110))(this);
  }
};
}