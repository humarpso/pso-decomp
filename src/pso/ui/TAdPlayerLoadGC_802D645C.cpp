#include "types.h"
#include "pso/TAdPlayerLoadGC.h"

extern "C" {

s32 approach_value__20TItemEffOrgaFlowShotFPfff(s32, f32, f32);

extern const f32 lbl_805DE7B0;
extern const f32 lbl_805DE7B4;

void TAdPlayerLoadGC::approach_value() {
    s32 arg0 = (s32)this;
    approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1F8, lbl_805DE7B0, lbl_805DE7B4);
}

}
