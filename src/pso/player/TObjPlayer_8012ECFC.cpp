#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_turn__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012ED74(void *arg0);
void try_spawn_cane_effects__10TObjPlayerFi(s32 arg0);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();
s32 TObjPlayer__sub_80121200();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

void apply_turn__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        play_particle_effect_once__10TObjPlayerFv();
        TObjPlayer__sub_803D9214(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
    case 2:
        return;
    }
}

void TObjPlayer__sub_8012ED74(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0xCCC);
}

extern s32 tl_05;

void try_spawn_cane_effects__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 4);
    }
}

}
