#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_8022BEAC { s32 x; s32 y; s32 z; };

struct T_8022BEAC { u8 pad[0x20]; u8 f20[0xC]; u8 f2c[0x10]; f32 f3c; u8 pad2[0x2c]; s32 state; };

extern "C" {
void fn_8022BE64(u8 *arg0, u8 *arg1, s32 arg2);
void fn_8008271C(void *, void *, f32);
void TObjRoomId__sub_80141CF4(void *, void *, f32);
extern V3_8022BEAC lbl_8044CDE0;
extern const f32 lbl_805DC7B0;
void render__9TTecLukerFv(T_8022BEAC *self);
}

extern "C" {

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8022BF8C_more_8022be64_1 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 vector_length(void *, f32);
void TTecLuker__sub_8022BF8C(u8 *arg0);
}

extern "C" {

void TTecLuker__sub_8022C008(u8 *arg0);
void tick_lifetime__9TTecLukerFPv(void *arg0);
M2C_UNK approach_vector_fixed_distance(int, void *, int, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f64 lbl_8044CDF0;

void fn_8022BE64(u8 *arg0, u8 *arg1, s32 arg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) + (f32) arg2);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

void render__9TTecLukerFv(T_8022BEAC *self) {
    V3_8022BEAC v = lbl_8044CDE0;
    switch (self->state) {
    case 0:
        break;
    case 1:
        fn_8008271C(&self->f3c, &v, lbl_805DC7B0);
        break;
    }
    TObjRoomId__sub_80141CF4(self->f20, self->f2c, self->f3c);
}

void tick_lifetime__9TTecLukerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x68) > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void TTecLuker__sub_8022BF8C(u8 *arg0) {
    Stack_8022BF8C_more_8022be64_1 stack;
    f32 temp_f1;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x20) - M2C_FIELD(arg0, f32 *, 0x7C);
    stack.spC = M2C_FIELD(arg0, f32 *, 0x24) - M2C_FIELD(arg0, f32 *, 0x80);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x28);
    stack.sp10 = temp_f1 - M2C_FIELD(arg0, f32 *, 0x84);
    if (vector_length((void *) (&stack.sp8), (f32) (temp_f1)) <= M2C_FIELD(arg0, f32 *, 0x64)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + 1);
    }
}

void TTecLuker__sub_8022C008(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = (long) (arg0 + 0x20);
    approach_vector_fixed_distance((int) (temp_r3), (void *) (arg0 + 0x7C), (int) (temp_r3), (f32) (M2C_FIELD(arg0, f32 *, 0x64)));
}

}

#pragma pop
