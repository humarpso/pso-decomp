#include "types.h"

extern "C" {

void *__ct__11TChCrEffTagFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__11TChCrEffTag[];
extern const f32 lbl_805DDCA4;
extern void *TChCrEffTag__name;
extern u32 TChCrEffTag__selected_heading;

void *__ct__11TChCrEffTagFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TChCrEffTag;
    *(void **)((s8 *)arg0 + 0x0) = TChCrEffTag__name;
    *(u32 *)((s8 *)arg0 + 0x1C) = -1;
    TChCrEffTag__selected_heading = -1;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(f32 *)((s8 *)arg0 + 0x24) = lbl_805DDCA4;
    *(f32 *)((s8 *)arg0 + 0x20) = lbl_805DDCA4;
    return arg0;
}

}

extern "C" {
extern char lbl_80465298[];
void *TChCrEffTag__name = lbl_80465298;
}
