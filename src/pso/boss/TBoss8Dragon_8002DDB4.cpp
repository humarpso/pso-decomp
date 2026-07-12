#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_8002DDB4(void);
M2C_UNK apply_velocity_scale__12TBoss8DragonFPvff(f32, f32);

extern const f32 lbl_805D81D4;
extern const f32 lbl_805D81E4;

void TBoss8Dragon__sub_8002DDB4(void) {
    apply_velocity_scale__12TBoss8DragonFPvff(lbl_805D81E4, lbl_805D81D4);
}

}
