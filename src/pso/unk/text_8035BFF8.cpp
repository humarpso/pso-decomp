#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
extern const f32 lbl_805E0168;
s32 fn_8035BFF8(void);
}

extern "C" {

s32 fn_8035BFF8(void) {
    Vec position;
    VecCopy__FP3VecPC3Vec((void *) (&position.x));
    return clamp_velocity__15TObjBoss2TunnelFPv(&position.x) > lbl_805E0168;
}

}
