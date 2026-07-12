#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_photon_blast_active__11TCameraCtrlFv(void);
void *TPhotonMylla__sub_80154CB4(u16);
s32 TCameraCtrl__sub_8003F3EC();

extern u16 lbl_80483770[];
extern u16 lbl_805D271C;

s32 is_photon_blast_active__11TCameraCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    void *temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4(lbl_805D271C);
    if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800)) {
        return 1;
    }
    for (var_r29 = 0; var_r29 < 6; var_r29 += 1) {
        if ((TPhotonMylla__sub_80154CB4(lbl_80483770[var_r29]) != NULL) && (TCameraCtrl__sub_8003F3EC() == 0)) {
            return 0;
        }
    }
    return 1;
}

}
