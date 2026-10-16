#include "types.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {
u8 get_slot_count__14TItemProShieldFv();
extern const f32 lbl_805DAE84;
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAE8C;
extern const f32 lbl_805DAE90;
extern const f32 lbl_805DAE94;
extern const f32 lbl_805DAE98;
void update_brionac_idle_scale(u8 *arg0);
u8 get_slot_count__14TItemProShieldFv();
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAE9C;
extern const f32 lbl_805DAEA0;
extern const f32 lbl_805DAEA4;
void update_brionac_active_scale(u8 *arg0);
}

extern "C" {

void update_brionac_idle_scale(u8 *arg0) {
    if (get_slot_count__14TItemProShieldFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x204), (f32)((f32) (lbl_805DAE84)), (f32)((f32) (lbl_805DAE88)));
        if (*(f32 *)((s8 *)arg0 + 0x204) <= lbl_805DAE88) {
            TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x20C), (f32)((f32) (lbl_805DAE8C)), (f32)((f32) (lbl_805DAE90)));
            TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x218), (f32)((f32) (lbl_805DAE94)), (f32)((f32) (lbl_805DAE98)));
        }
    }
}
void update_brionac_active_scale(u8 *arg0) {
    if (get_slot_count__14TItemProShieldFv() == 5) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x20C), (f32)((f32) (lbl_805DAE9C)), (f32)((f32) (lbl_805DAE88)));
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x218), (f32)((f32) (lbl_805DAEA0)), (f32)((f32) (lbl_805DAE88)));
        if (lbl_805DAE88 <= *(f32 *)((s8 *)arg0 + 0x20C)) {
            TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x204), (f32)((f32) (lbl_805DAE9C)), (f32)((f32) (lbl_805DAEA4)));
        }
    }
}

}
