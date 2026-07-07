#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80120908();
M2C_UNK fn_80120BBC(void *, int);

void fn_80307618(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    fn_80120908();
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    fn_80120BBC(arg0, 0x23);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
