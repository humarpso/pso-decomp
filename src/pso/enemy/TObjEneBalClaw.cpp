#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjEneBalClaw__vt28(void);
void TObjEneBalClaw__vt57(void);
void TObjEneBalClaw__vt59(void);
void clear_attack_flag__18TObjEneBalClawClawFPv(void* p);
void TObjEneBalClawClaw__sub_8008DC14(void);

void TObjEneBalClaw__vt59(void) {  }
void TObjEneBalClaw__vt57(void) {  }
int TObjEneBalClaw__vt28(void) { return 0; }
void clear_attack_flag__18TObjEneBalClawClawFPv(void* p) { *(u32*)((char*)p + 0x388) &= 0xfffeffff; }
void TObjEneBalClawClaw__sub_8008DC14(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8008D5FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneBalClaw__vt34(s32 arg0);
s32 TObjEneBalClaw__vt37(s32 arg0);

s32 TObjPlayer__sub_80016D78();
M2C_UNK TObjEneBalClaw__sub_8008D5C0(s32);

s32 TObjEneBalClaw__vt37(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjEneBalClaw__sub_8008D5C0(arg0);
        return 1;
    }
    return 0;
}

s32 TObjPlayer__sub_80016FF8();
M2C_UNK TObjEneBalClaw__sub_8008D5C0(s32);

s32 TObjEneBalClaw__vt34(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjEneBalClaw__sub_8008D5C0(arg0);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008D818
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_claw_angle__14TObjEneBalClawFPv(void *arg0);

extern f32 lbl_805D9600;

void update_claw_angle__14TObjEneBalClawFPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFF9);
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x3B4);
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x3B0);
            if (temp_f1 < temp_f0) {
                M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (temp_f1 + lbl_805D9600);
                return;
            }
            M2C_FIELD(arg0, f32 *, 0x3B4) = temp_f0;
            temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 4);
            return;
        }
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3B4);
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if (temp_f1_2 > temp_f0_2) {
            M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (temp_f1_2 - lbl_805D9600);
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x3B4) = temp_f0_2;
        temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) | 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008D8EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_global_805D4F20__14TObjEneBalClawFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D4F20;

void release_global_805D4F20__14TObjEneBalClawFv(void) {
    if ((u32) lbl_805D4F20 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4F20, 1);
        lbl_805D4F20 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008DB04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TObjEneBalClawFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void TObjPlayer__sub_800A05B8(void *, int);

extern M2C_UNK __vt__14TObjEneBalClaw[];

void *__dt__14TObjEneBalClawFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneBalClaw;
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0x390, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
