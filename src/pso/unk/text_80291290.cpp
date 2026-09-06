#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_801423A4(int, void *, int);
extern const f32 lbl_805DD974;
extern const f32 lbl_805DD97C;
extern const f32 lbl_805DD980;
extern const f32 lbl_805DD984;
extern const f32 lbl_805DD988;
extern const f32 lbl_805DD98C;
void fn_802912C4(u8 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
}

extern "C" {

void fn_802912C4(u8 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    temp_f0 = farg0 - M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f0 > lbl_805DD97C) {
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x88) + lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x88) = temp_f0_2;
        if (temp_f0_2 > lbl_805DD97C) {
            M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805DD97C;
        }
    } else if (temp_f0 > lbl_805DD984) {
        temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x88) - lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x88) = temp_f0_3;
        if (temp_f0_3 < lbl_805DD984) {
            M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805DD984;
        }
    } else if (temp_f0 < lbl_805DD988) {
        temp_f0_4 = M2C_FIELD(arg0, f32 *, 0x88) - lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x88) = temp_f0_4;
        if (temp_f0_4 < lbl_805DD988) {
            M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805DD988;
        }
    } else if (temp_f0 < lbl_805DD98C) {
        temp_f0_5 = M2C_FIELD(arg0, f32 *, 0x88) + lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x88) = temp_f0_5;
        if (temp_f0_5 > lbl_805DD98C) {
            M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805DD98C;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805DD974;
    }
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + M2C_FIELD(arg0, f32 *, 0x88));
    temp_f0_6 = farg1 - M2C_FIELD(arg0, f32 *, 0x4C);
    if (temp_f0_6 > lbl_805DD97C) {
        temp_f0_7 = M2C_FIELD(arg0, f32 *, 0x8C) + lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x8C) = temp_f0_7;
        if (temp_f0_7 > lbl_805DD97C) {
            M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DD97C;
        }
    } else if (temp_f0_6 > lbl_805DD984) {
        temp_f0_8 = M2C_FIELD(arg0, f32 *, 0x8C) - lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x8C) = temp_f0_8;
        if (temp_f0_8 < lbl_805DD984) {
            M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DD984;
        }
    } else if (temp_f0_6 < lbl_805DD988) {
        temp_f0_9 = M2C_FIELD(arg0, f32 *, 0x8C) - lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x8C) = temp_f0_9;
        if (temp_f0_9 < lbl_805DD988) {
            M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DD988;
        }
    } else if (temp_f0_6 < lbl_805DD98C) {
        temp_f0_10 = M2C_FIELD(arg0, f32 *, 0x8C) + lbl_805DD980;
        M2C_FIELD(arg0, f32 *, 0x8C) = temp_f0_10;
        if (temp_f0_10 > lbl_805DD98C) {
            M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DD98C;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DD974;
    }
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + M2C_FIELD(arg0, f32 *, 0x8C));
    M2C_FIELD(arg0, s32 *, 0x74) = TObjPlayer__sub_801423A4((int) (M2C_FIELD(arg0, s32 *, 0x74)), (void *) (arg2), (int) (0xC0));
    M2C_FIELD(arg0, s32 *, 0x70) = TObjPlayer__sub_801423A4((int) (M2C_FIELD(arg0, s32 *, 0x70)), (void *) (arg1), (int) (0xC0));
}

}
