#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80102E68(M2C_UNK *, M2C_UNK *);

void fn_802231A0(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK sp8[8];

    fn_80102E68(sp8, arg0);
    fn_80102E68(arg0, arg1);
    fn_80102E68(arg1, sp8);
}

}
