#include <dolphin/base/PPCArch.h>
#include <dolphin/db.h>
#include <dolphin/os.h>

BOOL DBVerbose;
struct DBInterface* __DBInterface;

void DBInit(void)
{
	__DBInterface = OSPhysicalToCached(0x40);
	__DBInterface->ExceptionDestination
	    = (void*)OSCachedToPhysical(__DBExceptionDestination);
	DBVerbose = TRUE;
}

void __DBExceptionDestinationAux(void)
{
	u32* contextAddr;
	OSContext* context;

	contextAddr = (void*)0xC0;
	context     = OSPhysicalToCached(*contextAddr);
	OSReport("DBExceptionDestination\n");
	OSDumpContext(context);
	PPCHalt();
}

asm void __DBExceptionDestination(void) {
#include "orig_asm/db/db/__DBExceptionDestination.inc"
}

BOOL __DBIsExceptionMarked(__OSException exception)
{
	u32 mask = (1 << exception);
	return __DBInterface->exceptionMask & mask;
}

void DBPrintf(char* str, ...) { }
