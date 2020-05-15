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
struct __ExpressionVisitor_Il2CppStaticFields {
};

struct __ExpressionVisitor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Visit;
  VirtualInvokeData _5_VisitBinary;
  VirtualInvokeData _6_VisitBlock;
  VirtualInvokeData _7_VisitConstant;
  VirtualInvokeData _8_VisitExtension;
  VirtualInvokeData _9_VisitInvocation;
  VirtualInvokeData _10_VisitLambda;
  VirtualInvokeData _11_VisitMember;
  VirtualInvokeData _12_VisitIndex;
  VirtualInvokeData _13_VisitParameter;
  VirtualInvokeData _14_VisitUnary;
};

struct __ExpressionVisitor_Il2CppClass {
  Il2CppClass_1 _1;
  __ExpressionVisitor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ExpressionVisitor_Il2CppVtbl vtbl;
};

class ExpressionVisitor {
public:
  // Il2Cpp fields:
  __ExpressionVisitor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* Visit(ModdingAPI::Exposed::System::Linq::Expressions::Expression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::Expression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD590))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression_array* VisitArguments(ModdingAPI::Exposed::System::Linq::Expressions::IArgumentProvider* nodes) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression_array*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::IArgumentProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD5C0))(this, nodes);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::ParameterExpression_array* VisitParameters(ModdingAPI::Exposed::System::Linq::Expressions::IParameterProvider* nodes, System_String* callerName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::ParameterExpression_array*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::IParameterProvider*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD5D0))(this, nodes, callerName);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitBinary(ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD5E0))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitBlock(ModdingAPI::Exposed::System::Linq::Expressions::BlockExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::BlockExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD710))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitConstant(ModdingAPI::Exposed::System::Linq::Expressions::ConstantExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::ConstantExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64F310))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitExtension(ModdingAPI::Exposed::System::Linq::Expressions::Expression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::Expression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11F34C0))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitInvocation(ModdingAPI::Exposed::System::Linq::Expressions::InvocationExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::InvocationExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD830))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitMember(ModdingAPI::Exposed::System::Linq::Expressions::MemberExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::MemberExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD8C0))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitIndex(ModdingAPI::Exposed::System::Linq::Expressions::IndexExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::IndexExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FD9C0))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitParameter(ModdingAPI::Exposed::System::Linq::Expressions::ParameterExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::ParameterExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64F310))(this, node);
  }
  ModdingAPI::Exposed::System::Linq::Expressions::Expression* VisitUnary(ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression* node) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::Expression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::ExpressionVisitor*, ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FDAE0))(this, node);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression* ValidateUnary(ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression* before, ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression* after) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression*, ModdingAPI::Exposed::System::Linq::Expressions::UnaryExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FDC20))(before, after);
  }
  static inline ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression* ValidateBinary(ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression* before, ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression* after) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression*(__fastcall*)(ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression*, ModdingAPI::Exposed::System::Linq::Expressions::BinaryExpression*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FDDD0))(before, after);
  }
  static inline void ValidateChildType(ModdingAPI::Exposed::System::Type* before, ModdingAPI::Exposed::System::Type* after, System_String* methodName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11FE020))(before, after, methodName);
  }
};
}