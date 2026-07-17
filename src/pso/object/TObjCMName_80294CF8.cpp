#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__10TObjCMNameFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void set_eff_tag__11TChCrEffTagFi(int);

extern M2C_UNK __vt__10TObjCMName[];
extern const f32 lbl_805DDA90;
extern void *lbl_805D3CEC;
extern void *lbl_805D6520;

void *__ct__10TObjCMNameFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCMName;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3CEC;
    M2C_FIELD(arg0, void **, 0x1C) = lbl_805D6520;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 1;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DDA90;
    set_eff_tag__11TChCrEffTagFi(10);
    return arg0;
}

}
