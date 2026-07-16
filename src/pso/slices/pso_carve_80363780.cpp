#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK memcpy(void *, int, int);

void TItemEffectWeapon__sub_80363780(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 temp_r0;
    s32 temp_r3;
    u8 *temp_r4;

    if (((void *) M2C_FIELD(arg0, void **, 0x1C) != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r3 == 0x20) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r3 - 2);
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r0 != 0) {
            temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x1C));
            memcpy((void *) (temp_r4 + 0x20), (int) (temp_r4), (int) (temp_r0 * 0x10));
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & 0x4FFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 2);
    }
}

}
