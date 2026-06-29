#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1530(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1F40(M2C_UNK);
s32 fn_801FF310();
s32 fn_801FF384();
s32 fn_801FF3F4();
s32 fn_802E14B8();
s32 fn_802E14F0();
s32 fn_802E1528();
s32 fn_802E1560();
s32 fn_802E1594();
s32 fn_802E15C8();
M2C_UNK fn_802E1F14(void *);

s32 fn_802E1638(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r31_2;
    s32 var_r3;

    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        fn_802E1F14(arg0);
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        temp_r3 = TAdPlayerLoadGC__sub_801E1530(0);
        switch (temp_r3) {
        case -125:
            return 4;
        case -127:
            return 8;
        case -223:
            return 0x10;
        default:
            return 0x20;
        }
    } else {
        if (TAdPlayerLoadGC__sub_801E1F40(0) != 0) {
            return 0x40;
        }
        if (fn_802E1528() != 0) {
            return 0x80;
        }
        var_r31_2 = 0;
        if (fn_802E14F0() != 0) {
            var_r31_2 |= 0x100;
        }
        if (fn_802E14B8() != 0) {
            var_r31_2 |= 0x200;
        }
        if (var_r31_2 != 0) {
            return var_r31_2;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == -1) {
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
            if (fn_801FF310() != 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = 1;
            }
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 1) {
            return 0x80;
        }
        if (fn_802E15C8() != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == -1) {
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                if (fn_801FF384() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                }
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == -1) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                if (fn_801FF3F4() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                }
            }
            var_r3 = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 1) {
                var_r3 |= 0x100;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                var_r3 |= 0x200;
            }
            if (var_r3 != 0) {
                return var_r3;
            }
            goto block_43;
        }
block_43:
        var_r31 = 0;
        if (fn_802E15C8() == 0) {
            var_r31 |= 0x400;
        }
        if (fn_802E1594() == 0) {
            var_r31 |= 0x800;
        }
        if (fn_802E1560() == 0) {
            var_r31 |= 0x1000;
        }
        return var_r31;
    }
}

}
