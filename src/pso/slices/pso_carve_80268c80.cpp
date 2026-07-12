#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK draw_setting__20TWindowChoiceSettingFPvi(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void fn_80268C80(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_setting__20TWindowChoiceSettingFPvi(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x78), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x7C), temp_r3, arg0 + 0x68);
    }
}

}
