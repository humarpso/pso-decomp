#include "types.h"

extern "C" {
u8 get_slot_count__14TItemProShieldFPv();
s32 approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
extern const f32 lbl_805DAE84;
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAE8C;
extern const f32 lbl_805DAE90;
extern const f32 lbl_805DAE94;
extern const f32 lbl_805DAE98;
void update_brionac_idle_scale(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAE9C;
extern const f32 lbl_805DAEA0;
extern const f32 lbl_805DAEA4;
void update_brionac_active_scale(u8 *arg0);
}

extern "C" {

void update_brionac_idle_scale(u8 *arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) (lbl_805DAE84), (f32) (lbl_805DAE88));
        if (*(f32 *)((s8 *)arg0 + 0x204) <= lbl_805DAE88) {
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x20C), (f32) (lbl_805DAE8C), (f32) (lbl_805DAE90));
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x218), (f32) (lbl_805DAE94), (f32) (lbl_805DAE98));
        }
    }
}
void update_brionac_active_scale(u8 *arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x20C), (f32) (lbl_805DAE9C), (f32) (lbl_805DAE88));
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x218), (f32) (lbl_805DAEA0), (f32) (lbl_805DAE88));
        if (lbl_805DAE88 <= *(f32 *)((s8 *)arg0 + 0x20C)) {
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) (lbl_805DAE9C), (f32) (lbl_805DAEA4));
        }
    }
}

}
