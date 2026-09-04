#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChCrTagInformation__ct(void *arg0);
void __ct__8TChCrTagFv(void *);
void fn_803098E8(void);

extern const f32 lbl_805DDE20;
extern M2C_UNK __vt__19TChCrTagInformation[];
extern const f32 lbl_805DDE24;
extern void *lbl_805D3D98;

void *TChCrTagInformation__ct(void *arg0) {
    __ct__8TChCrTagFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TChCrTagInformation;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D98;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDE20;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDE24;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDE20;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDE24;
    fn_803098E8();
    return arg0;
}

}
