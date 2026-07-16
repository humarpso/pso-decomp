#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe7Berura__sub_80094FD8(s32 arg0, u8 *arg1);
M2C_UNK TObjEneRe7Berura__sub_8009503C(void *, int);
M2C_UNK TObjPlayer__sub_803D97F0(void *, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B78();

extern M2C_UNK lbl_8058D490[];
extern s32 lbl_805D4F90;
extern s32 lbl_805D4F94;
extern s32 TObjEneRe7Berura__data_805D4F98;
extern s32 lbl_805D4F9C;

void TObjEneRe7Berura__sub_80094FD8(s32 arg0, u8 *arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    TObjEneRe7Berura__data_805D4F98 = temp_r6;
    temp_r5 = M2C_FIELD(arg1, s32 *, 4);
    lbl_805D4F90 = temp_r5;
    temp_r4 = M2C_FIELD(arg1, s32 *, 8);
    lbl_805D4F94 = temp_r4;
    lbl_805D4F9C = (long) (arg1 + 0x58);
    TObjPlayer__sub_803D97F0((void *) (lbl_8058D490), (int) (temp_r4), (int) (temp_r5), (int) (temp_r6));
    TObjEneRe7Berura__sub_8009503C((void *) (arg0), (int) (0));
    TObjPlayer__sub_803D9B78();
}

}
