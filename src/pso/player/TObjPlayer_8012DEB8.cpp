#include "types.h"
#include "pso/unk/TUnk_804A5C18.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805DAF5C;
extern const f32 lbl_805DAF60;

void TObjPlayer::update_approach_value() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)&this->unk_220 < 0x2000) {
        TObjPlayer::add_angle_clamped((s32 *)(arg0 + 0x220), 0x2D8, 0x2000);
    }
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x224), (f32)lbl_805DAF5C, (f32)lbl_805DAF60);
}

extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF64;

void TUnk_804A5C18::update_attack() {
    u8 *arg0 = (u8 *)this;
    if ((s32) this->m_220 > 0) {
        TObjPlayer::add_angle_clamped((s32 *)(arg0 + 0x220), -0x2000, 0);
    }
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x224), (f32)lbl_805DAF64, (f32)lbl_805DAF58);
}

}
