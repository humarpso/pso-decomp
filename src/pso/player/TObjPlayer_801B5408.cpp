#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_effect_default__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_801B5328(s32, s32, s32, M2C_UNK, f32);
s32 get_position_ptr__10TObjPlayerFPv();

extern f32 TObjPlayer__data_805DC278;

void play_effect_default__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TObjPlayer__sub_801B5328(arg0, get_position_ptr__10TObjPlayerFPv(), arg1, 0, TObjPlayer__data_805DC278);
}

}
