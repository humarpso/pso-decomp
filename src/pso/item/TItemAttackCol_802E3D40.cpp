#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemAttackCol__vt5(s32 arg0);

M2C_UNK VecCopy__FP3VecPC3Vec(M2C_UNK *, s32);
M2C_UNK fn_802E3D8C(s32, M2C_UNK *);
M2C_UNK TBoss4Zako__sub_803D8910(M2C_UNK *, s32);

void TItemAttackCol__vt5(s32 arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0xD0);
    TBoss4Zako__sub_803D8910(&sp8, arg0 + 0x24);
    fn_802E3D8C(arg0, &sp8);
}

}
