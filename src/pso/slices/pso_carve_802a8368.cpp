#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 fn_802A82DC();
M2C_UNK TObjPlayer__sub_802A8448(s32, s32, s32, s32);
M2C_UNK TObjPlayer__sub_802A85F0(s32, s32, s32, s32);
extern M2C_UNK lbl_80540B10[];

void fn_802A8368(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r3;

    temp_r3 = (s32)(s8) fn_802A82DC();
    if ((temp_r3 != -1) && ((u32) lbl_80540B10[temp_r3] != 0U)) {
        if (arg3 != 0) {
            TObjPlayer__sub_802A85F0(lbl_80540B10[temp_r3], arg4, arg1, arg2);
            return;
        }
        TObjPlayer__sub_802A8448(lbl_80540B10[temp_r3], arg1, arg2, arg5);
    }
}

}
