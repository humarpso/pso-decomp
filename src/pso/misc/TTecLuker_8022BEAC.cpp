#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8022BF8C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 TBoss6Kakusan__sub_803D8BD8(void *, f32);
void TTecLuker__sub_8022BF8C(u8 *arg0);
}

extern "C" {

void TTecLuker__sub_8022C008(u8 *arg0);
void tick_lifetime__9TTecLukerFPv(void *arg0);
M2C_UNK TEffStarLightChild__sub_80141FBC(int, void *, int, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f64 lbl_8044CDF0;

void tick_lifetime__9TTecLukerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x68) > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void TTecLuker__sub_8022BF8C(u8 *arg0) {
    Stack_8022BF8C stack;
    f32 temp_f1;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x20) - M2C_FIELD(arg0, f32 *, 0x7C);
    stack.spC = M2C_FIELD(arg0, f32 *, 0x24) - M2C_FIELD(arg0, f32 *, 0x80);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x28);
    stack.sp10 = temp_f1 - M2C_FIELD(arg0, f32 *, 0x84);
    if (TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8), (f32) (temp_f1)) <= M2C_FIELD(arg0, f32 *, 0x64)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + 1);
    }
}

void TTecLuker__sub_8022C008(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = (long) (arg0 + 0x20);
    TEffStarLightChild__sub_80141FBC((int) (temp_r3), (void *) (arg0 + 0x7C), (int) (temp_r3), (f32) (M2C_FIELD(arg0, f32 *, 0x64)));
}

}
