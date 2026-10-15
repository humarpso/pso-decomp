#include <dolphin/mtx.h>
#include "types.h"

extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 VecCopy__FP3VecPC3Vec(void *);
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
