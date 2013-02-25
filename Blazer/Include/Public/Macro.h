// Macro.h
// 
// Module: Public
// Filter:
//
// Comment:
// 

#ifndef __BLAZER_PUBLIC_MACRO_H__
#define __BLAZER_PUBLIC_MACRO_H__

#ifdef USING_NAMESPACE
    #define DECLARE_NAMESPACE_BEGIN(module) \
        namespace blazer_##module {
    #define DECLARE_NAMESPACE_END }
#else
    #define DECLARE_NAMESPACE_BEGIN(module)
    #define DECLARE_NAMESPACE_END
#endif

#endif // __BLAZER_PUBLIC_MACRO_H__
