#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_ready__22TAdMultiPlyChrSelectGCFv(void);
s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void);
s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_80299454();
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6920();

s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void) {
    if (TAdMultiPlyChrSelectGC__sub_80299454() != 0) {
        if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
            return TAdMultiPlyChrSelectGC__sub_802C6920();
        }
        return 0;
    }
    return 0;
}

s32 count_ready__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    var_r30 = 0;
    do {
        if (TAdMultiPlyChrSelectGC__sub_802C6848(var_r30) != 0) {
            var_r31 += 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

extern s32 TAdMultiPlyChrSelectGC__data_805D67D8;

s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void) {
    if (((s32) TAdMultiPlyChrSelectGC__data_805D67D8 < 0) || ((s32) TAdMultiPlyChrSelectGC__data_805D67D8 > 3)) {
        TAdMultiPlyChrSelectGC__data_805D67D8 = 0;
    }
    return TAdMultiPlyChrSelectGC__data_805D67D8;
}

s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C6848(var_r31) != 0) && (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) == 0)) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 3;
    }
    goto loop_1;
}

}
