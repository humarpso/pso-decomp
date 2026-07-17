#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_egg_anim__25TObjCity_Season_EasterEggFPv(void *arg0);
u32 get_anim_frame__25TObjCity_Season_EasterEggFPv();

void advance_egg_anim__25TObjCity_Season_EasterEggFPv(void *arg0) {
    s32 temp_r3;

    if (get_anim_frame__25TObjCity_Season_EasterEggFPv() != 0U) {
        M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_r3 >= 0xFF) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (temp_r3 - 0xFF);
        }
    }
}

}
