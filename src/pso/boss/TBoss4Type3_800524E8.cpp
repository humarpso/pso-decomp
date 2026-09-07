#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805D8AE0;
f32 TBoss4Type3__sub_800524E8(f32 farg0);
}

extern "C" {

f32 compute_wave_offset__11TBoss4Type3Ff(f32 farg0);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 lbl_805D8AE0;
extern const f32 lbl_805D8AE4;
extern const f32 lbl_805D8AF0;

#pragma push
#pragma fp_contract on
f32 TBoss4Type3__sub_800524E8(f32 farg0) {
    f32 temp_f1;
    temp_f1 = lbl_805D8AE0 - farg0;
    return -((temp_f1 * (temp_f1 * (temp_f1 * (temp_f1 * (temp_f1 * temp_f1))))) - lbl_805D8AE0);
}
#pragma pop

f32 compute_wave_offset__11TBoss4Type3Ff(f32 farg0) {
    return lbl_805D8AE4 * (lbl_805D8AE0 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8AF0 * farg0)));
}

}
