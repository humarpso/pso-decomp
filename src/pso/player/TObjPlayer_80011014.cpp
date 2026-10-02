#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0);
s32 rand();
f32 calc_random_ratio__10TObjPlayerFv(s32);

s32 get_main_phase();
extern M2C_UNK TObjPlayer__data_80434080;
extern f32 lbl_805D7D38;

f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0) {
    if (get_main_phase() == 0xE) {
        return lbl_805D7D38 * (f32) rand();
    }
    return calc_random_ratio__10TObjPlayerFv(arg0 + 0x160);
}

}
