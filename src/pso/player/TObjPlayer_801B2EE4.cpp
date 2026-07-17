#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_scaled_value__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 rand__11TOBoss4RockFv();
s32 is_flag30_10_set__10TObjPlayerFi();

extern M2C_UNK TObjPlayer__data_80446F48;
extern f32 lbl_805DC280;
extern f32 lbl_805DC284;
extern f32 lbl_805DC288;

s32 calc_scaled_value__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (is_flag30_10_set__10TObjPlayerFi() != 0) {
        return (s32) (lbl_805DC280 * (lbl_805DC284 * (lbl_805DC288 * (f32) rand__11TOBoss4RockFv())));
    }
    return arg1;
}

}
