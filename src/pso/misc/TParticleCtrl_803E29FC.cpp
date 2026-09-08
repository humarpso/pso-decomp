#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
extern "C" {
M2C_UNK load_camera_view_matrix();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E2224();
M2C_UNK TObjPlayer__sub_803E224C();
void TParticleCtrl__sub_803E2B68(s32 arg0);
}

extern "C" {

void reset_particles__13TParticleCtrlFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void reset_particles__13TParticleCtrlFv(void) {
    TObjPlayer__sub_803E2248();
}
void TParticleCtrl__sub_803E2B68(s32 arg0) {
    load_camera_view_matrix();
    if (arg0 != 0) {
        TObjPlayer__sub_803E2224();
    } else {
        setup_render__10TObjPlayerFv();
    }
    TObjPlayer__sub_803E224C();
}

}
