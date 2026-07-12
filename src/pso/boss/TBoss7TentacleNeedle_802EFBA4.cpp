#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0);

extern const f32 lbl_805DEC1C;

void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r4 == 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805DEC1C;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r4 + 1);
}

}
