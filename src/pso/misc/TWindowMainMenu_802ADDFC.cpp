#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_802ADDFC(void *arg0, f32 farg0);
void TWindowMainMenu__sub_802ADE78(s32 arg0);
s32 TWindowMainMenu__sub_802ADC40();
s32 TWindowMainMenu__sub_802ADCD8();

extern f32 lbl_805DE15C;
extern f32 lbl_805DE160;
extern f32 lbl_805DE164;

void TWindowMainMenu__sub_802ADDFC(void *arg0, f32 farg0) {
    if (TWindowMainMenu__sub_802ADCD8() != 0) {
        farg0 += lbl_805DE15C;
    } else {
        farg0 += lbl_805DE160;
    }
    farg0 += lbl_805DE164;
    if (M2C_FIELD(arg0, f32 *, 0x3C) != farg0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 8;
    }
}

extern f32 lbl_805DE150;

void TWindowMainMenu__sub_802ADE78(s32 arg0) {
    TWindowMainMenu__sub_802ADDFC((void *)(arg0), lbl_805DE150 * (f32) TWindowMainMenu__sub_802ADC40());
}

}
