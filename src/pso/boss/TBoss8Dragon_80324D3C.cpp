#include "types.h"
#include "pso/TBoss5GryphonLightningWing.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/misc/TNowLoading.h"

extern "C" {

s32 eval_bezier_curve__12TBoss8DragonFPviiPvf(void *, int, int, void *, f32);
int VecCopy__FP3VecPC3Vec(s32, s32, s32);

void TBoss8Dragon::copy_position(s32 arg1) {
    s32 arg0 = (s32)this;
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x20, arg0);
}

void TBoss5GryphonLightningWing::update_wing_segments() {
    u8 *arg0 = (u8 *)this;
    eval_bezier_curve__12TBoss8DragonFPviiPvf((void *) (arg0 + 0x48), (int) (*(s32 *)((s8 *)arg0 + 0x90)), (int) (0), (void *) (arg0 + 0x20), (f32) (*(f32 *)((s8 *)arg0 + 0x88)));
    eval_bezier_curve__12TBoss8DragonFPviiPvf((void *) (arg0 + 0x48), (int) (*(s32 *)((s8 *)arg0 + 0x90)), (int) (0), (void *) (arg0 + 0x2C), (f32) (*(f32 *)((s8 *)arg0 + 0x8C)));
    if (*(void **)((s8 *)arg0 + 0x38) != 0) {
        ((TNowLoading *)(*(void **)((s8 *)arg0 + 0x38)))->copy_pos((void *) (arg0 + 0x20));
    }
    if (*(void **)((s8 *)arg0 + 0x3C) != 0) {
        ((TNowLoading *)(*(void **)((s8 *)arg0 + 0x3C)))->copy_pos((void *) (arg0 + 0x20));
    }
    if (*(void **)((s8 *)arg0 + 0x40) != 0) {
        ((TNowLoading *)(*(void **)((s8 *)arg0 + 0x40)))->copy_pos((void *) (arg0 + 0x2C));
    }
    if (*(void **)((s8 *)arg0 + 0x44) != 0) {
        ((TNowLoading *)(*(void **)((s8 *)arg0 + 0x44)))->copy_pos((void *) (arg0 + 0x2C));
    }
}

}
