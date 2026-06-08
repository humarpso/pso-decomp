#include "dolphin/os.h"

asm OSTime OSGetTime(void) {
#include "orig_asm/dolphin/os_time/OSGetTime.inc"
}

OSTime func_80014D78(void) {
    BOOL enabled = OSDisableInterrupts();
    OSTime time = OSGetTime() + *(OSTime*)0x800030D8;
    OSRestoreInterrupts(enabled);
    return time;
}

asm u32 OSGetTick(void) {
#include "orig_asm/dolphin/os_time/OSGetTick.inc"
}
