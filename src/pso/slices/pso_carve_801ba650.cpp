#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011E238(void *, M2C_UNK);
s32 fn_801C00E4(s32);

void fn_801BA650(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x32A) = (s16) M2C_FIELD(arg0, s16 *, 0x326);
    M2C_FIELD(arg0, s16 *, 0x326) = arg1;
    if (fn_801C00E4(arg2) == 0) {
        M2C_FIELD(arg0, s16 *, 0xB8) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x320) = (s32) (1 << arg1);
    fn_8011E238(arg0, 0x10);
}

}
