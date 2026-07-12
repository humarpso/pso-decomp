#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEnemyCustom__sub_800C7E64(u8 *arg0);
M2C_UNK TObjEnemyCustom__sub_800C7DF8(void *);
s32 TObjPlayer__sub_80080750();
M2C_UNK TObjPlayer__sub_800F6DD8(void *);
M2C_UNK TObjVoloptCage__sub_800C76F0(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void TObjEnemyCustom__sub_800C7E64(u8 *arg0) {
    if (TObjPlayer__sub_80080750() == 1) {
        TObjVoloptCage__sub_800C76F0(arg0);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjEnemyCustom__sub_800C7DF8(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjEnemyCustom__sub_800C7DF8(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        TObjEnemyCustom__sub_800C7DF8(arg0);
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjPlayer__sub_800F6DD8(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
