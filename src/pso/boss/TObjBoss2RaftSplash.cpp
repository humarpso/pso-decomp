#include "pso/TObjBoss2RaftSplash.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8003AED4 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
void spawn_splash__19TObjBoss2RaftSplashFiii(s32, s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D85B0;
void run_task__19TObjBoss2RaftSplashFv(u8 *arg0);
}

extern "C" {

void run_task__19TObjBoss2RaftSplashFv(u8 *arg0) {
    Stack_8003AED4 stack;
    f32 temp_f0;
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + *M2C_FIELD(arg0, f32 **, 0x24));
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    if (temp_f0 >= temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f0 - temp_f1);
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x28));
        stack.spC += *M2C_FIELD(arg0, f32 **, 0x24) - lbl_805D85B0;
        spawn_splash__19TObjBoss2RaftSplashFiii((s32) &stack.sp8, 0x170, (s32) (arg0 + 0x34));
    }
}
TObjBoss2RaftSplash::~TObjBoss2RaftSplash() {}

}
