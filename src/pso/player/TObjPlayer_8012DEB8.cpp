#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805DAF5C;
extern const f32 lbl_805DAF60;

void TObjPlayer::update_approach_value() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x220) < 0x2000) {
        TObjPlayer::add_angle_clamped((s32 *)(arg0 + 0x220), (s32)0x2D8, (s32)0x2000);
    }
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x224), (f32)lbl_805DAF5C, (f32)lbl_805DAF60);
}

extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF64;

void TObjPlayer::update_shot_effect() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x220) > 0) {
        TObjPlayer::add_angle_clamped((s32 *)(arg0 + 0x220), (s32)(-0x2000), (s32)0);
    }
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x224), (f32)lbl_805DAF64, (f32)lbl_805DAF58);
}

}
