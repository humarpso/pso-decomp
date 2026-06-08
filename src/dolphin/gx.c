#include "types.h"

extern u8* glob_8003E8A8;
extern u8* glob_8003EB84;

void func_8001D814(u8 enable) {
    u32 val;
    u32 reg;
    if (enable) {
        val = 1;
    } else {
        val = 0;
    }
    reg = *(u32*)(glob_8003E8A8 + 8);
    *(u32*)(glob_8003E8A8 + 8) = (reg & ~0x10) | (val << 4);
    *(u16*)(glob_8003EB84 + 2) = (u16)*(u32*)(glob_8003E8A8 + 8);
}

void func_8001D858(u32 arg1, u32 arg2) {
    u32 reg;
    reg = *(u32*)(glob_8003E8A8 + 8);
    *(u32*)(glob_8003E8A8 + 8) = (reg & ~0x4) | ((arg1 << 2) & 0x3FC);

    reg = *(u32*)(glob_8003E8A8 + 8);
    *(u32*)(glob_8003E8A8 + 8) = (reg & ~0x8) | ((arg2 << 3) & 0x7F8);

    *(u16*)(glob_8003EB84 + 2) = (u16)*(u32*)(glob_8003E8A8 + 8);
}

void func_8001D8A4(u32 arg1, u32 arg2) {
    u32 reg;
    reg = *(u32*)(glob_8003E8A8 + 0x10);
    *(u32*)(glob_8003E8A8 + 0x10) = (reg & ~0x1) | (arg1 & 0xFF);

    reg = *(u32*)(glob_8003E8A8 + 0x10);
    *(u32*)(glob_8003E8A8 + 0x10) = (reg & ~0x2) | ((arg2 << 1) & 0x1FE);

    *(u16*)(glob_8003EB84 + 4) = (u16)*(u32*)(glob_8003E8A8 + 0x10);
}

void func_8001DF20(void) {
    *(u32*)(glob_8003E8A8 + 0x14) = 0;
    *(u32*)(glob_8003E8A8 + 0x14) = (*(u32*)(glob_8003E8A8 + 0x14) & ~0x600) | 0x200;
    *(u32*)(glob_8003E8A8 + 0x18) = 0;
    *(u8*)(glob_8003E8A8 + 0x41C) = 0;
    *(u8*)(glob_8003E8A8 + 0x41D) = 0;
    *(u32*)(glob_8003E8A8 + 0x4F4) |= 8;
}

void func_8001E6D0(u8 arg) {
    u8* ctx;
    u32 reg;
    ctx = glob_8003E8A8;
    reg = *(u32*)(ctx + 0x204);
    *(u32*)(ctx + 0x204) = (reg & ~0xF) | (arg & 0xFF);

    *(vu8*)0xCC008000 = 0x10;
    *(vu32*)0xCC008000 = 0x103F;
    *(vu32*)0xCC008000 = (u32)(arg & 0xFF);

    *(u32*)(glob_8003E8A8 + 0x4F4) |= 4;
}

void func_8001EEB0(u32 arg) {
    u32 shifted;
    u32 reg;
    shifted = (arg << 19) & 0x07F80000;
    reg = *(u32*)(glob_8003E8A8 + 0x204);
    *(u32*)(glob_8003E8A8 + 0x204) = (reg & ~0x00080000) | shifted;

    *(vu8*)0xCC008000 = 0x61;
    *(vu32*)0xCC008000 = 0xFE080000;

    *(vu8*)0xCC008000 = 0x61;
    *(vu32*)0xCC008000 = *(u32*)(glob_8003E8A8 + 0x204);
}

void func_8001F0F8(u32 arg) {
    s32 shifted;
    u32 reg;
    u32 val;
    *(u32*)(glob_8003E8A8 + 0x1E8) = 0;
    shifted = (s32)((arg << 1) & 0x0000FFFE) >> 5;
    reg = *(u32*)(glob_8003E8A8 + 0x1E8);
    *(u32*)(glob_8003E8A8 + 0x1E8) = (reg & 0xFFFFFC00) | (u32)shifted;

    val = *(u32*)(glob_8003E8A8 + 0x1E8);
    *(u32*)(glob_8003E8A8 + 0x1E8) = (val & 0x00FFFFFF) | 0x4D000000;
}

void func_800208A4(u32* ptr, u32 addr, u32 val) {
    *ptr = 0;
    *ptr = (*ptr & 0xFFFFFC00) | ((addr - 0x80000) >> 9);
    *ptr = (*ptr & 0xFFE003FF) | (val << 10);
    *ptr = (*ptr & 0x00FFFFFF) | 0x65000000;
}

void func_8002266C(u32 arg1, u32 arg2) {
    u32 x;
    u32 y;
    u32 cmd;
    x = (arg1 + 0x156) >> 1;
    y = (arg2 + 0x156) >> 1;
    cmd = (x & 0xFFF003FF) | (y << 10);
    cmd = (cmd & 0x00FFFFFF) | 0x59000000;

    *(vu8*)0xCC008000 = 0x61;
    *(vu32*)0xCC008000 = cmd;
    *(u16*)(glob_8003E8A8 + 2) = 0;
}
