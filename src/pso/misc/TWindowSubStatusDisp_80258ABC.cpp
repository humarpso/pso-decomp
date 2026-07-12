#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TObjPlayer__sub_80203418();
s32 TObjPlayer__sub_802034EC();
M2C_UNK TWindowSubStatusDisp__sub_8025823C(void *, s32);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, s32, s32);

extern const f32 lbl_805DCF08;

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x2D;
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    TWindowSubStatusDisp__sub_8025823C(arg0, arg2);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    if (arg2 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0xC5);
    } else if ((TObjPlayer__sub_802034EC() == 0) || (TObjPlayer__sub_80203418() != 0)) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
    } else {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        M2C_FIELD(arg0, s32 *, 0x2C) = -1;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
}

}
