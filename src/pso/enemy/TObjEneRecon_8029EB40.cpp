#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_scene__12TObjEneReconFi(s32 arg0);
u32 TSceneSora__sub_8029F574(u32);
M2C_UNK play_particle__13TParticleCtrlFPvis(u32, M2C_UNK, s32);

extern u32 lbl_805D65F4;

void notify_scene__12TObjEneReconFi(s32 arg0) {
    u32 temp_r31;
    if ((u32) lbl_805D65F4 != 0U) {
        temp_r31 = TSceneSora__sub_8029F574(lbl_805D65F4);
        if (temp_r31 != 0U) {
            play_particle__13TParticleCtrlFPvis(temp_r31, 0, arg0);
        }
    }
}

}
