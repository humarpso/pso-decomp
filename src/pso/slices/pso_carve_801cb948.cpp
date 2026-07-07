#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801B95C8(void *);
M2C_UNK fn_801BA650(void *, M2C_UNK, s32);
s32 TObjPlayer__sub_801BE4DC(void *);
M2C_UNK fn_801D0BC0(void *, s16, M2C_UNK);
s16 ret_801D26AC();

void fn_801CB948(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xA;
    fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    obj_clearFlags30(arg0, 0x10000);
    TObjPlayer__sub_801B95C8(arg0);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    fn_801BA650(arg0, 0xA, TObjPlayer__sub_801BE4DC(arg0));
}

}
