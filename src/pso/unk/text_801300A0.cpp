#include "types.h"

extern "C" {
s32 create_item_eff_cane__10TObjPlayerFiUiii(void *, void *, int, int);
u8 get_slot_count__14TItemProShieldFv(void *);
s32 approach_value__20TItemEffOrgaFlowShotFPfff(void *, f32, f32);
s32 get_attack_stage__11TItemWeaponFv(void *);
extern s32 tl_05;
extern const f32 lbl_805DAFF8;
extern const f32 lbl_805DAFFC;
void mace_of_adaman_update_active(u8 *arg0);
}

extern "C" {

void mace_of_adaman_update_active(u8 *arg0) {
    u8 temp_r3;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1FC) == 0) {
        temp_r3 = get_slot_count__14TItemProShieldFv((void *) (arg0));
        switch ((s32) temp_r3) {
        case 5:
            break;
        case 4:
            if (get_attack_stage__11TItemWeaponFv((void *) (arg0)) == 0) {
                create_item_eff_cane__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (1), (int) (0x1AE));
            }
            break;
        case 6:
            if (get_attack_stage__11TItemWeaponFv((void *) (arg0)) == 0) {
                create_item_eff_cane__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (2), (int) (0x101));
            }
            break;
        }
        *(s32 *)((s8 *)arg0 + 0x1FC) = 1;
    }
    if (get_slot_count__14TItemProShieldFv((void *) (arg0)) == 5) {
        approach_value__20TItemEffOrgaFlowShotFPfff((void *) (arg0 + 0x1F8), (f32) (lbl_805DAFF8), (f32) (lbl_805DAFFC));
    }
}

}
