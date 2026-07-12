#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_window_flags__11TWindowCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
u32 get_window__11TWindowCtrlFi();
M2C_UNK TWindowCtrlMain__sub_8024D87C(u32, s32, s32);

void set_window_flags__11TWindowCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;

    temp_r3 = get_window__11TWindowCtrlFi();
    if (temp_r3 != 0U) {
        TWindowCtrlMain__sub_8024D87C(temp_r3, arg1, arg2 | 0xE);
    }
}

}
