/*****************************************************************//**
 * \file   Core.hpp
 * \brief  core definition header
 * 
 * \author yun
 * \date   August 2023
 *********************************************************************/

#pragma once

//#ifdef RZ_PALTFORM_WINDOWS
//    #ifdef RZ_DYNAMIC_LINK
//        #ifdef RZ_BUILD_DLL
//        #define RzAPI __declspec(dllexport)
//        #else
//        #define RzAPI __declspec(dllimport)
//        #endif
//    #else
//        #define RzAPI
//    #endif
//#else
//    #error Razel only support Windows!
//#endif

// CMD
enum class CONSOLE_CMD
{
    UNKNOWN = 0,    // 未知CMD
    EXIT,           // 退出
    CLIENT,         // 列出所有客户端的SOCKET
    VERSION,        // 客户端版本信息
    SEND
};

enum class TCP_CMD
{
    NORMAL          = 0xF1,
    VERSION         = 0xF2,
    UPDATE          = 0xF3,
    UPDATE_START    = 0xF4,
    FILE_HEADER     = 0xF5,
    FILE_PACKET     = 0xF6,
    File_TAIL       = 0xF7,
    UPDATE_FIN      = 0xF8
};

enum class CMDType
{
    NONE = 0,
    FUNC,
    TRANSFER,
};

#include <vector>
#include <string>

static const std::vector<std::string> g_FunCMD
{
    "exit",
    "client",
    "version",
    "ls"
};

static const std::vector<unsigned char> g_ClientCMD
{
    0xF1,
    0xF3
};

