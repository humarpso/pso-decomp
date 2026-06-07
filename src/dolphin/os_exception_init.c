#include "types.h"

extern u32* __OSExceptionTable_ptr;

extern u32 __OSExceptionInit_flag;

extern void* __OSBootInfo;

asm void func_8000FA10(void) {
#include "orig_asm/dolphin/os_exception_init/func_8000FA10.inc"
}

asm u32 func_8000FA90(register u32 bit_index) {
#include "orig_asm/dolphin/os_exception_init/func_8000FA90.inc"
}

u32 func_8000FAFC(void) {
    u32* ptr = (u32*)__OSBootInfo;
    if (ptr != 0) {
        u32 val = *(u32*)((u8*)ptr + 0x2C);
        if (val != 0) {
            return val;
        }
    }
    return 0x10000002;
}
