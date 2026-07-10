#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_message_by_type__11TWindowCtrlFci(s8 arg0, s32 arg1);
void release_slot__11TWindowCtrlFPv(s8 *arg0);
s32 get_window__11TWindowCtrlFi(s32);
s32 fn_8024D92C();
s32 fn_8024D960(s32);
s32 fn_8026CBB8(s32);

s32 get_message_by_type__11TWindowCtrlFci(s8 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = get_window__11TWindowCtrlFi(arg1);
    if (temp_r3 == 0) {
        return 0;
    }
    if (fn_8024D92C() != 0) {
        var_r3 = 0x4D;
    } else if (fn_8024D960(temp_r3) != 0) {
        var_r3 = 0x48;
    } else {
        var_r3 = 0x43;
    }
    return fn_8026CBB8(var_r3 + arg0);
}

extern void *lbl_805D63F8;

void release_slot__11TWindowCtrlFPv(s8 *arg0) {
    s8 temp_r4;

    if ((void *) lbl_805D63F8 != NULL) {
        temp_r4 = *arg0;
        if ((temp_r4 >= 0) && (temp_r4 < 4)) {
            M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) & ~(0x40 << temp_r4));
            *arg0 = -1;
        }
    }
}

}
