#include "types.h"

extern "C" {

void *TChCrTagInformation__ct(void *arg0);
void __ct__8TChCrTagFv(void *);
void fn_803098E8(void);

extern const f32 lbl_805DDE20;
extern s32 __vt__19TChCrTagInformation[];
extern const f32 lbl_805DDE24;
extern void *TChCrTagInformation__class_name;

void *TChCrTagInformation__ct(void *arg0) {
    __ct__8TChCrTagFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TChCrTagInformation;
    *(void **)((s8 *)arg0 + 0x0) = TChCrTagInformation__class_name;
    *(f32 *)((s8 *)arg0 + 0x28) = lbl_805DDE20;
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DDE24;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DDE20;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DDE24;
    fn_803098E8();
    return arg0;
}

}
