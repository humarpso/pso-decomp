#include "types.h"
#include "pso/unk/TUnk_804A5248.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

u8 get_slot_count__5TItemFv();
s32 scale_matrix(s32, f32, f32, f32);

extern f32 lbl_805DAEE0;

void TObjPlayer::check_shield_combo() {
    if ((get_slot_count__5TItemFv() == 5) && (TObjPlayer::get_player_list() == 3)) {
        scale_matrix(0, lbl_805DAEE0, *(f32 *)((s8 *)this + 0x1F8), lbl_805DAEE0);
    }
}

extern f32 lbl_805DAEE4;
extern f32 lbl_805DAEE8;

void TUnk_804A5248::update_idle() {
    s32 arg0 = (s32)this;
    if (get_slot_count__5TItemFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DAEE4, (f32)lbl_805DAEE8);
    }
}

extern f32 lbl_805DAEEC;

void TUnk_804A5248::update_attack() {
    s32 arg0 = (s32)this;
    if (get_slot_count__5TItemFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DAEEC, (f32)lbl_805DAEE0);
    }
}

}
