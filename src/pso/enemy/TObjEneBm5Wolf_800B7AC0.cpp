#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0);
M2C_UNK TObjEneDD__sub_800BBA18(s32, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 TObjEneBm5Wolf__data_805D9DAC;

void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < TObjEneBm5Wolf__data_805D9DAC) {
        TObjEneDD__sub_800BBA18(arg0, 8);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 9);
}

}
