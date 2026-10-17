#include "types.h"
#include "pso/unk/text_80122388.h"
#include "pso/item/TItemProShield.h"
#include "pso/player/TObjPlayer.h"

struct Self_801223E0 { u8 pad[0x1f8]; f32 f1f8; };

extern "C" {
u8 * guld_milla_ct(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
void scale_matrix(s32, f32, f32, f32);
extern const f32 lbl_805DACE0;
void apply_blade_dance_model_scale(Self_801223E0 *self);
u8 *create_guld_milla(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x210));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(guld_milla_ct(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
void apply_blade_dance_model_scale(Self_801223E0 *self) {
    if (((TItemProShield *)self)->get_slot_count() == 5) {
        s32 n = TObjPlayer::get_player_list();
        switch (n) {
        case 3:
        case 4:
            scale_matrix(0, lbl_805DACE0, self->f1f8, self->f1f8);
            break;
        }
    }
}

}
