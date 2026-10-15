#include "types.h"

extern "C" {

void madam_umbrella_open(s32 arg0);
s32 approach_value__20TItemEffOrgaFlowShotFPfff(s32, f32, f32);

extern const f32 lbl_805DAFDC;
extern const f32 lbl_805DAFE0;
extern const f32 lbl_805DAFE4;
extern const f32 lbl_805DAFE8;

void madam_umbrella_open(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1F8, lbl_805DAFDC, lbl_805DAFE0);
    approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x1FC, lbl_805DAFE4, lbl_805DAFE8);
    approach_value__20TItemEffOrgaFlowShotFPfff(arg0 + 0x200, lbl_805DAFDC, lbl_805DAFE0);
}

}
