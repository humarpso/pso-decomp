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
