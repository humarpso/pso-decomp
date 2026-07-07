#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80010128(void *, M2C_UNK);
M2C_UNK fn_800192DC(void *);
s32 fn_800194AC(void *, M2C_UNK, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);

s32 fn_80016E9C(u8 *arg0) {
    s32 temp_ret;

    if (obj_testFlags30(arg0, 0x10) != 0) {
        temp_ret = fn_800194AC(arg0, 1, -1);
        if (temp_ret > 0) {
            obj_clearFlags30(arg0, 0x3C);
            obj_setFlags30(arg0, 0x10);
            if ((temp_ret % 45) == 0) {
                fn_80010128(arg0, 1);
            }
            return 1;
        }
        obj_clearFlags30(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        fn_800192DC(arg0 + 0x260);
        goto block_6;
    }
block_6:
    return 0;
}

}
