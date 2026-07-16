#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
f32 get_random_float__8TObjFishFv(f32);

extern const f32 lbl_805DF7F4;

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f31 = -TBoss8Dragon__sub_803D64C0((void *) (arg3));
    temp_f30 = lbl_805DF7F4 - get_random_float__8TObjFishFv((f32) (temp_f31));
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64C0((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = temp_f31;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64DC((void *) (arg2)));
}

}
