#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 scale_matrix(s32, f32, f32, f32);
s32 get_player_list__10TObjPlayerFv();
s32 approach_value__20TItemEffOrgaFlowShotFPfff(s32, f32, f32);

extern f32 lbl_805DAEE0;

void TObjPlayer::check_shield_combo() {
    if ((get_slot_count__14TItemProShieldFv() == 5) && (get_player_list__10TObjPlayerFv() == 3)) {
        scale_matrix(0, lbl_805DAEE0, *(f32 *)((s8 *)this + 0x1F8), lbl_805DAEE0);
    }
}

extern f32 lbl_805DAEE4;
extern f32 lbl_805DAEE8;

void TObjPlayer::approach_shield_effect() {
    s32 arg0 = (s32)this;
    if (get_slot_count__14TItemProShieldFv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1F8, lbl_805DAEE4, lbl_805DAEE8);
    }
}

extern f32 lbl_805DAEE0;
extern f32 lbl_805DAEEC;

void TObjPlayer::approach_shield_value() {
    s32 arg0 = (s32)this;
    if (get_slot_count__14TItemProShieldFv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1F8, lbl_805DAEEC, lbl_805DAEE0);
    }
}

}
