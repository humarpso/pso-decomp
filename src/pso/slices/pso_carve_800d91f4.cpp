#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjBoss2Tunnel__sub_8007E4E0(void *, M2C_UNK *);
M2C_UNK fn_800869A4(M2C_UNK *, M2C_UNK, M2C_UNK, s32);

void fn_800D91F4(void *arg0, s32 arg1) {
    M2C_UNK sp8;

    TObjBoss2Tunnel__sub_8007E4E0(arg0, &sp8);
    fn_800869A4(&sp8, 0xE4, 0, arg1);
}

}
