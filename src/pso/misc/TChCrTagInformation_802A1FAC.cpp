#include "types.h"
#include "pso/misc/TChCrTagInformation_802A1FAC.h"
#include "pso/unk/text_803098DC.h"
#include "pso/misc/TChCrTagInformation.h"

extern "C" {

void __ct__8TChCrTagFv(void *);

extern const f32 lbl_805DDE20;
extern s32 __vt__19TChCrTagInformation[];
extern const f32 lbl_805DDE24;
extern void *TChCrTagInformation__class_name;

void *TChCrTagInformation__ct(TChCrTagInformation *arg0) {
    __ct__8TChCrTagFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TChCrTagInformation;
    *(void * *)&arg0->m_name = TChCrTagInformation__class_name;
    arg0->m_28 = lbl_805DDE20;
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DDE24;
    arg0->m_34 = lbl_805DDE20;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DDE24;
    fn_803098E8();
    return arg0;
}

}
