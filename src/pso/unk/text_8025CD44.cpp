#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TWindowKeyBoardBase__sub_8008102C(void *, u32, u32);
extern const f32 lbl_805DD038;
extern const f32 lbl_805DD03C;
extern const f32 lbl_805DD040;
extern const f32 lbl_805DD044;
extern const f32 lbl_805DD048;
void TWindowSubStatusDisp__sub_8025CD44(u8 *arg0, u32 arg1, u32 arg2);
}

extern "C" {

void TWindowSubStatusDisp__sub_8025CD44(u8 *arg0, u32 arg1, u32 arg2) {
    if (arg2 == 0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DD038;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DD03C;
    } else {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DD040 + (lbl_805DD044 + (f32) arg1));
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD048 + (f32) (arg2 * 0x14));
    }
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    TWindowKeyBoardBase__sub_8008102C(arg0 + 0x6C, arg1, arg2);
    M2C_FIELD(arg0, u8 **, 0x68) = (unsigned char *) ((void *) (arg0 + 0x6C));
    M2C_FIELD(arg0, s16 *, 0x60) = 0;
}

}
