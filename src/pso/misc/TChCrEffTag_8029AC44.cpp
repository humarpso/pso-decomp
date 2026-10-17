#include "types.h"
#include "pso/misc/TChCrEffTag_8029AC44.h"
#include "pso/TChCrEffTag.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__11TChCrEffTag[];
extern const f32 lbl_805DDCA4;
extern void *TChCrEffTag__name;
extern u32 TChCrEffTag__selected_heading;

void *__ct__11TChCrEffTagFv(void *ch_cr_eff_tag) {
    __ct__7TObjectFP7TObject(ch_cr_eff_tag);
    *(s32 **)((s8 *)ch_cr_eff_tag + 0x18) = __vt__11TChCrEffTag;
    *(void * *)&((TChCrEffTag *)ch_cr_eff_tag)->m_name = TChCrEffTag__name;
    ((TChCrEffTag *)ch_cr_eff_tag)->heading = -1;
    TChCrEffTag__selected_heading = -1;
    *(u32 *)((s8 *)ch_cr_eff_tag + 0x28) = 0;
    *(f32 *)((s8 *)ch_cr_eff_tag + 0x24) = lbl_805DDCA4;
    *(f32 *)((s8 *)ch_cr_eff_tag + 0x20) = lbl_805DDCA4;
    return ch_cr_eff_tag;
}

extern char lbl_80465298[];
void *TChCrEffTag__name = lbl_80465298;
}
