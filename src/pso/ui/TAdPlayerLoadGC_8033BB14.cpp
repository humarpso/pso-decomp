#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_8033BB14(void *arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1F40(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_8033BA0C(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_8033BA84(M2C_UNK);
s32 fn_8033BAB4(void *);

s32 TAdPlayerLoadGC__sub_8033BB14(void *arg0) {
    s32 var_r31;

    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 4;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (TAdPlayerLoadGC__sub_801E1F40(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 8;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x28);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    var_r31 = fn_8033BAB4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        if (TAdSinglePlyChrSelectGC__sub_8033BA84(0) == 0) {
            var_r31 |= 0x10;
        }
    } else if (TAdSinglePlyChrSelectGC__sub_8033BA0C(0) == 0) {
        var_r31 |= 0x10;
    }
    return var_r31;
}

}
