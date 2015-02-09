#ifndef __CCEXTENSIONEXPORT_H__
#define __CCEXTENSIONEXPORT_H__

#if defined(WIN32) && defined(_WINDOWS)
    #ifdef __MINGW32__
        #include <string.h>
    #endif

    //#if defined(_USREXDLL)
    //    #define CC_EX_DLL     __declspec(dllexport)
    //#else         /* use a DLL library */
    //    #define CC_EX_DLL     __declspec(dllimport)
    //#endif
    // SIXION MODIFY:
    // 1. We want to build libcocos2d as a static library
    // 2. We move Spine extension source codes from libExtension into libcocos2d.
    // 3. We don't want to use other extensions.
    // Therefore we invalidate this define so that makes linker happy :)
    #define CC_EX_DLL


    /* Define NULL pointer value */
    #ifndef NULL
        #ifdef __cplusplus
            #define NULL    0
        #else
            #define NULL    ((void *)0)
        #endif
    #endif
#else
    #define CC_EX_DLL
#endif

#endif /* __CCEXTENSIONEXPORT_H__*/