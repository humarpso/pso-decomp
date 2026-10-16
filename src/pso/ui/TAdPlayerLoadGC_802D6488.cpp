#include "types.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

void TAdPlayerLoadGC__sub_802D6488(s32 arg0);

extern const f32 lbl_805DE7A8;
extern const f32 lbl_805DE7B8;

void TAdPlayerLoadGC__sub_802D6488(s32 arg0) {
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DE7B8, (f32)lbl_805DE7A8);
}

}
