#include "types.h"

extern "C" {

void check_shield_combo__10TObjPlayerFPv(void *arg0);
void approach_shield_effect__10TObjPlayerFi(s32 arg0);
void approach_shield_value__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 scale_matrix(s32, f32, f32, f32);
s32 get_player_list__10TObjPlayerFv();
s32 approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern f32 lbl_805DAEE0;

void check_shield_combo__10TObjPlayerFPv(void *arg0) {
    if ((get_slot_count__14TItemProShieldFPv() == 5) && (get_player_list__10TObjPlayerFv() == 3)) {
        scale_matrix(0, lbl_805DAEE0, *(f32 *)((s8 *)arg0 + 0x1F8), lbl_805DAEE0);
    }
}

extern f32 lbl_805DAEE4;
extern f32 lbl_805DAEE8;

void approach_shield_effect__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAEE4, lbl_805DAEE8);
    }
}

extern f32 lbl_805DAEE0;
extern f32 lbl_805DAEEC;

void approach_shield_value__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAEEC, lbl_805DAEE0);
    }
}

}
