#include "types.h"

asm void __OSEnableDcache(void) {
#include "orig_asm/dolphin/os_cache/__OSEnableDcache.inc"
}

asm void DCInvalidateRange(void *addr, u32 nBytes) {
#include "orig_asm/dolphin/os_cache/DCInvalidateRange.inc"
}

asm void DCStoreRange(void *addr, u32 nBytes) {
#include "orig_asm/dolphin/os_cache/DCStoreRange.inc"
}

asm void DCFlushRangeNoSync(void *addr, u32 nBytes) {
#include "orig_asm/dolphin/os_cache/DCFlushRangeNoSync.inc"
}

asm void DCFlushRange(void *addr, u32 nBytes) {
#include "orig_asm/dolphin/os_cache/DCFlushRange.inc"
}

asm void DCZeroRange(void *addr, u32 nBytes) {
#include "orig_asm/dolphin/os_cache/DCZeroRange.inc"
}

asm void ICFlashInvalidate(void) {
#include "orig_asm/dolphin/os_cache/ICFlashInvalidate.inc"
}

asm void __OSEnableIcache(void) {
#include "orig_asm/dolphin/os_cache/__OSEnableIcache.inc"
}

extern u32 OSDisableInterrupts(void);
extern void func_80011200(void);
extern void OSRestoreInterrupts(u32 state);

void LCEnable(void) {
    u32 state;
    state = OSDisableInterrupts();
    func_80011200();
    OSRestoreInterrupts(state);
}

asm void LCDisable(void) {
#include "orig_asm/dolphin/os_cache/LCDisable.inc"
}
