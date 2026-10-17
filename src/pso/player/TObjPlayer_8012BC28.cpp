#include "types.h"
#include "pso/player/TObjPlayer_8012BC28.h"
#include "pso/unk/TUnk_804A4F60.h"
#include "pso/item/TItemEffOrgaFlowShot.h"
#include "pso/player/TObjPlayer.h"

extern const f32 lbl_805DAED0;
extern const f32 lbl_805DAED4;

void TUnk_804A4F60::update_idle() {
    u8 *arg0 = (u8 *)this;
    TObjPlayer::add_angle_clamped((s32 *)(arg0 + 0x278), 0x38E, 0x2AAA);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x278) == 0x2AAA) {
        TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x274), (f32)lbl_805DAED0, (f32)lbl_805DAED4);
    }
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAED8;

void TUnk_804A4F60::update_attack() {
    u8 *arg0 = (u8 *)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x274), (f32)lbl_805DAED8, (f32)lbl_805DAEC8);
    if (lbl_805DAEC8 == this->m_274) {
        TObjPlayer::add_angle_clamped((s32 *)(arg0 + 0x278), -0x71C, 0);
    }
}
