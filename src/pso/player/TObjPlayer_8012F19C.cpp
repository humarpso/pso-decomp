#include "types.h"
#include "pso/item/TUnk_804A6200.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

extern const f32 lbl_805DAFA4;
extern const f32 lbl_805DAFA8;
extern const f32 lbl_805DAFAC;
extern const f32 lbl_805DAFB0;

void TUnk_804A6200::update_attack() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DAFA4, (f32)lbl_805DAFA8);
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1FC), (f32)lbl_805DAFAC, (f32)lbl_805DAFB0);
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)lbl_805DAFA4, (f32)lbl_805DAFA8);
}

}
