#include <dolphin.h>
#include <dolphin/hw_regs.h>
#include <stddef.h>
#include <macros.h>

#include "dsp/__dsp.h"

#define BUILD_DATE "Dec 17 2001"
#define BUILD_TIME "18:25:00"

u32 DSPCheckMailToDSP(void) { return (__DSPRegs[0] & (1 << 15)) >> 15; }

u32 DSPCheckMailFromDSP(void) { return (__DSPRegs[2] & (1 << 15)) >> 15; }

u32 DSPReadMailFromDSP(void) { return (__DSPRegs[2] << 16) | __DSPRegs[3]; }

void DSPSendMailToDSP(u32 mail)
{
	__DSPRegs[0] = mail >> 16;
	__DSPRegs[1] = mail & 0xFFFF;
}
