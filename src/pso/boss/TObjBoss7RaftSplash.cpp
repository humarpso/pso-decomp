#include "pso/TObjBoss7RaftSplash.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802F15D4 {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_802F16CC___vt__19TObjBoss7RaftSplash { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
void create_splash_particle__8TObjFishFiii(s32, s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u16 TCameraCtrl__sub_8006A5DC();
extern const f32 lbl_805DEC68;
void run_task__19TObjBoss7RaftSplashFv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 rand_signed_unit(void);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern RecoveredGlobal_802F16CC___vt__19TObjBoss7RaftSplash __vt__19TObjBoss7RaftSplash;
extern s32 lbl_805D3FE8;
extern const f32 lbl_805DEC68;
extern const f32 lbl_805DEC88;
extern const f32 lbl_805DEC8C;
u8 *TObjBoss7RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4);
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

TObjBoss7RaftSplash::~TObjBoss7RaftSplash() {}
u8 *TObjBoss7RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__19TObjBoss7RaftSplash.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3FE8;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (lbl_805DEC68 * (lbl_805DEC88 + rand_signed_unit()));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * (lbl_805DEC8C * (f32) rand()));
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, arg3);
    M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    return arg0;
}

void spawn_default_particle__8TObjFishFv(void) {
    spawn_particle__8TObjFishFiif(lbl_805DEC90);
}

}
