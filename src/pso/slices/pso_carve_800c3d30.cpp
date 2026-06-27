#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneRe2Flower__sub_800C3B80();

void fn_800C3D30(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (TObjEneRe2Flower__sub_800C3B80() != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
        return;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3_2, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x44) | 1);
}

}
