#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_cane_effect_if_ready__10TObjPlayerFi(s32 arg0);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 get_attack_stage__11TItemWeaponFPv();

extern s32 tl_05;

void spawn_cane_effect_if_ready__10TObjPlayerFi(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFPv() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 1);
    }
}

}
