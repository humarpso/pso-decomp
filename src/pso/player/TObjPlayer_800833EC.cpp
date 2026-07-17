#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_camera_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK TObjPlayer__sub_80084038(s32, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_8008453C();
M2C_UNK TObjPlayer__sub_80084764();
s32 get_camera_flag__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80084780();
M2C_UNK TObjPlayer__sub_80084790();
s32 TObjPlayer__sub_800847A8();
s32 TObjPlayer__sub_800847CC();
M2C_UNK setup_tev_swap__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

extern u8 lbl_805D2910;
extern f32 lbl_805D93D0;

void update_camera_effect__10TObjPlayerFPv(void *arg0) {
    if (!(TObjPlayer__sub_800847CC() & 4)) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) & 1) {
            if (TObjPlayer__sub_800847A8() == 1) {
                TCameraCtrl__sub_80069024();
                begin_effect_render__13TParticleCtrlFv();
                TObjPlayer__sub_80084038(lbl_805D2910 << 0x18, 0, lbl_805D93D0);
                end_effect_render__13TParticleCtrlFv();
                TCameraCtrl__sub_80068EF0();
                TObjPlayer__sub_80084790();
            }
        } else {
            TObjPlayer__sub_80084780();
            TObjPlayer__sub_8008453C();
        }
        if (get_camera_flag__10TObjPlayerFv() != 0) {
            TObjPlayer__sub_80084764();
            setup_tev_swap__10TObjPlayerFv();
        }
    }
}

}
