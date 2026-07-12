#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_stats__10TObjPlayerFiPv(s32 arg0, void *arg1);
s32 TObjPlayer__sub_801AF288();
M2C_UNK TObjPlayer__sub_801BE2E8(s32);
M2C_UNK TObjPlayer__sub_801BE310(s32);
M2C_UNK TObjPlayer__sub_801BE338(s32);
M2C_UNK TObjPlayer__sub_801BE360(s32);
void *fn_8007EAF8();
M2C_UNK TObjPlayer__sub_801AFDB0(s32);
s32 TObjPlayer__sub_801D91F8(s32, s32);
void *TObjPlayer__sub_801D9390();

void clamp_stats__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s16 temp_r0_5;
    s16 temp_r0_6;
    s16 temp_r0_7;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r3_4;
    s16 temp_r3_5;
    s16 temp_r3_6;
    s16 temp_r3_7;
    s16 temp_r4;
    s32 temp_r27;
    s32 temp_r28_2;
    s32 temp_r28_3;
    s32 temp_r3_8;
    s32 temp_r4_2;
    void *temp_r28;
    void *temp_r31;

    temp_r31 = fn_8007EAF8();
    TObjPlayer__sub_801AFDB0(arg0);
    temp_r28 = TObjPlayer__sub_801D9390();
    temp_r4 = M2C_FIELD(temp_r31, s16 *, 0);
    if (temp_r4 < 0) {
        M2C_FIELD(arg1, s16 *, 0) = 1;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        temp_r0 = M2C_FIELD(temp_r28, s16 *, 0);
        if (temp_r4 > temp_r0) {
            M2C_FIELD(arg1, s16 *, 0) = temp_r0;
            TObjPlayer__sub_801BE360(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0) = temp_r4;
        }
    }
    temp_r3 = M2C_FIELD(temp_r31, s16 *, 2);
    if (temp_r3 < 0) {
        M2C_FIELD(arg1, s16 *, 2) = 1;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        temp_r0_2 = M2C_FIELD(temp_r28, s16 *, 2);
        if (temp_r3 > temp_r0_2) {
            M2C_FIELD(arg1, s16 *, 2) = temp_r0_2;
            TObjPlayer__sub_801BE360(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 2) = temp_r3;
        }
    }
    temp_r3_2 = M2C_FIELD(temp_r31, s16 *, 4);
    if (temp_r3_2 < 0) {
        M2C_FIELD(arg1, s16 *, 4) = 1;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        temp_r0_3 = M2C_FIELD(temp_r28, s16 *, 4);
        if (temp_r3_2 > temp_r0_3) {
            M2C_FIELD(arg1, s16 *, 4) = temp_r0_3;
            TObjPlayer__sub_801BE360(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 4) = temp_r3_2;
        }
    }
    if (M2C_FIELD(temp_r31, s16 *, 6) < 0) {
        M2C_FIELD(arg1, s16 *, 6) = 1;
        TObjPlayer__sub_801BE360(arg0);
    }
    temp_r3_3 = M2C_FIELD(temp_r31, s16 *, 6);
    temp_r0_4 = M2C_FIELD(temp_r28, s16 *, 6);
    if (temp_r3_3 > temp_r0_4) {
        M2C_FIELD(arg1, s16 *, 6) = temp_r0_4;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        M2C_FIELD(arg1, s16 *, 6) = temp_r3_3;
    }
    temp_r3_4 = M2C_FIELD(temp_r31, s16 *, 8);
    if (temp_r3_4 < 0) {
        M2C_FIELD(arg1, s16 *, 8) = 1;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        temp_r0_5 = M2C_FIELD(temp_r28, s16 *, 8);
        if (temp_r3_4 > temp_r0_5) {
            M2C_FIELD(arg1, s16 *, 8) = temp_r0_5;
            TObjPlayer__sub_801BE360(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 8) = temp_r3_4;
        }
    }
    temp_r3_5 = M2C_FIELD(temp_r31, s16 *, 0xA);
    if (temp_r3_5 < 0) {
        M2C_FIELD(arg1, s16 *, 0xA) = 1;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        temp_r0_6 = M2C_FIELD(temp_r28, s16 *, 0xA);
        if (temp_r3_5 > temp_r0_6) {
            M2C_FIELD(arg1, s16 *, 0xA) = temp_r0_6;
            TObjPlayer__sub_801BE360(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0xA) = temp_r3_5;
        }
    }
    temp_r3_6 = M2C_FIELD(temp_r31, s16 *, 0xC);
    if (temp_r3_6 < 0) {
        M2C_FIELD(arg1, s16 *, 0xC) = 1;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        temp_r0_7 = M2C_FIELD(temp_r28, s16 *, 0xC);
        if (temp_r3_6 > temp_r0_7) {
            M2C_FIELD(arg1, s16 *, 0xC) = temp_r0_7;
            TObjPlayer__sub_801BE360(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0xC) = temp_r3_6;
        }
    }
    temp_r3_7 = M2C_FIELD(temp_r31, s16 *, 0xE);
    if (temp_r3_7 < 0) {
        M2C_FIELD(arg1, s16 *, 0xE) = 1;
        TObjPlayer__sub_801BE360(arg0);
    } else {
        M2C_FIELD(arg1, s16 *, 0xE) = temp_r3_7;
    }
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(temp_r31, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(temp_r31, f32 *, 0x14);
    temp_r28_2 = M2C_FIELD(temp_r31, s32 *, 0x18);
    temp_r27 = TObjPlayer__sub_801AF288();
    if (temp_r28_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x18) = 0;
        TObjPlayer__sub_801BE338(arg0);
    } else if (temp_r28_2 > temp_r27) {
        M2C_FIELD(arg1, s32 *, 0x18) = temp_r27;
        TObjPlayer__sub_801BE338(arg0);
    } else {
        M2C_FIELD(arg1, s32 *, 0x18) = temp_r28_2;
    }
    temp_r28_2 = M2C_FIELD(temp_r31, s32 *, 0x1C);
    temp_r3_8 = TObjPlayer__sub_801D91F8(TObjPlayer__sub_801AFDB0(arg0), temp_r27);
    if (temp_r28_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x1C) = 0;
        TObjPlayer__sub_801BE310(arg0);
    } else if (temp_r28_2 > temp_r3_8) {
        M2C_FIELD(arg1, s32 *, 0x1C) = temp_r3_8;
        TObjPlayer__sub_801BE310(arg0);
    } else {
        M2C_FIELD(arg1, s32 *, 0x1C) = temp_r28_2;
    }
    temp_r4_2 = M2C_FIELD(temp_r31, s32 *, 0x20);
    if (temp_r4_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x20) = 0;
        TObjPlayer__sub_801BE2E8(arg0);
        return;
    }
    if (temp_r4_2 > 0xF423F) {
        M2C_FIELD(arg1, s32 *, 0x20) = 0xF423F;
        TObjPlayer__sub_801BE2E8(arg0);
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x20) = temp_r4_2;
}

}
