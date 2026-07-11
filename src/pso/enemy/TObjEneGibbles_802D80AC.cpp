#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneGibbles__sub_802D80AC(void *arg0);

extern M2C_UNK TObjEneGibbles__data_80472790;
extern f32 lbl_805DE80C;

void TObjEneGibbles__sub_802D80AC(void *arg0) {
    s16 temp_r0;
    s16 temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38A);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x388);
    if (temp_r0 == temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x101;
        return;
    }
    if ((lbl_805DE80C * (f32) temp_r0) < (f32) temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x102;
        return;
    }
    if (temp_r6 > 0) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x103;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}

}
