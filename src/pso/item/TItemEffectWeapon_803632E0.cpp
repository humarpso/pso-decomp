#include "types.h"
#include "pso/item/TUnk_804F28E0.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805E0268;
extern const f32 lbl_805E0278;

void TUnk_804F28E0::update_attack() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1FC), (f32)lbl_805E0278, (f32)lbl_805E0268);
}

}
