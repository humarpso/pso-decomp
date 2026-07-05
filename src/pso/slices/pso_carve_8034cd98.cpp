#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80269D24(M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);
extern M2C_UNK lbl_80478C2C[];

void fn_8034CD98(void *arg0) {
    M2C_UNK temp_r3;
    temp_r3 = fn_8026CBB8(0xA5);
    fn_80269D24(temp_r3, lbl_80478C2C, 1);
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
}

}
