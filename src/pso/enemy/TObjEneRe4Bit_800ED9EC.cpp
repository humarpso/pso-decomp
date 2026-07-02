#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Bit__sub_800ED9EC(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void TObjEneRe4Bit__sub_800EDA18(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
M2C_UNK TObjEneRe4Bit__sub_800EDA44(M2C_UNK, M2C_UNK, s32, s32, s32);

void TObjEneRe4Bit__sub_800ED9EC(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    TObjEneRe4Bit__sub_800EDA44(arg0, arg1, 1, arg2, arg3);
}

void TObjEneRe4Bit__sub_800EDA18(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    TObjEneRe4Bit__sub_800EDA44(arg0, arg1, 0, arg2, arg3);
}

}
