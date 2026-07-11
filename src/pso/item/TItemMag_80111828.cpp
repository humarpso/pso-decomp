#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_stat_flags__8TItemMagFi(s32 arg0);
s16 fn_80113DA0(s32);
s16 fn_80113DC4(s32);
s16 fn_80113DE8();
M2C_UNK fn_80113E0C(s32);

s32 get_max_stat_flags__8TItemMagFi(s32 arg0) {
    s32 var_r31;
    s16 temp_r30;
    s16 temp_r29;
    s16 temp_r28;
    s16 var_r0;
    s32 var_r4;

    var_r31 = 0;
    temp_r30 = fn_80113DE8();
    temp_r29 = fn_80113DC4(arg0);
    temp_r28 = fn_80113DA0(arg0);
    fn_80113E0C(arg0);
    if ((temp_r29 < temp_r30) && (temp_r28 < temp_r30)) {
        var_r31 |= 8;
    }
    if ((temp_r30 < temp_r29) && (temp_r28 < temp_r29)) {
        var_r31 |= 0x10;
    }
    if ((temp_r29 < temp_r28) && (temp_r30 < temp_r28)) {
        var_r31 |= 0x20;
    }
    var_r0 = temp_r29;
    var_r4 = 0;
    if (temp_r30 > temp_r29) {
        var_r0 = temp_r30;
    }
    if (var_r0 > temp_r28) {
        var_r0 = temp_r29;
        if (temp_r30 > temp_r29) {
            var_r0 = temp_r30;
        }
    } else {
        var_r0 = temp_r28;
    }
    {
        s32 max32 = var_r0;
        if (temp_r30 == max32) {
            var_r4 = 1;
        }
        if (temp_r29 == max32) {
            var_r4 += 1;
        }
        if (temp_r28 == max32) {
            var_r4 += 1;
        }
    }
    if (var_r4 >= 2) {
        var_r31 |= 0x100;
    }
    return var_r31;
}

}
