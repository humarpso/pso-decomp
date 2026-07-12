#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjFish__sub_802ED334(u8 *arg0);
void TObjFish__sub_802ED3A4(void *arg0);
M2C_UNK TBoss2DeRolLe__sub_80035FCC(void *);

s32 TObjFish__sub_802ED334(u8 *arg0) {
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x670);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x630);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x650);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x630) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x650) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x670) == 3)) {
        return 1;
    }
    return 0;
}

extern f32 lbl_805DEA10;
extern f32 lbl_805DEB60;
extern f32 lbl_805DEB98;

void TObjFish__sub_802ED3A4(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6F0);
    if (temp_f2 > lbl_805DEB60) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 - lbl_805DEB60);
        return;
    }
    if (temp_f2 < lbl_805DEB98) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 + lbl_805DEB60);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) lbl_805DEA10;
}

}
