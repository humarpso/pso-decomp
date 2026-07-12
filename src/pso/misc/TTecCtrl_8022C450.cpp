#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 classify_distance_band__8TTecCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
f32 TTecCtrl__sub_8022C5CC(s32, s32);
M2C_UNK TTecCtrl__sub_8022DBC4();

extern f32 lbl_805DC7D0;
extern f32 lbl_805DC7D4;

s32 classify_distance_band__8TTecCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;

    TTecCtrl__sub_8022DBC4();
    if ((arg1 == 0) || (arg1 == 1)) {
        return 0;
    }
    temp_f1 = TTecCtrl__sub_8022C5CC(arg0, arg2);
    if (temp_f1 < lbl_805DC7D0) {
        return 1;
    }
    if (temp_f1 < lbl_805DC7D4) {
        return 2;
    }
    return 3;
}

}
