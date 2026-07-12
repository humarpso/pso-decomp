#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800A14E4(void *arg0);
M2C_UNK TObjEneMe1GiGue__sub_80040B3C(void *, M2C_UNK);

void TObjPlayer__sub_800A14E4(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x800000)) {
        TObjEneMe1GiGue__sub_80040B3C(arg0, 6);
    }
}

}
