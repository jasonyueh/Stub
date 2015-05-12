#include <Windows.h>
#include "trace.h"
#include "main.tmh"

int wmain( int argc, WCHAR **argv) 
{
    WPP_INIT_TRACING(NULL);
 
    DoTraceMessage(DBG_INFO, "%s\n", "WPP Start!"); 

    WPP_CLEANUP();

    return 0;
}