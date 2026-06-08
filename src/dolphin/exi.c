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
