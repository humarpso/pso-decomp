#include "pso/TObjBoss2RaftSplash.h"

#include "types.h"

struct Stack_8003AED4 {
    s32 sp8;
    f32 spC;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D85B0;
}

extern "C" {

void TObjBoss2RaftSplash::run_task() {
    u8 *arg0 = (u8 *)this;
    Stack_8003AED4 stack;
    f32 temp_f0;
    f32 temp_f1;
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (*(f32 *)((s8 *)arg0 + 0x1C) + **(f32 **)((s8 *)arg0 + 0x24));
    temp_f0 = *(f32 *)((s8 *)arg0 + 0x1C);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x20);
    if (temp_f0 >= temp_f1) {
        *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (temp_f0 - temp_f1);
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x28));
        stack.spC += **(f32 **)((s8 *)arg0 + 0x24) - lbl_805D85B0;
        TObjBoss2RaftSplash::spawn_splash((s32) &stack.sp8, 0x170, (s32) (arg0 + 0x34));
    }
}
TObjBoss2RaftSplash::~TObjBoss2RaftSplash() {}

}
