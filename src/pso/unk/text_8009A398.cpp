#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8009A398_lbl_8048FE64 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK subtract_vector(void *, void *);
extern RecoveredGlobal_8009A398_lbl_8048FE64 lbl_8048FE64;
extern s32 bringer_tp_absorb_effect_name;
extern const f32 lbl_805D9860;
u8 *fn_8009A398(u8 *arg0, M2C_UNK arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

typedef char RecoveredGlobal_8009A398_lbl_8048FE64_size[sizeof(RecoveredGlobal_8009A398_lbl_8048FE64) == 0x18 ? 1 : -1];
u8 *fn_8009A398(u8 *arg0, M2C_UNK arg1, u8 *arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8048FE64.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) bringer_tp_absorb_effect_name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x34), (void *) (arg3));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x40), (void *) (arg0 + 0x34));
    subtract_vector((void *) (arg0 + 0x40), (void *) (arg0 + 0x28));
    M2C_FIELD(arg0, f32 *, 0x4C) = update_scale__15TObjBoss2TunnelFPv((void *) (arg0 + 0x40));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805D9860;
    return arg0;
}

}
