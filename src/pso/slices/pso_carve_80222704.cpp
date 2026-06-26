#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8039DCE0(s32, s32);
s32 strlen(s32);

void fn_80222704(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = strlen(arg1);
    fn_8039DCE0(M2C_FIELD(arg0, s32 *, 0x208), arg1);
    M2C_FIELD(arg0, s32 *, 0x208) = (s32) (M2C_FIELD(arg0, s32 *, 0x208) + temp_r31);
}

}
