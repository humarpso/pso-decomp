#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern "C" {

void update_wing_segments(u8 *arg0);
s32 eval_bezier_curve__12TBoss8DragonFPviiPvf(void *, int, int, void *, f32);
int VecCopy__FP3VecPC3Vec(s32, s32, s32);
s32 copy_pos__11TNowLoadingFPv(void *, void *);

void TBoss8Dragon::copy_position(s32 arg1) {
    s32 arg0 = (s32)this;
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x20, arg0);
}

void update_wing_segments(u8 *arg0) {
    eval_bezier_curve__12TBoss8DragonFPviiPvf((void *) (arg0 + 0x48), (int) (*(s32 *)((s8 *)arg0 + 0x90)), (int) (0), (void *) (arg0 + 0x20), (f32) (*(f32 *)((s8 *)arg0 + 0x88)));
    eval_bezier_curve__12TBoss8DragonFPviiPvf((void *) (arg0 + 0x48), (int) (*(s32 *)((s8 *)arg0 + 0x90)), (int) (0), (void *) (arg0 + 0x2C), (f32) (*(f32 *)((s8 *)arg0 + 0x8C)));
    if (*(void **)((s8 *)arg0 + 0x38) != 0) {
        copy_pos__11TNowLoadingFPv(*(void **)((s8 *)arg0 + 0x38), (void *) (arg0 + 0x20));
    }
    if (*(void **)((s8 *)arg0 + 0x3C) != 0) {
        copy_pos__11TNowLoadingFPv(*(void **)((s8 *)arg0 + 0x3C), (void *) (arg0 + 0x20));
    }
    if (*(void **)((s8 *)arg0 + 0x40) != 0) {
        copy_pos__11TNowLoadingFPv(*(void **)((s8 *)arg0 + 0x40), (void *) (arg0 + 0x2C));
    }
    if (*(void **)((s8 *)arg0 + 0x44) != 0) {
        copy_pos__11TNowLoadingFPv(*(void **)((s8 *)arg0 + 0x44), (void *) (arg0 + 0x2C));
    }
}

}
