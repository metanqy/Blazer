// Platform.h
//
// Module: Public
// Filter:
//
// Comment:
// 

#ifndef __BLAZER_PUBLIC_PLATFORM_H__
#define __BLAZER_PUBLIC_PLATFORM_H__

//////////////////////////////////////////////////////////////////////////
#ifdef WIN32 // WIN32 Visual C++
    #define PLATFORM_NAME "windows"
    #define PLATFORM_OS_WINDOWS

    #ifdef _WIN64
        #define IN_64BIT_MODE
    #endif
#else // __GNUC__ GCC
    #define PLATFORM_NAME "linux"
    #define PLATFORM_OS_LINUX

    #ifdef __LP64__
        #define IN_64BIT_MODE
    #endif
#endif
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

//////////////////////////////////////////////////////////////////////////

#endif // __BLAZER_PUBLIC_PLATFORM_H__

