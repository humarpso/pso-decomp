#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2);
f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B60;
extern const f32 lbl_805D8B74;

f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8B60 * (lbl_805D8B18 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8B74 * farg0)));
}

extern M2C_UNK lbl_80437628;

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg1 + (s32) (M2C_FIELD(arg0, f32 *, 0x39C) * (f32) TBoss4Type2__sub_80141FA8(arg1, arg2)));
}

}
