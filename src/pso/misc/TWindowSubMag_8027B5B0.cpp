#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubMag__sub_8027B5B0(void *arg0);
M2C_UNK fn_80244D2C(void *);
M2C_UNK fn_80263AB0(void *, s32);
M2C_UNK fn_80263AF8(s32, M2C_UNK);
void *fn_80269CC0(M2C_UNK, M2C_UNK *, s32, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_8044FA00[];

void *TWindowSubMag__sub_8027B5B0(void *arg0) {
    void *temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = fn_8026CBB8(0xB);
    temp_r31 = fn_80269CC0(temp_r3, lbl_8044FA00, 1, M2C_FIELD(arg0, s32 *, 0x28));
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 4);
    fn_80244D2C(temp_r31);
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x186A0;
    fn_80263AB0(temp_r31, M2C_FIELD(arg0, s32 *, 0x28));
    return temp_r31;
}

}
