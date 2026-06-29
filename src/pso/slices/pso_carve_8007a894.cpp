#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007A8F8(M2C_UNK);
u32 fn_8007B6D8(s32);

s32 fn_8007A894(u32 arg0) {
    s32 i;
    s32 acc;

    acc = fn_8007A8F8(0);
    for (i = 0; i < 0xD2; i++) {
        if (arg0 == fn_8007B6D8(acc)) {
            return acc;
        }
        acc += 0x100;
    }
    return 0;
}

}
