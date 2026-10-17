#include "types.h"
#include "pso/player/TObjPlayer_80130040.h"
#include "pso/item/TUnk_804A68C8.h"
#include "pso/item/TItemEffOrgaFlowShot.h"
#include "pso/item/TItemProShield.h"

extern "C" {

extern const f32 lbl_805DAFF0;
extern const f32 lbl_805DAFF4;

void TUnk_804A68C8::update_idle() {
    if ((s32) ((TUnk_804A68C8 *)((u8 *)this))->m_1fc == 1) {
        ((TUnk_804A68C8 *)((u8 *)this))->m_1fc = 0;
    }
    if (((TItemProShield *)((u8 *)this))->get_slot_count() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(((u8 *)this) + 0x1F8), (f32)lbl_805DAFF0, (f32)lbl_805DAFF4);
    }
}

}
