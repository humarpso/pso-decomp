#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dt__13TParticleCtrlFPvs(void *arg0, s16 arg1);
u32 free_handle__13TParticleCtrlFPv(void *arg0);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
s32 check_value_equals__13TQuestColCtrlFPvi(s32, s32);
M2C_UNK queue_destruction__7TObjectFv();

extern s32 TParticleCtrl__data_805D2938;

u32 free_handle__13TParticleCtrlFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) && (check_value_equals__13TQuestColCtrlFPvi(M2C_FIELD(arg0, s32 *, 0x20), TParticleCtrl__data_805D2938) == 0)) {
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    }
    return M2C_FIELD(arg0, u32 *, 0x20);
}

extern M2C_UNK lbl_804C3FF0[];

void *dt__13TParticleCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FF0;
        if (free_handle__13TParticleCtrlFPv((void *)(arg0)) != 0U) {
            queue_destruction__7TObjectFv();
        }
        __dt__7TObjectFv(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
