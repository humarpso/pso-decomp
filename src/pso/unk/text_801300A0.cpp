#include "types.h"
#include "pso/item/TItemEffOrgaFlowShot.h"
#include "pso/item/TItemProShield.h"
#include "pso/items/TItemWeapon.h"

extern "C" {
s32 create_item_eff_cane__10TObjPlayerFiUiii(void *, void *, int, int);
extern s32 tl_05;
extern const f32 lbl_805DAFF8;
extern const f32 lbl_805DAFFC;
void mace_of_adaman_update_active(u8 *arg0);
}

extern "C" {

void mace_of_adaman_update_active(u8 *arg0) {
    u8 temp_r3;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1FC) == 0) {
        temp_r3 = ((TItemProShield *)arg0)->get_slot_count();
        switch ((s32) temp_r3) {
        case 5:
            break;
        case 4:
            if (((TItemWeapon *)arg0)->get_attack_stage() == 0) {
                create_item_eff_cane__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (1), (int) (0x1AE));
            }
            break;
        case 6:
            if (((TItemWeapon *)arg0)->get_attack_stage() == 0) {
                create_item_eff_cane__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (2), (int) (0x101));
            }
            break;
        }
        *(s32 *)((s8 *)arg0 + 0x1FC) = 1;
    }
    if (((TItemProShield *)arg0)->get_slot_count() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)((f32) (lbl_805DAFF8)), (f32)((f32) (lbl_805DAFFC)));
    }
}

}
