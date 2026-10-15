#include "types.h"

extern "C" {

void update_approach_value__10TObjPlayerFPv(u8 *arg0);
void update_shot_effect__10TObjPlayerFPv(u8 *arg0);
s32 add_angle_clamped__10TObjPlayerFPvii(void *, s32, s32);
s32 approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DAF5C;
extern const f32 lbl_805DAF60;

void update_approach_value__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x220) < 0x2000) {
        add_angle_clamped__10TObjPlayerFPvii(arg0 + 0x220, 0x2D8, 0x2000);
    }
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x224, lbl_805DAF5C, lbl_805DAF60);
}

extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF64;

void update_shot_effect__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x220) > 0) {
        add_angle_clamped__10TObjPlayerFPvii(arg0 + 0x220, -0x2000, 0);
    }
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x224, lbl_805DAF64, lbl_805DAF58);
}

}
