#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void blade_dance_update_active(s32 arg0);
u8 get_slot_count__14TItemProShieldFv();
s32 approach_value__20TItemEffOrgaFlowShotFPfff(s32, f32, f32);

extern f32 lbl_805DACE4;
extern f32 lbl_805DACE8;

void TObjPlayer::update_shield_effect() {
    s32 arg0 = (s32)this;
    if (get_slot_count__14TItemProShieldFv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1F8, lbl_805DACE4, lbl_805DACE8);
    }
}

extern f32 lbl_805DACE0;
extern f32 lbl_805DACEC;

void blade_dance_update_active(s32 arg0) {
    if (get_slot_count__14TItemProShieldFv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1F8, lbl_805DACEC, lbl_805DACE0);
    }
}

}
