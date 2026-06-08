#include "types.h"

void func_8003308C(s32 channel, s32 exi_int, s32 tc_int, s32 rom_dis) {
    vu32* reg = (vu32*)(0xCC006800 + channel * 0x14);
    u32 val = *reg;
    val &= 0x7F5;
    if (exi_int) {
        val |= 0x002;
    }
    if (tc_int) {
        val |= 0x008;
    }
    if (rom_dis) {
        val |= 0x800;
    }
    *reg = val;
}

extern void func_8001D2D8(void);
extern void* __OSSetInterruptHandler(s16 interrupt, void* handler);
extern void func_800125E4(u32 mask);
extern void* func_8001408C(void);

extern void* glob_8003EB98;
extern u32 glob_8003EBA0;
extern u32 glob_8003EB90;
extern u32 glob_8003EB94;

void func_8001D790(void) {
    __OSSetInterruptHandler(17, (void*)func_8001D2D8);
    func_800125E4(0x4000);
    glob_8003EB98 = func_8001408C();
    glob_8003EBA0 = 0;
    glob_8003EB90 = 0;
    glob_8003EB94 = 0;
}
