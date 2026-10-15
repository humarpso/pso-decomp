#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

struct Stack_8031C190 {
    s32 sp8;
    f32 spC;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 actor_frame_tick;
extern const f32 TObjEneRecon__data_805DF3C0;
}

extern "C" {

void TObjEneRecon::update_ground_probe() {
    u8 *arg0 = (u8 *)this;
    Stack_8031C190 stack;
    u8 *temp_r3;
    if ((actor_frame_tick % 5) == 0) {
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        stack.spC += TObjEneRecon__data_805DF3C0;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            *(s32 *)((s8 *)arg0 + 0x418) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 4)) + 0x18);
            VecCopy__FP3VecPC3Vec(arg0 + 0x41C, *(u8 **)((s8 *)temp_r3 + 4));
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x41C, arg0 + 0x38);
        }
    }
    if (*(s32 *)((s8 *)arg0 + 0x418) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

}
