#include "types.h"
#include "pso/item/TItem.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TUnk_804A68C8.h"
#include "pso/item/TItemEffOrgaFlowShot.h"
#include "pso/item/TItemProShield.h"
#include "pso/items/TItemWeapon.h"

extern s32 tl_05;
extern const f32 lbl_805DAFF8;
extern const f32 lbl_805DAFFC;

extern "C" {

void TUnk_804A68C8::update_attack() {
    u8 *arg0 = (u8 *)this;
    if ((s32) this->m_1fc == 0) {
        switch ((s32) (((TItem *)arg0)->get_slot_count())) {
        case 5:
            break;
        case 4:
            if (((TItemWeapon *)arg0)->get_attack_stage() == 0) {
                ((TObjPlayer *)tl_05)->create_item_eff_cane((TItem*)arg0, 1, 0x1AE);
            }
            break;
        case 6:
            if (((TItemWeapon *)arg0)->get_attack_stage() == 0) {
                ((TObjPlayer *)tl_05)->create_item_eff_cane((TItem*)arg0, 2, 0x101);
            }
            break;
        }
        this->m_1fc = 1;
    }
    if (((TItem *)arg0)->get_slot_count() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DAFF8, (f32)lbl_805DAFFC);
    }
}

}
