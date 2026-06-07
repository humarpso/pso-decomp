#ifndef DOLPHIN_OS_H
#define DOLPHIN_OS_H

#include "types.h"

void OSInit(void);
void OSReport(const char* fmt, ...);

BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL enabled);
BOOL OSEnableInterrupts(void);

void DCFlushRange(void* addr, u32 nBytes);
void DCInvalidateRange(void* addr, u32 nBytes);
void ICInvalidateRange(void* addr, u32 nBytes);

void* OSGetArenaHi(void);
void* OSGetArenaLo(void);
void OSSetArenaHi(void* newHi);
void OSSetArenaLo(void* newLo);

void* OSGetStackPointer(void);

u32 OSGetTick(void);
u64 OSGetTime(void);

#endif
