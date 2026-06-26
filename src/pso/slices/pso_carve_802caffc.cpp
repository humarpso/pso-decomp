#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019478(s32);
f32 fn_800194A4(s32);

void TObjEneMe1GiGue__sub_802CAFFC(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x438) = fn_800194A4(M2C_FIELD(arg0, s32 *, 0x318));
    M2C_FIELD(arg0, s32 *, 0x434) = fn_80019478(M2C_FIELD(arg0, s32 *, 0x318));
}

}
