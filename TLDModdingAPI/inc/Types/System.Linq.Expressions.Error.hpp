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


namespace ModdingAPI::Exposed::System::Linq::Expressions {
struct __Error_Il2CppStaticFields {
};

struct __Error_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Error_Il2CppClass {
  Il2CppClass_1 _1;
  __Error_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Error_Il2CppVtbl vtbl;
};

class Error {
public:
  // Il2Cpp fields:
  __Error_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline ModdingAPI::Exposed::System::Exception* ReducibleMustOverrideReduce() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DC350))();
  }
  static inline ModdingAPI::Exposed::System::Exception* CollectionModifiedWhileEnumerating() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DC500))();
  }
  static inline ModdingAPI::Exposed::System::Exception* MustReduceToDifferent() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DC6B0))();
  }
  static inline ModdingAPI::Exposed::System::Exception* ReducedNotCompatible() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DC860))();
  }
  static inline ModdingAPI::Exposed::System::Exception* SetterHasNoParams(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DCA10))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* PropertyCannotHaveRefType(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DCBD0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* IndexesOfSetGetMustMatch(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DCD90))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* AccessorsCannotHaveVarArgs(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DCF50))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* AccessorsCannotHaveByRefArgs(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DD110))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* AccessorsCannotHaveByRefArgs(System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DD2D0))(paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* TypeMustNotBeByRef(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DD2F0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* TypeMustNotBePointer(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DD4B0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* SetterMustBeVoid(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DD670))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* PropertyTypeMustMatchGetter(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DD830))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* PropertyTypeMustMatchSetter(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DD9F0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* BothAccessorsMustBeStatic(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DDBB0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* OnlyStaticFieldsHaveNullInstance(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DDD70))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* OnlyStaticPropertiesHaveNullInstance(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DDF30))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* PropertyTypeCannotBeVoid(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DE0F0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* InvalidUnboxType(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DE2B0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionMustBeWriteable(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DE470))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ArgumentMustNotHaveValueType(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DE630))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* MustBeReducible() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DE7F0))();
  }
  static inline ModdingAPI::Exposed::System::Exception* QuotedExpressionMustBeLambda(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DE9A0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* VariableMustNotBeByRef(Il2CppObject* p0, Il2CppObject* p1, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DEB60))(p0, p1, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* VariableMustNotBeByRef(Il2CppObject* p0, Il2CppObject* p1, System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DED30))(p0, p1, paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* DuplicateVariable(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DED70))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* DuplicateVariable(Il2CppObject* p0, System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DEF40))(p0, paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExtensionNodeMustOverrideProperty(Il2CppObject* p0) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DEF70))(p0);
  }
  static inline ModdingAPI::Exposed::System::Exception* UserDefinedOperatorMustBeStatic(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DF130))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* UserDefinedOperatorMustNotBeVoid(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DF300))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* CoercionOperatorNotDefined(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DF4D0))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* UnaryOperatorNotDefined(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DF6A0))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* BinaryOperatorNotDefined(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DF870))(p0, p1, p2);
  }
  static inline ModdingAPI::Exposed::System::Exception* ReferenceEqualityNotDefined(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DFA40))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* OperandTypesDoNotMatchParameters(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DFC10))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DFDE0))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* ConversionIsNotSupportedForArithmeticTypes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11DFFB0))();
  }
  static inline ModdingAPI::Exposed::System::Exception* ArgumentMustBeArray(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E0160))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ArgumentMustBeArrayIndexType(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E0320))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ArgumentMustBeSingleDimensionalArrayType(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E04E0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ArgumentTypesMustMatch() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E06A0))();
  }
  static inline ModdingAPI::Exposed::System::Exception* IncorrectTypeForTypeAs(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E0850))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* CoalesceUsedOnNonNullType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E0A20))();
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeDoesNotMatchAssignment(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E0BD0))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeNotInvocable(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E0DA0))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* FieldInfoNotDefinedForType(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E0F70))(p0, p1, p2);
  }
  static inline ModdingAPI::Exposed::System::Exception* IncorrectNumberOfIndexes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E1140))();
  }
  static inline ModdingAPI::Exposed::System::Exception* MemberNotFieldOrProperty(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E12F0))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* MethodContainsGenericParameters(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E14C0))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* MethodIsGeneric(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E1690))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* PropertyDoesNotHaveAccessor(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E1860))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* PropertyNotDefinedForType(Il2CppObject* p0, Il2CppObject* p1, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E1A30))(p0, p1, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* InstanceAndMethodTypeMismatch(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E1C00))(p0, p1, p2);
  }
  static inline ModdingAPI::Exposed::System::Exception* UnhandledBinary(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E1DD0))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* UnhandledUnary(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E1FA0))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* UserDefinedOpMustHaveConsistentTypes(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E2170))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* UserDefinedOpMustHaveValidReturnType(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E2340))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* LogicalOperatorMustHaveBooleanOperators(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E2510))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* ArgumentCannotBeOfTypeVoid(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E26E0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* MustRewriteToSameNode(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E28A0))(p0, p1, p2);
  }
  static inline ModdingAPI::Exposed::System::Exception* MustRewriteChildToSameType(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E2A70))(p0, p1, p2);
  }
  static inline ModdingAPI::Exposed::System::Exception* MustRewriteWithoutMethod(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E2C40))(p0, p1);
  }
  static inline ModdingAPI::Exposed::System::Exception* ArgumentOutOfRange(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E2E10))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* EnumerationIsDone() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E2F70))();
  }
  static inline ModdingAPI::Exposed::System::Exception* TypeContainsGenericParameters(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3120))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* TypeContainsGenericParameters(Il2CppObject* p0, System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E32F0))(p0, paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* TypeIsGeneric(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3320))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* TypeIsGeneric(Il2CppObject* p0, System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E34F0))(p0, paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* IncorrectNumberOfConstructorArguments() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3520))();
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E36D0))(p0, p1, p2, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E38B0))(p0, p1, p2, paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeDoesNotMatchParameter(Il2CppObject* p0, Il2CppObject* p1, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3900))(p0, p1, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeDoesNotMatchParameter(Il2CppObject* p0, Il2CppObject* p1, System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3AD0))(p0, p1, paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* IncorrectNumberOfLambdaArguments() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3B10))();
  }
  static inline ModdingAPI::Exposed::System::Exception* IncorrectNumberOfMethodCallArguments(Il2CppObject* p0, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3CC0))(p0, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(Il2CppObject* p0, Il2CppObject* p1, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E3E90))(p0, p1, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(Il2CppObject* p0, Il2CppObject* p1, System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, Il2CppObject*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E4060))(p0, p1, paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionMustBeReadable(System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E40A0))(paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* ExpressionMustBeReadable(System_String* paramName, int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E4260))(paramName, index);
  }
  static inline ModdingAPI::Exposed::System::Exception* InvalidNullValue(ModdingAPI::Exposed::System::Type* type, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E4280))(type, paramName);
  }
  static inline ModdingAPI::Exposed::System::Exception* InvalidTypeException(Il2CppObject* value, ModdingAPI::Exposed::System::Type* type, System_String* paramName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::Type*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E4450))(value, type, paramName);
  }
  static inline System_String* GetParamName(System_String* paramName, int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11E4650))(paramName, index);
  }
};
}