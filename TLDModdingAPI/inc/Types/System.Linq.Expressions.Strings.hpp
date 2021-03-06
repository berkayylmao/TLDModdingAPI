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
struct __Strings_Il2CppStaticFields {
};

struct __Strings_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Strings_Il2CppClass {
  Il2CppClass_1 _1;
  __Strings_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Strings_Il2CppVtbl vtbl;
};

class Strings {
public:
  // Il2Cpp fields:
  __Strings_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline System_String* get_ReducibleMustOverrideReduce() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1517CE0))();
  }
  static inline System_String* get_MustReduceToDifferent() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1517D60))();
  }
  static inline System_String* get_ReducedNotCompatible() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1517DE0))();
  }
  static inline System_String* get_SetterHasNoParams() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1517E60))();
  }
  static inline System_String* get_PropertyCannotHaveRefType() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1517EE0))();
  }
  static inline System_String* get_IndexesOfSetGetMustMatch() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1517F60))();
  }
  static inline System_String* get_AccessorsCannotHaveVarArgs() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1517FE0))();
  }
  static inline System_String* get_AccessorsCannotHaveByRefArgs() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518060))();
  }
  static inline System_String* get_TypeMustNotBeByRef() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15180E0))();
  }
  static inline System_String* get_TypeMustNotBePointer() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518160))();
  }
  static inline System_String* get_SetterMustBeVoid() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15181E0))();
  }
  static inline System_String* get_PropertyTypeMustMatchGetter() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518260))();
  }
  static inline System_String* get_PropertyTypeMustMatchSetter() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15182E0))();
  }
  static inline System_String* get_BothAccessorsMustBeStatic() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518360))();
  }
  static inline System_String* get_OnlyStaticFieldsHaveNullInstance() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15183E0))();
  }
  static inline System_String* get_OnlyStaticPropertiesHaveNullInstance() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518460))();
  }
  static inline System_String* get_PropertyTypeCannotBeVoid() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15184E0))();
  }
  static inline System_String* get_InvalidUnboxType() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518560))();
  }
  static inline System_String* get_ExpressionMustBeWriteable() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15185E0))();
  }
  static inline System_String* get_ArgumentMustNotHaveValueType() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518660))();
  }
  static inline System_String* get_MustBeReducible() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15186E0))();
  }
  static inline System_String* get_QuotedExpressionMustBeLambda() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518760))();
  }
  static inline System_String* get_CollectionModifiedWhileEnumerating() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15187E0))();
  }
  static inline System_String* VariableMustNotBeByRef(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518860))(p0, p1);
  }
  static inline System_String* DuplicateVariable(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518900))(p0);
  }
  static inline System_String* ExtensionNodeMustOverrideProperty(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518990))(p0);
  }
  static inline System_String* UserDefinedOperatorMustBeStatic(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518A20))(p0);
  }
  static inline System_String* UserDefinedOperatorMustNotBeVoid(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518AB0))(p0);
  }
  static inline System_String* CoercionOperatorNotDefined(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518B40))(p0, p1);
  }
  static inline System_String* UnaryOperatorNotDefined(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518BE0))(p0, p1);
  }
  static inline System_String* BinaryOperatorNotDefined(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518C80))(p0, p1, p2);
  }
  static inline System_String* ReferenceEqualityNotDefined(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518D30))(p0, p1);
  }
  static inline System_String* OperandTypesDoNotMatchParameters(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518DD0))(p0, p1);
  }
  static inline System_String* OverloadOperatorTypeDoesNotMatchConversionType(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518E70))(p0, p1);
  }
  static inline System_String* get_ConversionIsNotSupportedForArithmeticTypes() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518F10))();
  }
  static inline System_String* get_ArgumentMustBeArray() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1518F90))();
  }
  static inline System_String* get_ArgumentMustBeArrayIndexType() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519010))();
  }
  static inline System_String* get_ArgumentMustBeSingleDimensionalArrayType() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519090))();
  }
  static inline System_String* get_ArgumentTypesMustMatch() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519110))();
  }
  static inline System_String* IncorrectTypeForTypeAs(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519190))(p0);
  }
  static inline System_String* get_CoalesceUsedOnNonNullType() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519220))();
  }
  static inline System_String* ExpressionTypeDoesNotMatchAssignment(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15192A0))(p0, p1);
  }
  static inline System_String* ExpressionTypeNotInvocable(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519340))(p0);
  }
  static inline System_String* FieldInfoNotDefinedForType(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15193D0))(p0, p1, p2);
  }
  static inline System_String* get_IncorrectNumberOfIndexes() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519480))();
  }
  static inline System_String* MemberNotFieldOrProperty(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519500))(p0);
  }
  static inline System_String* MethodContainsGenericParameters(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519590))(p0);
  }
  static inline System_String* MethodIsGeneric(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519620))(p0);
  }
  static inline System_String* PropertyDoesNotHaveAccessor(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15196B0))(p0);
  }
  static inline System_String* PropertyNotDefinedForType(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519740))(p0, p1);
  }
  static inline System_String* InstanceAndMethodTypeMismatch(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15197E0))(p0, p1, p2);
  }
  static inline System_String* UnhandledBinary(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519890))(p0);
  }
  static inline System_String* UnhandledUnary(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519920))(p0);
  }
  static inline System_String* UserDefinedOpMustHaveConsistentTypes(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15199B0))(p0, p1);
  }
  static inline System_String* UserDefinedOpMustHaveValidReturnType(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519A50))(p0, p1);
  }
  static inline System_String* LogicalOperatorMustHaveBooleanOperators(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519AF0))(p0, p1);
  }
  static inline System_String* get_ArgumentCannotBeOfTypeVoid() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519B90))();
  }
  static inline System_String* MustRewriteToSameNode(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519C10))(p0, p1, p2);
  }
  static inline System_String* MustRewriteChildToSameType(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519CC0))(p0, p1, p2);
  }
  static inline System_String* MustRewriteWithoutMethod(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519D70))(p0, p1);
  }
  static inline System_String* get_ExpressionMustBeReadable() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519E10))();
  }
  static inline System_String* ExpressionTypeDoesNotMatchConstructorParameter(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519E90))(p0, p1);
  }
  static inline System_String* get_EnumerationIsDone() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519F30))();
  }
  static inline System_String* TypeContainsGenericParameters(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1519FB0))(p0);
  }
  static inline System_String* TypeIsGeneric(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A040))(p0);
  }
  static inline System_String* InvalidNullValue(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A0D0))(p0);
  }
  static inline System_String* InvalidObjectType(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A160))(p0, p1);
  }
  static inline System_String* ExpressionTypeDoesNotMatchMethodParameter(Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A200))(p0, p1, p2);
  }
  static inline System_String* ExpressionTypeDoesNotMatchParameter(Il2CppObject* p0, Il2CppObject* p1) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A2B0))(p0, p1);
  }
  static inline System_String* IncorrectNumberOfMethodCallArguments(Il2CppObject* p0) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A350))(p0);
  }
  static inline System_String* get_IncorrectNumberOfLambdaArguments() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A3E0))();
  }
  static inline System_String* get_IncorrectNumberOfConstructorArguments() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x151A460))();
  }
};
}