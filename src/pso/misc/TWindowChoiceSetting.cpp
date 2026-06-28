#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowChoiceSetting__sub_80268AD8(void *arg0, s32 arg1);
s32 TWindowSubComCard__sub_80249604(void *);
u16 *TWindowSubStatusDisp__sub_80223B88(void *, s16);
M2C_UNK fn_8024503C(s32, u16 *, s32);

void TWindowChoiceSetting__sub_80268AD8(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80223B88(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if (*temp_r3 & 1) {
        fn_8024503C(arg1, temp_r3, TWindowSubComCard__sub_80249604(arg0));
    }
}

}
