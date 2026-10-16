#include "types.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805DE7B0;
extern const f32 lbl_805DE7B4;

void TAdPlayerLoadGC::approach_value() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DE7B0, (f32)lbl_805DE7B4);
}

}
