// Type.h
// 
// Module: Public
// Filter:
//
// Comment:
// 

#ifndef __BLAZER_PUBLIC_TYPE_H__
#define __BLAZER_PUBLIC_TYPE_H__

/*
	����      windows32λ����    windows64λ����	linux32λ����	linux64λ����
	char              1         1				1				1
	short             2			2				2				2
	int               4			4				4				4
	long              4			4				4				8
	long long		  8			8				8				8
	float			  4			4				4				4
	double			  8			8				8				8
	long double		  12		16				12				16
	pointer           4			8				4				8
	size_t            4			8				4				8
*/

#include "Platform.h"

#ifdef PLATFORM_OS_WINDOWS

    //typedef long LONG;
    #if defined(IN_64BIT_MODE)

    #else

    #endif

#else // PLATFORM_OS_LINUX

    typedef int BOOL;   // 4bytes
    typedef unsigned char	BYTE;// 1bytes
    typedef unsigned short	WORD;// 2bytes
    typedef unsigned int	DWORD;// 4bytes

    #if defined(IN_64BIT_MODE)
        typedef int LONG;   // 4bytes
        typedef signed long        INT64;// 8bytes
        typedef unsigned long      UINT64;// 8bytes
    #else
        typedef long LONG;// 4bytes
        typedef signed long long   INT64;// 8bytes
        typedef unsigned long long UINT64;// 8bytes
    #endif

#endif

//#if defined(_MSC_VER)
//        //
//        // Windows/Visual C++
//        //
//        typedef signed char            Int8;
//        typedef unsigned char          UInt8;
//        typedef signed short           Int16;
//        typedef unsigned short         UInt16;
//        typedef signed int             Int32;
//        typedef unsigned int           UInt32;
//        typedef signed __int64         Int64;
//        typedef unsigned __int64       UInt64;
//#if defined(_WIN64)
//#define POCO_PTR_IS_64_BIT 1
//        typedef signed __int64     IntPtr;
//        typedef unsigned __int64   UIntPtr;
//#else
//        typedef signed long        IntPtr;
//        typedef unsigned long      UIntPtr;
//#endif
//#define POCO_HAVE_INT64 1
//#elif defined(__GNUC__) || defined(__clang__)
//        //
//        // Unix/GCC
//        //
//        typedef signed char            Int8;
//        typedef unsigned char          UInt8;
//        typedef signed short           Int16;
//        typedef unsigned short         UInt16;
//        typedef signed int             Int32;
//        typedef unsigned int           UInt32;
//        typedef signed long            IntPtr;
//        typedef unsigned long          UIntPtr;
//#if defined(__LP64__)
//#define POCO_PTR_IS_64_BIT 1
//#define POCO_LONG_IS_64_BIT 1
//        typedef signed long        Int64;
//        typedef unsigned long      UInt64;
//#else
//        typedef signed long long   Int64;
//        typedef unsigned long long UInt64;
//#endif
//#define POCO_HAVE_INT64 1

#endif // __BLAZER_PUBLIC_TYPE_H__
