#include "types.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

void madam_umbrella_open(s32 arg0);

extern const f32 lbl_805DAFDC;
extern const f32 lbl_805DAFE0;
extern const f32 lbl_805DAFE4;
extern const f32 lbl_805DAFE8;

void madam_umbrella_open(s32 arg0) {
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1F8), (f32)lbl_805DAFDC, (f32)lbl_805DAFE0);
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1FC), (f32)lbl_805DAFE4, (f32)lbl_805DAFE8);
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)lbl_805DAFDC, (f32)lbl_805DAFE0);
}

}
