#include "types.h"
#include "pso/item/TUnk_804A68C8.h"
#include "pso/item/TItemEffOrgaFlowShot.h"
#include "pso/item/TItemProShield.h"

extern "C" {

void update_cane_weapon_idle(u8 *arg0);

extern const f32 lbl_805DAFF0;
extern const f32 lbl_805DAFF4;

void update_cane_weapon_idle(u8 *arg0) {
    if ((s32) ((TUnk_804A68C8 *)arg0)->m_1fc == 1) {
        ((TUnk_804A68C8 *)arg0)->m_1fc = 0;
    }
    if (((TItemProShield *)arg0)->get_slot_count() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DAFF0, (f32)lbl_805DAFF4);
    }
}

}
