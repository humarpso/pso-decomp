#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802E0CB0(void *, s32);
u32 fn_802E1168();
M2C_UNK fn_802E1178(u32, s32);

void fn_802E0C68(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x104) = arg1;
    fn_802E0CB0(arg0, M2C_FIELD(arg0, s32 *, 0x104));
    u32 temp_r3 = fn_802E1168();
    if (temp_r3 != 0U) {
        fn_802E1178(temp_r3, arg1);
    }
}

}
