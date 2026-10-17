#include "types.h"
#include "pso/unk/text_8012B3C4.h"
#include "pso/item/TUnk_804A4D70.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {
u8 get_slot_count__5TItemFv();
extern const f32 lbl_805DAE84;
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAE8C;
extern const f32 lbl_805DAE90;
extern const f32 lbl_805DAE94;
extern const f32 lbl_805DAE98;
extern const f32 lbl_805DAE9C;
extern const f32 lbl_805DAEA0;
extern const f32 lbl_805DAEA4;
void TUnk_804A4D70::update_idle() {
    if (get_slot_count__5TItemFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(((u8 *)this) + 0x204), (f32)lbl_805DAE84, (f32)lbl_805DAE88);
        if (this->m_204 <= lbl_805DAE88) {
            TItemEffOrgaFlowShot::approach_value((f32 *)(((u8 *)this) + 0x20C), (f32)lbl_805DAE8C, (f32)lbl_805DAE90);
            TItemEffOrgaFlowShot::approach_value((f32 *)(((u8 *)this) + 0x218), (f32)lbl_805DAE94, (f32)lbl_805DAE98);
        }
    }
}
void TUnk_804A4D70::update_attack() {
    u8 *arg0 = (u8 *)this;
    if (get_slot_count__5TItemFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x20C), (f32)lbl_805DAE9C, (f32)lbl_805DAE88);
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x218), (f32)lbl_805DAEA0, (f32)lbl_805DAE88);
        if (lbl_805DAE88 <= this->m_20c) {
            TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x204), (f32)lbl_805DAE9C, (f32)lbl_805DAEA4);
        }
    }
}

}
