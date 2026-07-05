#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcEnemy__sub_802D7484(void *arg0, void *arg1);
M2C_UNK fn_801433E8(void *, s32, s32, s16);

extern const f32 lbl_805DE7D8;

void TObjNpcEnemy__sub_802D7484(void *arg0, void *arg1) {
    u16 temp_r0;
    void *temp_r3;
    void *temp_r5;

    M2C_FIELD(arg0, void **, 0x3B8) = arg1;
    temp_r5 = M2C_FIELD(arg0, void **, 0x3B8);
    if (temp_r5 == NULL) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 0xC) = (f32) lbl_805DE7D8;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
    temp_r3 = M2C_FIELD(arg0, void **, 0x3B8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r3, s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r5, s16 *, 0x1C);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), u16 *, 2);
    switch ((s32) temp_r0) {
    case 0:
    case 2:
    case 4:
        break;
    case 1:
    case 3:
        fn_801433E8(arg0, M2C_FIELD(temp_r5, s32 *, 0x18), M2C_FIELD(temp_r5, s32 *, 0x14), M2C_FIELD(arg0, s16 *, 0xB8));
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), f32 *, 0x10);
}

}
