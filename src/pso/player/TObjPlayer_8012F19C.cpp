#include "types.h"

extern "C" {

void madam_parasol_open(s32 arg0);
s32 approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805DAFA4;
extern const f32 lbl_805DAFA8;
extern const f32 lbl_805DAFAC;
extern const f32 lbl_805DAFB0;

void madam_parasol_open(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAFA4, lbl_805DAFA8);
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1FC, lbl_805DAFAC, lbl_805DAFB0);
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DAFA4, lbl_805DAFA8);
}

}
