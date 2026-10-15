#include "types.h"

extern "C" {

void update_cane_weapon_idle(u8 *arg0);
u8 get_slot_count__14TItemProShieldFv(void *);
s32 approach_value__20TItemEffOrgaFlowShotFPfff(void *, f32, f32);

extern const f32 lbl_805DAFF0;
extern const f32 lbl_805DAFF4;

void update_cane_weapon_idle(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1FC) == 1) {
        *(s32 *)((s8 *)arg0 + 0x1FC) = 0;
    }
    if (get_slot_count__14TItemProShieldFv(arg0) == 5) {
        approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1F8, lbl_805DAFF0, lbl_805DAFF4);
    }
}

}
