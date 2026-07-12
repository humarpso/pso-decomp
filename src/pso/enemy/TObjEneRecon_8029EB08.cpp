#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_particle_if_active__12TObjEneReconFv(void);
u32 TSceneSora__sub_8029F574(void*);
M2C_UNK reset_ind_tev_stages__13TParticleCtrlFv();

extern u32 lbl_805D65F4;

void update_particle_if_active__12TObjEneReconFv(void) {
    if (((u32) lbl_805D65F4 != 0U) && (TSceneSora__sub_8029F574((void*)lbl_805D65F4) != 0U)) {
        reset_ind_tev_stages__13TParticleCtrlFv();
    }
}

}
