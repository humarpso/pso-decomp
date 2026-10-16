#include "types.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

void s_rank_launcher_extend(s32 arg0);

extern const f32 lbl_805E0270;
extern const f32 lbl_805E0274;

void s_rank_launcher_extend(s32 arg0) {
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1FC), (f32)lbl_805E0270, (f32)lbl_805E0274);
}

}
