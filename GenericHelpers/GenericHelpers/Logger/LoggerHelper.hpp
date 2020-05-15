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
#include <chrono>   // system_clock
#include <fstream>  // ofstream
#include <iomanip>  // put_time
#include <sstream>  // stringstream

enum class LogLevel : uint32_t { DebugConsole = 0, Debug = 1, Info = 2, Warning = 3, Error = 4 };
namespace Helpers::Logger {
  namespace details {
    static std::string pathLogFile;
    static LogLevel    logLevel;
  }  // namespace details

  static void Log(LogLevel level, const std::wstring& message, const wchar_t* functionName,
                  const wchar_t* fileName, const int32_t lineNumber) {
    if (level < details::logLevel) return;

    std::wstringstream _ss;
    {
      time_t    _time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
      struct tm _timeInfo;
      localtime_s(&_timeInfo, &_time);
      _ss << std::put_time(&_timeInfo, L"%d/%m/%Y %H:%M:%S");
    }

    static std::wstring header, content;
    switch (level) {
      case LogLevel::DebugConsole:
        header = L"DEBUG_CONSOLE";
        break;
      case LogLevel::Debug:
        header = L"DEBUG";
        break;
      case LogLevel::Info:
        header = L"INFO";
        break;
      case LogLevel::Warning:
        header = L"WARNING";
        break;
      case LogLevel::Error:
        header = L"ERROR";
        break;
    }
    content = fmt::sprintf(L"[%ls] %ls - %ls\r\n\tFrom: %ls (%ls:%d)\r\n", header, _ss.str(),
                           message, functionName, fileName, lineNumber);

    if (details::logLevel == LogLevel::DebugConsole) wprintf(L"%ls", content.c_str());

    std::wofstream ofs(details::pathLogFile, std::ios_base::binary | std::ios_base::app);
    ofs << content << std::endl;
  }
  static void Log(LogLevel level, const wchar_t* message, const wchar_t* functionName,
                  const wchar_t* fileName, const int32_t lineNumber) {
    Log(level, message, functionName, fileName, lineNumber);
  }
  static void Log(LogLevel level, const char* message, const wchar_t* functionName,
                  const wchar_t* fileName, const int32_t lineNumber) {
    auto         wsize = MultiByteToWideChar(CP_UTF8, 0, message, strlen(message), NULL, 0);
    std::wstring wstr(wsize, 0);
    MultiByteToWideChar(CP_UTF8, 0, message, strlen(message), &wstr[0], wsize);

    Log(level, wstr, functionName, fileName, lineNumber);
  }
  static void Log(LogLevel level, std::string& message, const wchar_t* functionName,
                  const wchar_t* fileName, const int32_t lineNumber) {
    Log(level, message.c_str(), functionName, fileName, lineNumber);
  }
}  // namespace Helpers::Logger

#define __ModdingAPI_Log__ExpandLayer(str) L##str
#define __ModdingAPI_Log__Expand(str)      __ModdingAPI_Log__ExpandLayer(str)
#define ModdingAPI_Log(LogLevel_, Message)                                        \
  Helpers::Logger::Log(LogLevel_, Message, __ModdingAPI_Log__Expand(__FUNCSIG__), \
                       __ModdingAPI_Log__Expand(__FILE__), __LINE__)
