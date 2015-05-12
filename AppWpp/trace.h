/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

    THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
    KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
    PURPOSE.

Module Name:

    trace.h

Abstract:

    tracedrv.h defines:
    - The provider GUID for the driver. 
    - Macros for tracing with levels and flags
    - Tracing enumerations using custom type
    - Trace macro that incorporates PRE/POST macros

Environment:

    User mode

--*/


//
// Software Tracing Definitions 
//

#ifndef __EZ_EVT_MON_TOOL_H__
#define __EZ_EVT_MON_TOOL_H__

#define WPP_CONTROL_GUIDS \
    WPP_DEFINE_CONTROL_GUID(CtlGuid,(a193a58e, 6e2c, 42e9, a284, e90231a1e4cb),  \
        WPP_DEFINE_BIT(DBG_ERROR)               \
        WPP_DEFINE_BIT(DBG_WARNING)             \
        WPP_DEFINE_BIT(DBG_INFO)                \
        WPP_DEFINE_BIT(PERF_TRACE) )

// begin_wpp config
// FUNC WPPLog(LEVEL,MSG,...); 
// end_wpp

#endif