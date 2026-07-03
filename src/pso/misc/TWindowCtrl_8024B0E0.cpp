#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowCtrl__sub_8024B0E0(s8 arg0, s32 arg1);
s32 TWindowCtrl__sub_8024C5FC(s32);
s32 fn_8024D92C();
s32 fn_8024D960(s32);
s32 fn_8026CBB8(s32);

s32 TWindowCtrl__sub_8024B0E0(s8 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = TWindowCtrl__sub_8024C5FC(arg1);
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
}

}
