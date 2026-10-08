#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_dead_spot__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0);
void set_field_e4__10TObjPlayerFii(s32 arg1, s32 arg2);
void spawn_effect_f8__10TObjPlayerFii(s32 arg1, s32 arg2);
M2C_UNK construct_fire_base__9TDeadSpotFPvPvPvif(s32, s32, s32, s32, f32);
s32 create_timed_particle_emitter(s32, M2C_UNK, M2C_UNK, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create_dead_spot__10TObjPlayerFiiif(M2C_UNK, s32, s32);

extern s32 tl_05;

void create_dead_spot__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0) {
    s32 temp_r3;

    temp_r3 = __nw__7TObjectFUl(0x38);
    if (temp_r3 != 0) {
        construct_fire_base__9TDeadSpotFPvPvPvif(temp_r3, tl_05, arg0, create_timed_particle_emitter((s32)(arg0), (M2C_UNK)(0xF8), (M2C_UNK)(0), (s32)(arg1)), farg0);
    }
}

void spawn_effect_f8__10TObjPlayerFii(s32 arg1, s32 arg2) {
    create_timed_particle_emitter((s32)(arg1), (M2C_UNK)(0xF8), (M2C_UNK)(0), (s32)(arg2));
}

void set_field_e4__10TObjPlayerFii(s32 arg1, s32 arg2) {
    create_dead_spot__10TObjPlayerFiiif(arg1, 0xE4, arg2);
}

}
