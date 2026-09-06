#include "pso/TObjBoss7RaftSplash.h"

void TObjBoss7RaftSplash::run_task() {}

TObjBoss7RaftSplash::~TObjBoss7RaftSplash() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802F15D4 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
void create_splash_particle__8TObjFishFiii(s32, s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u16 TCameraCtrl__sub_8006A5DC();
extern const f32 lbl_805DEC68;
void run_task__19TObjBoss7RaftSplashFv(u8 *arg0);
}

extern "C" {

void spawn_default_particle__8TObjFishFv(void);
M2C_UNK spawn_particle__8TObjFishFiif(f32);

extern const f32 lbl_805DEC90;

void run_task__19TObjBoss7RaftSplashFv(u8 *arg0) {
    Stack_802F15D4 stack;
    f32 temp_f0;
    f32 temp_f1;
    if (TCameraCtrl__sub_8006A5DC() != 5) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + *M2C_FIELD(arg0, f32 **, 0x24));
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x1C);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
        if (temp_f0 >= temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f0 - temp_f1);
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x28));
            stack.spC += *M2C_FIELD(arg0, f32 **, 0x24) - lbl_805DEC68;
            create_splash_particle__8TObjFishFiii((s32) &stack.sp8, 0x200, (s32) (arg0 + 0x34));
        }
    }
}

void spawn_default_particle__8TObjFishFv(void) {
    spawn_particle__8TObjFishFiif(lbl_805DEC90);
}

}
