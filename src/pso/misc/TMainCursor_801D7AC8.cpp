#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TMainCursor__sub_801D7AC8(s32 arg0, void *arg1, s16 arg2, s32 arg3, s32 arg4);
u8 TMainCursor__sub_8013DF44(s32);
s32 TMainCursor__sub_8013DF5C(s32, u8, u8);
s32 TObjPlayer__sub_801D84F0(s32);
s32 TWindowActionPalette__sub_801C1C68(s32, s32);

s32 TMainCursor__sub_801D7AC8(s32 arg0, void *arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 var_r30;
    s32 var_r29;
    u32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x424);
        if (temp_r3 != 0U) {
            temp_r31 = temp_r3 + 0x520;
            if (TObjPlayer__sub_801D84F0(temp_r31) != 0) {
                if (TMainCursor__sub_8013DF44(temp_r31) == 1) {
                    if (arg2 == (s32) TMainCursor__sub_8013DF44(temp_r31)) {
                        return 0;
                    }
                    goto block_8;
                }
                if (TMainCursor__sub_8013DF5C(temp_r31, (u8) arg2, (u8) arg3) != 0) {
                    return 0;
                }
                goto block_8;
            }
        }
    }
block_8:
    var_r29 = TWindowActionPalette__sub_801C1C68(arg0, arg4);
    var_r30 = 0;
loop_9:
    if (TMainCursor__sub_8013DF44(var_r29) == 1) {
        if (arg2 == (s32) TMainCursor__sub_8013DF44(var_r29)) {
            return var_r30;
        }
        goto block_14;
    }
    if (TMainCursor__sub_8013DF5C(var_r29, (u8) arg2, (u8) arg3) != 0) {
        return var_r30;
    }
block_14:
    var_r30 += 1;
    var_r29 += 4;
    if (var_r30 >= 4) {
        return -1;
    }
    goto loop_9;
}

}
