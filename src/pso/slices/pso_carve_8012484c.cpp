#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK spawn_slot_emitter__18TItemShootParticleFPvii(M2C_UNK, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(s32, s32, s32, f32);
s32 ct_shoot_model__10TObjPlayerFPv(s32, s32, s32, s32, f32);
s32 __nw__7TObjectFUl(M2C_UNK);

s32 spawn_shoot_particle_entity__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 var_r0;
    s32 var_r31;

    var_r31 = 0;
    if (arg0 != 0) {
        var_r0 = __nw__7TObjectFUl(0x6C);
        if (var_r0 != 0) {
            var_r0 = ct_shoot_model__10TObjPlayerFPv(var_r0, arg0, arg1, arg2, farg0);
        }
        var_r31 = var_r0;
    }
    var_r0 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if (var_r0 != 0U) {
        spawn_slot_emitter__18TItemShootParticleFPvii(var_r0, 0x1BB, 0);
    }
    return var_r31;
}

}
