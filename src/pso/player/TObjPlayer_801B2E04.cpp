#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__vt76(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_801C0970(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801C0984(M2C_UNK *);

s32 obj_isState2_324();
M2C_UNK obj_copyVec2_0(M2C_UNK *, s32);
s16 obj_getField1c(s32);

void TObjPlayer__vt76(s32 arg0, s32 arg1) {
    M2C_UNK spC;
    M2C_UNK sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TObjPlayer__sub_801C0970(&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        obj_copyVec2_0(&spC, arg1);
        TObjPlayer__sub_801C0984(&sp8);
    }
}

}
