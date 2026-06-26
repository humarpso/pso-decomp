#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B78BC(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x70) | 1);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x9C) | 1);
        temp_r4_3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_3, s32 *, 0xC8) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0xC8) | 1);
        temp_r4_4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_4, s32 *, 0xF4) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0xF4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x120) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x120) | 1);
    }
}

}
