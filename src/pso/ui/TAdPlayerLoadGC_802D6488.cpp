#include "types.h"
#include "pso/ui/TUnk_804E24F0.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805DE7A8;
extern const f32 lbl_805DE7B8;

void TUnk_804E24F0::update_attack() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DE7B8, (f32)lbl_805DE7A8);
}

}
