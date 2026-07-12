#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TBoss3Volopt__sub_8003F1AC();
M2C_UNK TCameraCtrl__sub_8006A410(void *, M2C_UNK);
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
extern s32 lbl_805D53A0;

void handle_6x17_set_entity_position_and_angle(u8 *arg0) {
    u8 *temp_r3;

    TBoss3Volopt__sub_8003F1AC();
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(temp_r3 + 0x38, arg0 + 4);
        M2C_FIELD(temp_r3, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        TObjPlayer__sub_80154E3C(temp_r3);
        if ((s32) M2C_FIELD(arg0, u16 *, 2) == (s32) lbl_805D53A0) {
            TCameraCtrl__sub_8006A410(temp_r3, 0);
        }
    }
}

}
