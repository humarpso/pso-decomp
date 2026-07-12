#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 validate_ctrl__13TParticleCtrlFPv(void *arg0);
s32 TQuestColCtrl__sub_8003F3C8(s32, s32);

extern s32 TParticleCtrl__data_805D2938;

u32 validate_ctrl__13TParticleCtrlFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) && (TQuestColCtrl__sub_8003F3C8(M2C_FIELD(arg0, s32 *, 4), TParticleCtrl__data_805D2938) == 0)) {
        M2C_FIELD(arg0, u32 *, 4) = 0U;
    }
    return M2C_FIELD(arg0, u32 *, 4);
}

}
