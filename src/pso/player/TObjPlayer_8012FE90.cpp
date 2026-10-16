#include "types.h"
#include "pso/item/TUnk_804A67D0.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805DAFDC;
extern const f32 lbl_805DAFE0;
extern const f32 lbl_805DAFE4;
extern const f32 lbl_805DAFE8;

void TUnk_804A67D0::update_attack() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DAFDC, (f32)lbl_805DAFE0);
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1FC), (f32)lbl_805DAFE4, (f32)lbl_805DAFE8);
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)lbl_805DAFDC, (f32)lbl_805DAFE0);
}

}
