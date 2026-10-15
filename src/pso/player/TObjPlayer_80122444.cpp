#include "types.h"

extern "C" {

void update_shield_effect__10TObjPlayerFi(s32 arg0);
void blade_dance_update_active(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern f32 lbl_805DACE4;
extern f32 lbl_805DACE8;

void update_shield_effect__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DACE4, lbl_805DACE8);
    }
}

extern f32 lbl_805DACE0;
extern f32 lbl_805DACEC;

void blade_dance_update_active(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DACEC, lbl_805DACE0);
    }
}

}
