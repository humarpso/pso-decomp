#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 get_random_float__8TObjFishFv(f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 TObjEneMe3Stelth__data_805DA834;
extern const f32 TObjEneMe3Stelth__data_805DA844;
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (get_random_float__8TObjFishFv(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C)) >= TObjEneMe3Stelth__data_805DA844) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0x3AC) > TObjEneMe3Stelth__data_805DA834) {
        return 0;
    }
    temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x3A8) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f31 = (M2C_FIELD(arg0, f32 *, 0x3A0) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60))) + temp_f31_2;
    return (temp_f31 < TBoss8Dragon__sub_803D64DC(0x1E00)) == 0;
}
#pragma pop

}
