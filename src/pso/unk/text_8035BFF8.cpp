#include <dolphin/mtx.h>
#include "types.h"
#include "pso/boss/TObjBoss2Tunnel.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *);
extern const f32 lbl_805E0168;
s32 fn_8035BFF8(void);
s32 fn_8035BFF8(void) {
    Vec position;
    VecCopy__FP3VecPC3Vec((void *) (&position.x));
    return ((TObjBoss2Tunnel *)(&position.x))->clamp_velocity() > lbl_805E0168;
}

}
