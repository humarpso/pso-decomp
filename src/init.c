#include "types.h"

extern void __init_registers(void);
extern void __init_hardware(void);
extern void func_8001040C(void);
extern void func_80011524(void);
extern void func_8000FA38(void);
extern void func_800277E8(void *);
extern void func_8000E364(void *, u32, u32);

void func_8000E448(void *dst, void *src, u32 count);

asm void __start(void) {
#include "orig_asm/init/__start.inc"
}

asm void __init_registers(void) {
#include "orig_asm/init/__init_registers.inc"
}

asm void __init_hardware(void) {
#include "orig_asm/init/__init_hardware.inc"
}

asm void FlushCodeRange(void *addr, u32 length) {
#include "orig_asm/init/FlushCodeRange.inc"
}

void *func_8000C2A8(void *ptr) {
    func_800277E8(ptr);
    return ptr;
}

asm void func_8000C2D8(void *dst, void *src, u32 count) {
#include "orig_asm/init/func_8000C2D8.inc"
}

void *func_8000E334(void *dst, u32 val, u32 count) {
    func_8000E364(dst, val, count);
    return dst;
}

asm void func_8000E41C(void *dst, void *src, u32 count) {
#include "orig_asm/init/func_8000E41C.inc"
}

asm void func_8000E448(void *dst, void *src, u32 count) {
#include "orig_asm/init/func_8000E448.inc"
}

asm void __PSInit(void) {
#include "orig_asm/init/__PSInit.inc"
}
