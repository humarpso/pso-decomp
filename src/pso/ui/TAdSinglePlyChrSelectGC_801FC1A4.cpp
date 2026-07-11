#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TAdSinglePlyChrSelectGC__sub_801FC1A4(void *arg0);
s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 fn_801049C8(s32, s32);
s32 fn_80211574(s32);

u8 TAdSinglePlyChrSelectGC__sub_801FC1A4(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x248) >= 0xC8);
}

s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = arg0 + 0x250;
    var_r30 = 0;
loop_1:
    if ((fn_80211574(var_r31) == 0) && (fn_801049C8(arg1, var_r31) != 0)) {
        return 1;
    }
    var_r30 += 1;
    var_r31 += 0x18;
    if (var_r30 >= 0xC8) {
        return 0;
    }
    goto loop_1;
}

}
