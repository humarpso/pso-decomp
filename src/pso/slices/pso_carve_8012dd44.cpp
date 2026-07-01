#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemProShield__sub_8010B734(void *);
s32 fn_80121200();
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK fn_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
extern const f32 lbl_805DAF58;

void fn_8012DD44(void *arg0) {
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = fn_80121200();
    if (TItemProShield__sub_8010B734(arg0) != 6) {
        if (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x21C)) {
            fn_803D9624(0, lbl_805DAF58, M2C_FIELD(arg0, f32 *, 0x224), lbl_805DAF58);
        }
        var_r30 = M2C_FIELD(arg0, s32 *, 0x220);
    } else {
        if (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x21C)) {
            TObjContainerIdo__sub_803D96A8(0, -M2C_FIELD(arg0, s32 *, 0x220));
        }
        var_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0x220) * 2) / 3;
    }
    if ((temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x20C)) || (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x214))) {
        TObjBoss2Tunnel__sub_803D929C(0, var_r30);
    }
    if ((temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x210)) || (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x218))) {
        TObjBoss2Tunnel__sub_803D929C(0, -var_r30);
    }
}

}
