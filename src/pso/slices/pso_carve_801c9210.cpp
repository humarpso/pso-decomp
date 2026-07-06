#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248(void *);
M2C_UNK fn_800194AC(void *, M2C_UNK, s32);
s32 TItemMag__sub_80113E8C();
s32 fn_801A5A40(void *);

void fn_801C9210(u8 *arg0) {
    if ((TItemMag__sub_80113E8C() == 0) && (fn_80019248(arg0) != 0) && (fn_801A5A40(arg0 + 0x64C) != 0)) {
        fn_800194AC(arg0, 1, M2C_FIELD(arg0, s32 *, 0x3D4));
    }
}

}
