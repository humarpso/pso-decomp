#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_particle_ctrl__10TObjPlayerFPv(s32 *arg0);
M2C_UNK destroy_particle__13TParticleCtrlFPv();

void reset_particle_ctrl__10TObjPlayerFPv(s32 *arg0) {
    *arg0 = 0;
    destroy_particle__13TParticleCtrlFPv();
}

}
