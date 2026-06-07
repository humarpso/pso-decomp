#ifndef _DOLPHIN_OS_INTERNAL_H_
#define _DOLPHIN_OS_INTERNAL_H_

#include <dolphin/os.h>

#ifdef __cplusplus
extern "C" {
#endif

extern char* __OSExceptionNames[17];

u32 __OSIsDebuggerPresent(void);
void __OSPSInit(void);

extern volatile int __OSCurrHeap;

void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);

void __OSCacheInit(void);

void __OSContextInit(void);

void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar);

void __OSGetExecParams(OSExecParams* params);
void __OSSetExecParams(const OSExecParams* params, OSExecParams* addr);
void __OSBootDolSimple(u32 doloffset, u32 restartCode, void* regionStart, void* regionEnd, BOOL argsUseDefault, s32 argc, char** argv);
void __OSBootDol(u32 doloffset, u32 restartCode, const char** argv);

extern void __RAS_OSDisableInterrupts_begin(void);
extern void __RAS_OSDisableInterrupts_end(void);

extern u64 __OSSpuriousInterrupts;
extern char* __OSInterruptNames[33];
extern char* __OSPIErrors[8];

__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler);
__OSInterruptHandler __OSGetInterruptHandler(__OSInterrupt interrupt);
void __OSInterruptInit(void);
OSInterruptMask __OSMaskInterrupts(OSInterruptMask global);
OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask global);
void __OSDispatchInterrupt(__OSException exception, OSContext* context);
void __OSModuleInit(void);

void __OSInitMemoryProtection(void);

void __OSUnlockAllMutex(OSThread* thread);
int __OSCheckDeadLock(OSThread* thread);
int __OSCheckMutexes(OSThread* thread);

void __OSDoHotReset(u32 resetCode);
void __OSShutdownDevices(BOOL doRecal);
int __OSCallResetFunctions(BOOL final);

void __OSResetSWInterruptHandler(s16 exception, OSContext* context);
void __OSSetResetButtonTimer(u8 min);

int __OSGetRTC(u32* rtc);
int __OSSetRTC(u32 rtc);
void __OSInitSram(void);
OSSram* __OSLockSram(void);
OSSramEx* __OSLockSramEx(void);
int __OSUnlockSram(BOOL commit);
int __OSUnlockSramEx(BOOL commit);
int __OSSyncSram(void);
int __OSCheckSram(void);
int __OSReadROM(void* buffer, s32 length, s32 offset);
int __OSReadROMAsync(void* buffer, s32 length, s32 offset, void (*callback)());
u8 __OSGetBootMode(void);
void __OSSetBootMode(u8 ntd);

extern void __OSSystemCallVectorStart();
extern void __OSSystemCallVectorEnd();

void __OSInitSystemCall(void);

void __OSThreadInit(void);
s32 __OSGetEffectivePriority(OSThread* thread);
void __OSPromoteThread(OSThread* thread, s32 priority);
void __OSReschedule(void);

void __OSSetTime(OSTime time);
OSTime __OSGetSystemTime();
void __OSSetTick(__REGISTER OSTick newTicks);
OSTime __OSTimeToSystemTime(OSTime time);

__declspec(section ".init") asm void __init_hardware(void);
__declspec(section ".init") asm void __flush_cache(void* address, unsigned int size);
void __init_user(void);
void _ExitProcess(void);

DECL_WEAK void InitMetroTRK_BBA();

__declspec(section ".init") void __start(void);

__declspec(section ".init") extern void __start(void);
__declspec(section ".init") void __copy_rom_section(void* dst, const void* src, u32 size);
__declspec(section ".init") void __init_bss_section(void* dst, u32 size);
__declspec(section ".init") extern void __init_registers(void);
__declspec(section ".init") extern void __init_data(void);

OSTime __get_clock(void);
u32 __get_time(void);
int __to_gm_time(void);

#ifdef __cplusplus
}
#endif

#endif
