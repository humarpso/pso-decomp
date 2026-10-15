#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 add_angle_clamped__10TObjPlayerFPlll(void *, s32, s32);
s32 approach_value__20TItemEffOrgaFlowShotFPfff(void *, f32, f32);

extern const f32 lbl_805DAF5C;
extern const f32 lbl_805DAF60;

void TObjPlayer::update_approach_value() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x220) < 0x2000) {
        add_angle_clamped__10TObjPlayerFPlll(arg0 + 0x220, 0x2D8, 0x2000);
    }
    approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x224, lbl_805DAF5C, lbl_805DAF60);
}

extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF64;

void TObjPlayer::update_shot_effect() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x220) > 0) {
        add_angle_clamped__10TObjPlayerFPlll(arg0 + 0x220, -0x2000, 0);
    }
    approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x224, lbl_805DAF64, lbl_805DAF58);
}

}
