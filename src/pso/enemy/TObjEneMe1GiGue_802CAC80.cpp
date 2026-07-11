#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneMe1GiGue__sub_802CAC80(void);
s32 TObjEneMe1GiGue__sub_802CAC88(s32 arg0, s32 arg1);

    extern int TObjEneMe1GiGue__data_805D6838;
int TObjEneMe1GiGue__sub_802CAC80(void) {  return TObjEneMe1GiGue__data_805D6838; }

s32 *csnVectorUnder(s32, s32, M2C_UNK, s32);

s32 TObjEneMe1GiGue__sub_802CAC88(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = csnVectorUnder(arg1, arg0 + 0x120, 5, arg0);
    if (temp_r3 == NULL) {
        return 0;
    }
    return (u32)__cntlzw(*temp_r3 & 4) >> 5;
}

}
