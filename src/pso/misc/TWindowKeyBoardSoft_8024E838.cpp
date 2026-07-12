#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowKeyBoardSoft__sub_8024E838(void* p, f32 a, f32 b, f32 c, f32 d);
void TWindowKeyBoardSoft__sub_8024E84C(void *arg0);
void TWindowKeyBoardSoft__sub_8024E86C(void *arg0);
s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1);

void TWindowKeyBoardSoft__sub_8024E838(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x3c) = a; *(f32*)((char*)p + 0x40) = b; *(f32*)((char*)p + 0x44) = c; *(f32*)((char*)p + 0x48) = d; }

extern const f32 lbl_805DCC8C;

void TWindowKeyBoardSoft__sub_8024E84C(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) - lbl_805DCC8C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) - lbl_805DCC8C);
}

extern const f32 lbl_805DCC90;

void TWindowKeyBoardSoft__sub_8024E86C(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + lbl_805DCC90);
}

s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg0, f32 *, 0x3C)) || (M2C_FIELD(arg1, f32 *, 0xC) < M2C_FIELD(arg0, f32 *, 0x40)) || (M2C_FIELD(arg1, f32 *, 0) > M2C_FIELD(arg0, f32 *, 0x44)) || (M2C_FIELD(arg1, f32 *, 4) > M2C_FIELD(arg0, f32 *, 0x48))) {
        return 0;
    }
    return 1;
}

}
