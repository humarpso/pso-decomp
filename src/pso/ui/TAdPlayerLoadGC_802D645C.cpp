#include "types.h"
#include "pso/ui/TUnk_804E24F0.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805DE7B0;
extern const f32 lbl_805DE7B4;

void TUnk_804E24F0::update_idle() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DE7B0, (f32)lbl_805DE7B4);
}

}
