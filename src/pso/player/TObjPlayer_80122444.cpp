#include "types.h"
#include "pso/unk/TUnk_804A0FA0.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

void update_attack__13TUnk_804A0FA0Fv(s32 arg0);
u8 get_slot_count__14TItemProShieldFv();

extern f32 lbl_805DACE4;
extern f32 lbl_805DACE8;

void TObjPlayer::update_shield_effect() {
    s32 arg0 = (s32)this;
    if (get_slot_count__14TItemProShieldFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DACE4, (f32)lbl_805DACE8);
    }
}

extern f32 lbl_805DACE0;
extern f32 lbl_805DACEC;

void TUnk_804A0FA0::update_attack() {
    s32 arg0 = (s32)this;
    if (get_slot_count__14TItemProShieldFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DACEC, (f32)lbl_805DACE0);
    }
}

}
