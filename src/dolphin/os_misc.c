#include "types.h"

asm u32 OSGetStackPointer(void) {
#include "orig_asm/dolphin/os_misc/OSGetStackPointer.inc"
}

void* func_8001408C(void) {
    return *(void**)0x800000E4;
}

extern u32 func_80010D28_global;
u32 func_80010D28(u32 val) {
    u32 old = func_80010D28_global;
    func_80010D28_global = val;
    return old;
}

u32 func_80010444(void) {
    return *(vu32*)0xCC006024 & 0xFF;
}
