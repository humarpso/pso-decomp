#ifndef DOLPHIN_OS_H
#define DOLPHIN_OS_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

void OSInit(void);
void OSReport(const char* fmt, ...);

BOOL OSDisableInterrupts(void);
BOOL OSEnableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL enabled);

void* __OSSetInterruptHandler(s16 interrupt, void* handler);
void* __OSGetInterruptHandler(s16 interrupt);

void DCFlushRange(void* addr, u32 nBytes);
void DCStoreRange(void* addr, u32 nBytes);
void DCInvalidateRange(void* addr, u32 nBytes);
void ICInvalidateRange(void* addr, u32 nBytes);

void* OSGetArenaHi(void);
void* OSGetArenaLo(void);
void OSSetArenaHi(void* newHi);
void OSSetArenaLo(void* newLo);

typedef s64 OSTime;
typedef u32 OSTick;

#define OS_BUS_CLOCK   162000000u
#define OS_TIMER_CLOCK (OS_BUS_CLOCK / 4)

OSTick OSGetTick(void);
OSTime OSGetTime(void);

typedef struct OSContext {
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
} OSContext;

OSContext* OSGetCurrentContext(void);
void OSSaveContext(OSContext* context);
void OSLoadContext(OSContext* context);
void OSSetCurrentContext(OSContext* context);

void OSResetSystem(int reset, u32 resetCode, BOOL forceMenu);

typedef struct OSThread OSThread;

void* OSGetStackPointer(void);

#ifdef __cplusplus
}
#endif

#endif
