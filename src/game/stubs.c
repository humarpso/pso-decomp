#include "types.h"

extern u32 glob_8003EAE0;
extern u32 glob_8003EB08;
extern u32 glob_8003EC5C;
extern u32 glob_8003ECCC;
extern u32 glob_8003ECD8;
extern u32 glob_8003ECDC;
extern u32 glob_8003ECF0;
extern f32 glob_8003ECF4;
extern f32 glob_8003ECF8;
extern u8  glob_8003ED00;

void func_800221DC(void) {
}

void func_80024478(void) {
}

void func_800296E4(void) {
}

void func_80031EC0(void) {
}

void func_80031EC4(void) {
}

void func_80031EE0(void) {
}

void func_80031EE4(void) {
}

void func_80031EF8(void) {
}

void func_80031EFC(void) {
}

void func_800291F0(void) {
}

void func_80036A88(void) {
}

void func_800385D4(void) {
}

s32 func_80016968(void) {
    return 3;
}

s32 func_80018C40(void) {
    return 29;
}

s32 func_800191B4(void) {
    return 0;
}

s32 func_8001A6FC(void) {
    return 0;
}

s32 func_800240AC(void) {
    return 0;
}

s32 func_800276C0(void) {
    return 0;
}

s32 func_800276C8(void) {
    return 0;
}

s32 func_800276D0(void) {
    return 0;
}

s32 func_80029610(void) {
    return 84;
}

s32 func_8002BBEC(void) {
    return -1;
}

s32 func_80030010(void) {
    return 1;
}

s32 func_80030018(void) {
    return -1;
}

s32 func_80031EC8(void) {
    return 0;
}

s32 func_80031ED0(void) {
    return 0;
}

s32 func_80031ED8(void) {
    return 0;
}

s32 func_80031EE8(void) {
    return 1;
}

s32 func_80031EF0(void) {
    return 0;
}

s32 func_80033D98(void) {
    return 0;
}

s32 func_80035F30(void) {
    return 0;
}

s32 func_80036CB4(void) {
    return 0;
}

u32 func_8001A694(void) {
    return glob_8003EB08;
}

void func_80035930(u32 val) {
    glob_8003EC5C = val;
}

void func_800380DC(u32 val) {
    glob_8003ECCC = val;
}

void func_80038404(u32 val) {
    glob_8003ECF0 = val;
}

void func_800104A4(void* ptr) {
    *(u32*)ptr = 0;
}

extern u32 glob_8003EA08;
void func_80012DA0(void) {
    glob_8003EA08 = 1;
}

u32 func_80010BA8(u32 a, u32 b) {
    return b;
}

void func_80012FE8(u32 val, u32* ptr) {
    ptr[2] = val;
}

s32 func_80016934(u32 a, u32 b) {
    glob_8003EAE0 = b;
    return 2;
}

u32 func_8001872C(void) {
    return 0x80000000;
}

void func_8001D4E8(u32* ptr, u32 a, u32 b) {
    ptr[3] = a;
    ptr[4] = b;
}

u32 func_80020580(u32* ptr) {
    return ptr[5];
}

asm u32 func_800278A4(void) {
#include "orig_asm/game/stubs/func_800278A4.inc"
}

asm void func_800278AC(register u32 val) {
#include "orig_asm/game/stubs/func_800278AC.inc"
}

void func_800375B8(u32 val) {
    glob_8003ECDC = val;
    glob_8003ECD8 = val;
}

void func_800383B8(void) {
    glob_8003ED00 = 1;
}

void func_800383F8(f32 a, f32 b) {
    glob_8003ECF8 = a;
    glob_8003ECF4 = b;
}
