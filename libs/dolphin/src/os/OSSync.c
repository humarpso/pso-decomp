#include <dolphin/dolphin.h>
#include <dolphin/os.h>

#include "__os.h"

void __OSSystemCallVectorStart(void);
void __OSSystemCallVectorEnd(void);

#ifdef __GEKKO__
static asm void SystemCallVector(void) {
#include "orig_asm/os/OSSync/SystemCallVector.inc"
}
#endif

void __OSInitSystemCall(void) {
    void* addr = (void*)OSPhysicalToCached(0xC00);

    memcpy(addr, __OSSystemCallVectorStart, (u32)&__OSSystemCallVectorEnd - (u32)&__OSSystemCallVectorStart);
    DCFlushRangeNoSync(addr, 0x100);
    __sync();
    ICInvalidateRange(addr, 0x100);
}
