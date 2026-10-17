#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Obj_80128128 { u8 pad[0x200]; f32 c; };

extern "C" {
u8 * construct_state_variant__13TUnk_804A3830Fv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
extern const f32 lbl_805DADE0;
extern const f32 lbl_805DADE4;
u8 *TObjPlayer::create_state_variant(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_state_variant__13TUnk_804A3830Fv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
void TObjPlayer::decay_gauge_c_to_floor_b() {
    Obj_80128128 *self = (Obj_80128128 *)this;
    if (lbl_805DADE0 < self->c) {
        self->c -= lbl_805DADE4;
        if (self->c < lbl_805DADE0) {
            self->c = lbl_805DADE0;
        }
    }
}

}
