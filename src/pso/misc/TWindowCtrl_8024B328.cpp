#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TWindowCtrl__sub_8024A800(s32, u16, s32, s32);
void open__15TWindowFukidasiFPvPvi(void *, void *, s32);
extern u32 TWindowCtrl__data_805D63F8;
s32 TWindowCtrl__sub_8024B4E8(u16 arg0, u8 *arg1, s32 arg2, s32 arg3);
}

extern "C" {

s32 TWindowCtrl__sub_8024B4E8(u16 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    if ((u32) TWindowCtrl__data_805D63F8 == 0U) {
        return 0;
    }
    temp_r3 = TWindowCtrl__sub_8024A800((s32) TWindowCtrl__data_805D63F8, arg0, arg2, arg3);
    if (temp_r3 == 0) {
        return 0;
    }
    open__15TWindowFukidasiFPvPvi((void *) temp_r3, arg1, arg2);
    return temp_r3;
}

}
