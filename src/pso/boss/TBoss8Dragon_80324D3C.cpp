#include "types.h"

extern "C" {

void copy_position__12TBoss8DragonFii(s32 arg0, s32 arg1);
void update_wing_segments(u8 *arg0);
s32 eval_bezier_curve__12TBoss8DragonFPviiPvf(void *, int, int, void *, f32);
int VecCopy__FP3VecPC3Vec(s32, s32, s32);
s32 copy_pos__11TNowLoadingFPvPv(void *, void *);

void copy_position__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x20, arg0);
}

void update_wing_segments(u8 *arg0) {
    eval_bezier_curve__12TBoss8DragonFPviiPvf((void *) (arg0 + 0x48), (int) (*(s32 *)((s8 *)arg0 + 0x90)), (int) (0), (void *) (arg0 + 0x20), (f32) (*(f32 *)((s8 *)arg0 + 0x88)));
    eval_bezier_curve__12TBoss8DragonFPviiPvf((void *) (arg0 + 0x48), (int) (*(s32 *)((s8 *)arg0 + 0x90)), (int) (0), (void *) (arg0 + 0x2C), (f32) (*(f32 *)((s8 *)arg0 + 0x8C)));
    if (*(void **)((s8 *)arg0 + 0x38) != 0) {
        copy_pos__11TNowLoadingFPvPv(*(void **)((s8 *)arg0 + 0x38), (void *) (arg0 + 0x20));
    }
    if (*(void **)((s8 *)arg0 + 0x3C) != 0) {
        copy_pos__11TNowLoadingFPvPv(*(void **)((s8 *)arg0 + 0x3C), (void *) (arg0 + 0x20));
    }
    if (*(void **)((s8 *)arg0 + 0x40) != 0) {
        copy_pos__11TNowLoadingFPvPv(*(void **)((s8 *)arg0 + 0x40), (void *) (arg0 + 0x2C));
    }
    if (*(void **)((s8 *)arg0 + 0x44) != 0) {
        copy_pos__11TNowLoadingFPvPv(*(void **)((s8 *)arg0 + 0x44), (void *) (arg0 + 0x2C));
    }
}

}
