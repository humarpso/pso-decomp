#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_intro_stage__12TObjEneReconFv(void);
M2C_UNK update_camera_sequence__9TObjEneDDFPv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK TCameraCtrl__sub_803D8934(M2C_UNK, s32, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D6B08;
extern s32 lbl_805D6B0C;

void advance_intro_stage__12TObjEneReconFv(void) {
    switch ((s32) lbl_805D6B08) {
    case 0:
        TObjPlayer__sub_803D9B2C();
        update_camera_sequence__9TObjEneDDFPv();
        TCameraCtrl__sub_803D8934(0, lbl_805D6B0C, lbl_805D6B0C);
        TObjPlayer__sub_803D9B78();
        break;
    case 10:
        begin_effect_render__13TParticleCtrlFv();
        break;
    }
    lbl_805D6B08 += 1;
}

}
