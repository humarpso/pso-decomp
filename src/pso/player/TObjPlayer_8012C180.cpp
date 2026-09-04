#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_shield_combo__10TObjPlayerFPv(void *arg0);
void approach_shield_effect__10TObjPlayerFi(s32 arg0);
void approach_shield_value__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern f32 lbl_805DAEE0;

void check_shield_combo__10TObjPlayerFPv(void *arg0) {
    if ((get_slot_count__14TItemProShieldFPv() == 5) && (get_player_list__10TObjPlayerFv() == 3)) {
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DAEE0, M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DAEE0);
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
