#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__21TWindowSubComCardListFv(u8 *arg0);
s32 fn_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK fn_80266620(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(s32, s32);
M2C_UNK fn_802752D8(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__21TWindowSubComCardListFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    fn_80266620(arg0, temp_r3);
    fn_802752D8(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x88), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        TWindowSubStatusDisp__sub_8026C800(M2C_FIELD(arg0, s32 *, 0x8C), temp_r3);
    }
}

}
