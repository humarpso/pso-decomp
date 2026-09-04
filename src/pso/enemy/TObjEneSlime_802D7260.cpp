#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_child__12TObjEneSlimeFsiiff(s16 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void *TObjNpcEnemy__sub_802D732C();

void spawn_child__12TObjEneSlimeFsiiff(s16 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *temp_r3;

    temp_r3 = TObjNpcEnemy__sub_802D732C();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0) = arg0;
        M2C_FIELD(temp_r3, s16 *, 2) = 0;
        M2C_FIELD(temp_r3, f32 *, 4) = farg1;
        M2C_FIELD(temp_r3, s32 *, 8) = arg1;
        M2C_FIELD(temp_r3, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_r3, f32 *, 0x10) = farg0;
        M2C_FIELD(temp_r3, s32 *, 0x14) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x1C) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x1E) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x20) = 0;
    }
}

}
