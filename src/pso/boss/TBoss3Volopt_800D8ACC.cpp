#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800D8F78 {
    M2C_UNK sp8;
    f32 spC;
};

typedef struct Vec_800D8C48 {
    f32 x, y, z;
} Vec_800D8C48;

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK create_timed_particle_emitter(void *, int, int, int);
M2C_UNK spawn_particle_effect(void *, int, f32);
extern const f32 lbl_805DA3C0;
void TBoss3Volopt__sub_800D8F78(s32 arg0);
s32 TObjPlayer__sub_800F06B4(int, int);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TBoss3Volopt__sub_800D8B30(s32 arg0);
void TBoss3Volopt__sub_800D8F78(s32 arg0);
s32 TBoss3Volopt__sub_800F05A0(int);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TBoss3Volopt__sub_800D8D88(s32 arg0);
void TBoss3Volopt__sub_800D8F78(s32 arg0);
s32 TBoss3Volopt__sub_800F05A0(int);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TBoss3Volopt__sub_800D8E80(s32 arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK spawn_particle_effect(void *, int, f32);
s32 TObjPlayer__sub_800F06B4(int, int);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 lbl_805DA3C0;
void TBoss3Volopt__sub_800D8C48(s32 arg0);
}

extern "C" {

void create_breakup_mdl__12TBoss3VoloptFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK TBreakUpMdl__ct(void*, s32, s32, s32, s32, s32, s32);
void* __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_05;

void create_breakup_mdl__12TBoss3VoloptFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void* obj = __nw__7TObjectFUl(0x54);
    if (obj != 0) {
        TBreakUpMdl__ct(obj, tl_05, arg0, arg1, arg2, arg3, arg4);
    }
}

void TBoss3Volopt__sub_800D8B30(s32 arg0) {
    s32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        TBoss3Volopt__sub_8022675C((int) (0x3AB3C), (void *) (arg0), (int) (0), (int) (0));
        return;
    case 28:
    case 29:
        TBoss3Volopt__sub_8022675C((int) (0x4003AD32), (void *) (arg0), (int) (0), (int) (0));
        return;
    case 34:
        TBoss3Volopt__sub_8022675C((int) (0x4003B22A), (void *) (arg0), (int) (0), (int) (0));
        return;
    case 35:
        TBoss3Volopt__sub_8022675C((int) (0x4003A35A), (void *) (arg0), (int) (0), (int) (0));
        return;
    case 19:
    case 20:
        TBoss3Volopt__sub_8022675C((int) (0x3AD43), (void *) (arg0), (int) (0), (int) (0));
        return;
    case 21:
    case 22:
        TBoss3Volopt__sub_8022675C((int) (0x4003AD3F), (void *) (arg0), (int) (0), (int) (0));
        return;
    default:
        TBoss3Volopt__sub_8022675C((int) (TObjPlayer__sub_800F06B4((int) (0x4003AD06), (int) (0x1E))), (void *) (arg0), (int) (0), (int) (0));
        return;
    }
}

void TBoss3Volopt__sub_800D8C48(s32 arg0) {
    Vec_800D8C48 v;
    f32 y;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        TBoss3Volopt__sub_8022675C(0x3AB3C, (void *)arg0, 0, 0);
        break;
    case 28:
    case 29:
        TBoss3Volopt__sub_8022675C(0x4003AD32, (void *)arg0, 0, 0);
        break;
    case 34:
        TBoss3Volopt__sub_8022675C(0x4003B22A, (void *)arg0, 0, 0);
        break;
    case 35:
        TBoss3Volopt__sub_8022675C(0x4003A35A, (void *)arg0, 0, 0);
        break;
    case 19:
    case 20:
        TBoss3Volopt__sub_8022675C(0x3AD43, (void *)arg0, 0, 0);
        break;
    case 21:
    case 22:
        TBoss3Volopt__sub_8022675C(0x4003AD3F, (void *)arg0, 0, 0);
        break;
    default:
        TBoss3Volopt__sub_8022675C(TObjPlayer__sub_800F06B4(0x4003AD06, 0x1E), (void *)arg0, 0, 0);
        break;
    }
    VecCopy__FP3VecPC3Vec(&v, (void *)arg0);
    y = v.y;
    v.y = y + lbl_805DA3C0;
    spawn_particle_effect(&v, 0xE6, y);
}

void TBoss3Volopt__sub_800D8D88(s32 arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        TBoss3Volopt__sub_8022675C(0x3AB3C, (void *)arg0, 0, 0);
        break;
    case 28:
    case 29:
        TBoss3Volopt__sub_8022675C(0x4003AB31, (void *)arg0, 0, 0);
        break;
    case 34:
        TBoss3Volopt__sub_8022675C(0x4003B22A, (void *)arg0, 0, 0);
        break;
    case 35:
        TBoss3Volopt__sub_8022675C(0x4003A359, (void *)arg0, 0, 0);
        break;
    default:
        TBoss3Volopt__sub_8022675C(TBoss3Volopt__sub_800F05A0(0x4003AB20), (void *)arg0, 0, 0);
        break;
    }
    TBoss3Volopt__sub_800D8F78(arg0);
}

void TBoss3Volopt__sub_800D8E80(s32 arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        TBoss3Volopt__sub_8022675C(0x3AB3C, (void *)arg0, 0, 0);
        break;
    case 28:
    case 29:
        TBoss3Volopt__sub_8022675C(0x4003AB31, (void *)arg0, 0, 0);
        break;
    case 34:
        TBoss3Volopt__sub_8022675C(0x4003B22A, (void *)arg0, 0, 0);
        break;
    case 35:
        TBoss3Volopt__sub_8022675C(0x4003A359, (void *)arg0, 0, 0);
        break;
    default:
        TBoss3Volopt__sub_8022675C(TBoss3Volopt__sub_800F05A0(0x4003AB37), (void *)arg0, 0, 0);
        break;
    }
    TBoss3Volopt__sub_800D8F78(arg0);
}

void TBoss3Volopt__sub_800D8F78(s32 arg0) {
    Stack_800D8F78 stack;
    f32 temp_f1;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0));
    create_timed_particle_emitter((void *) (arg0), (int) (0xEA), (int) (0xA), (int) (0x1E));
    temp_f1 = stack.spC;
    stack.spC = temp_f1 + lbl_805DA3C0;
    spawn_particle_effect((void *) (&stack.sp8), (int) (0xE9), (f32) (temp_f1));
}

}
