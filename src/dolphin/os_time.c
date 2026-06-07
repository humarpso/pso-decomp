#include "dolphin/os.h"

asm OSTime OSGetTime(void) {
#include "orig_asm/dolphin/os_time/OSGetTime.inc"
}

asm u32 OSGetTick(void) {
#include "orig_asm/dolphin/os_time/OSGetTick.inc"
}
