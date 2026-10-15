#include "types.h"

extern "C" {

u32 spawn_shot_effect__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
s32 spawn_slot_emitter__18TItemShootParticleFPvii(s32, s32, s32);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(s32, s32, s32, f32);
u32 TObjPlayer__sub_80128BD4(u32, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(s32);
s32 set_parent__7TObjectFP7TObject(u32, u32);

u32 spawn_shot_effect__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;
    u32 temp_r30;

    var_r31 = 0U;
    if (arg0 != 0) {
        var_r31 = __nw__7TObjectFUl(0x6C);
        if (var_r31 != 0U) {
            var_r31 = TObjPlayer__sub_80128BD4(var_r31, arg0, arg1, arg2, farg0);
        }
        temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
        if ((var_r31 != 0U) && (temp_r30 != 0U)) {
            spawn_slot_emitter__18TItemShootParticleFPvii(temp_r30, 0x1BB, 0);
            set_parent__7TObjectFP7TObject(temp_r30, var_r31);
        }
    }
    return var_r31;
}

}
