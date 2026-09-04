#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__21TWindowSubAreaMapDispFv(void *arg0);
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK fn_80271848(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80271A6C(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__21TWindowSubAreaMapDispFv(void *arg0) {
    s32 temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x70), temp_r3);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        TWindowSubStatusDisp__sub_80271A6C(arg0, temp_r3);
        fn_80271848(arg0, temp_r3);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802717B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_visibility__21TWindowSubAreaMapDispFPv(void *arg0);
M2C_UNK TRaderMapCore__sub_801F9144();
M2C_UNK TRaderMapCore__sub_801F9770();
M2C_UNK clear__13TRaderMapCoreFv();
M2C_UNK clear_active_flag__11TWindowCtrlFv();
s32 TWindowSubAreaMapDisp__sub_80246948();
M2C_UNK set_flag_bit0__11TWindowCtrlFv();

extern f32 lbl_805DD480;

void update_visibility__21TWindowSubAreaMapDispFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
            M2C_FIELD(arg0, s32 *, 0x6C) = 0;
            clear_active_flag__11TWindowCtrlFv();
            clear__13TRaderMapCoreFv();
        }
    } else if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2) && (TWindowSubAreaMapDisp__sub_80246948() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 1;
        TRaderMapCore__sub_801F9770();
        TRaderMapCore__sub_801F9144();
        set_flag_bit0__11TWindowCtrlFv();
        {
            f32 c = lbl_805DD480;
            M2C_FIELD(arg0, f32 *, 0x60) = c;
            M2C_FIELD(arg0, f32 *, 0x64) = c;
            M2C_FIELD(arg0, f32 *, 0x68) = c;
        }
    }
}

}
#endif
#endif
