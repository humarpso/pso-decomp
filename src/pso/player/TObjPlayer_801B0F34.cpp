#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__vt12(void *arg0, s32 arg1);
s32 TObjPlayer__sub_801D91B8(void *, void *);
s32 TObjPlayer__sub_802034EC();

s32 TObjPlayer__vt12(void *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    void *temp_r4;

    if (TObjPlayer__sub_802034EC() == 0) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x2B0);
    temp_r31 = M2C_FIELD(temp_r4, s32 *, 0x1C);
    temp_r3 = TObjPlayer__sub_801D91B8(arg0, temp_r4);
    temp_r31 = temp_r31 + arg1;
    if (temp_r31 > temp_r3) {
        temp_r31 = temp_r3;
    }
    if (temp_r31 < 0) {
        temp_r31 = 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x1C) = temp_r31;
    return 1;
}

}
