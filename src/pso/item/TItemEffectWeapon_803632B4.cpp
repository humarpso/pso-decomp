#include "types.h"
#include "pso/item/TUnk_804F28E0.h"
#include "pso/item/TItemEffectWeapon_803632B4.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805E0270;
extern const f32 lbl_805E0274;

void TUnk_804F28E0::update_idle() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1FC), (f32)lbl_805E0270, (f32)lbl_805E0274);
}

}
