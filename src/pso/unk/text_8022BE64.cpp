#pragma push

#include "types.h"
#include "pso/misc/TTecReverser.h"
#include "pso/unk/TUnk_804CC148.h"

struct V3_8022BEAC { s32 x; s32 y; s32 z; };

struct T_8022BEAC { u8 pad[0x20]; u8 f20[0xC]; u8 f2c[0x10]; f32 f3c; u8 pad2[0x2c]; s32 state; };

extern "C" {
void sub_8022BE64__12TTecReverserFPUcl(u8 *arg0, u8 *arg1, s32 arg2);
void approach_vector_in_place(void *, void *, f32);
void TObjRoomId__sub_80141CF4(void *, void *, f32);
extern V3_8022BEAC TTecLuker__render_scale_vec;
extern const f32 lbl_805DC7B0;
void render__13TUnk_804CC148Fv(T_8022BEAC *self);
}

extern "C" {

}

#pragma pop

#pragma push

#include "types.h"

extern "C" {
void sub_8022C008__13TUnk_804CC148Fv(u8 *arg0);
void count_if_within_range__13TUnk_804CC148Fv(u8 *arg0);
extern u8 lbl_804CC148[];
}

struct Stack_8022BF8C_more_8022be64_1 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 vector_length(void *, f32);
}

extern "C" {

void tick_lifetime__13TUnk_804CC148Fv(void *arg0);
s32 approach_vector_fixed_distance(int, void *, int, f32);
s32 queue_destruction__7TObjectFv(void *);

extern const f64 lbl_8044CDF0;

void TTecReverser::sub_8022BE64(u8 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg1 + 0) = (f32) (*(f32 *)((s8 *)arg1 + 0) + (f32) arg2);
    *(f32 *)((s8 *)arg0 + 0x64) = (f32) *(f32 *)((s8 *)arg1 + 4);
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) *(f32 *)((s8 *)arg1 + 8);
}

void TUnk_804CC148::render() {
    T_8022BEAC *self = (T_8022BEAC *)this;
    V3_8022BEAC v = TTecLuker__render_scale_vec;
    switch (self->state) {
    case 0:
        break;
    case 1:
        approach_vector_in_place(&self->f3c, &v, lbl_805DC7B0);
        break;
    }
    TObjRoomId__sub_80141CF4(self->f20, self->f2c, self->f3c);
}

void TUnk_804CC148::tick_lifetime() {
    *(s32 *)&this->field_6c = 1;
    this->age = (s32) (this->age + 1);
    if ((f32) this->age > *(f32 *)((s8 *)this + 0x70)) {
        queue_destruction__7TObjectFv(this);
    }
}

void TUnk_804CC148::count_if_within_range() {
    u8 *arg0 = (u8 *)this;
    Stack_8022BF8C_more_8022be64_1 stack;
    f32 temp_f1;
    stack.sp8 = *(f32 *)((s8 *)arg0 + 0x20) - *(f32 *)((s8 *)arg0 + 0x7C);
    stack.spC = *(f32 *)((s8 *)arg0 + 0x24) - *(f32 *)((s8 *)arg0 + 0x80);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x28);
    stack.sp10 = temp_f1 - *(f32 *)((s8 *)arg0 + 0x84);
    if (vector_length((void *) (&stack.sp8), (f32) (temp_f1)) <= *(f32 *)((s8 *)arg0 + 0x64)) {
        *(s32 *)((s8 *)arg0 + 0x6C) = (s32) (*(s32 *)((s8 *)arg0 + 0x6C) + 1);
    }
}

void TUnk_804CC148::sub_8022C008() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;

    temp_r3 = (long) (arg0 + 0x20);
    approach_vector_fixed_distance((int) (temp_r3), (void *) (arg0 + 0x7C), (int) (temp_r3), (f32) (*(f32 *)((s8 *)arg0 + 0x64)));
}

}

#pragma pop

#include "types.h"

#define sub_8022C008__13TUnk_804CC148Fv ((s32 (*)())sub_8022C008__13TUnk_804CC148Fv)
#define count_if_within_range__13TUnk_804CC148Fv ((s32 (*)(void *))count_if_within_range__13TUnk_804CC148Fv)
#define lbl_804CC148 ((s32 *)lbl_804CC148)

extern "C" {

void *destroy_technique_base__13TUnk_804CC148Fs(void *arg0, s16 arg1);
void run_task__13TUnk_804CC148Fv(void *arg0);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);

void TUnk_804CC148::run_task() {
    s32 temp_r0;

    temp_r0 = *(s32 *)&this->field_6c;
    switch (temp_r0) {
    case 0:
        sub_8022C008__13TUnk_804CC148Fv();
        count_if_within_range__13TUnk_804CC148Fv(this);
        return;
    case 1:
        this->tick_lifetime();
        return;
    }
}

void *TUnk_804CC148::destroy_technique_base(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804CC148;
        if (*(void **)((s8 *)this + 0xE8) != NULL) { free_collision_body_parts(*(void **)((s8 *)this + 0xE8)); }
        __dt__7TEffectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}

#undef sub_8022C008__13TUnk_804CC148Fv
#undef count_if_within_range__13TUnk_804CC148Fv
#undef lbl_804CC148

#include "types.h"
#include "pso/player/TObjPlayer.h"

#define lbl_804CC148 ((void * *)lbl_804CC148)

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, s32);
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
void *__ct__7TEffectFv(void *);
s32 init_collision_body_parts(u32, void *, s32);
u32 construct_collider_proxy__13TUnk_804AF8A0Fv(u32, void *);
u32 __nw__7TObjectFUl(s32);
extern const f32 lbl_805DC7B4;
extern const f32 lbl_805DC7B8;
extern const f32 lbl_805DC7BC;
extern const f32 lbl_805DC7C0;
extern const f32 lbl_805DC7C4;
extern const f32 lbl_805DC7C8;
u8 *construct_area_technique_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, s32);
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
void *__ct__7TEffectFv(void *);
s32 init_collision_body_parts(u32, void *, s32);
u32 construct_collider_proxy__13TUnk_804AF8A0Fv(u32, void *);
u32 __nw__7TObjectFUl(s32);
extern const f32 lbl_805DC7B4;
extern const f32 lbl_805DC7B8;
extern const f32 lbl_805DC7BC;
extern const f32 lbl_805DC7C0;
extern const f32 lbl_805DC7C4;
extern const f32 lbl_805DC7C8;
u8 *init_technique_effect_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg4);
}

extern "C" {

u8 *init_technique_effect_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg4) {
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    *(void ***)((s8 *)arg0 + 0x18) = lbl_804CC148;
    *(u16 *)((s8 *)arg0 + 0xB4) = 0xFFFF;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    *(f32 *)((s8 *)arg0 + 0x7C) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0x80) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0x84) = lbl_805DC7B4;
    *(s32 *)((s8 *)arg0 + 0xB8) = 0;
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x40) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x44) = lbl_805DC7B8;
    *(s32 *)((s8 *)arg0 + 0x74) = 0;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    if (arg4 < 0) {
        *(s16 *)((s8 *)arg0 + 0x78) = 0;
    } else if (arg4 >= 0x1E) {
        *(s16 *)((s8 *)arg0 + 0x78) = 0x1E;
    } else {
        *(s16 *)((s8 *)arg0 + 0x78) = arg4;
    }
    *(s16 *)((s8 *)arg0 + 0x7A) = TObjPlayer::get_level_tier(*(s16 *)((s8 *)arg0 + 0x78));
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DC7BC;
    *(f32 *)((s8 *)arg0 + 0x30) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DC7C0;
    *(f32 *)((s8 *)arg0 + 0x70) = lbl_805DC7C4;
    *(f32 *)((s8 *)arg0 + 0xBC) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0xC0) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0xC4) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0xC8) = lbl_805DC7C8;
    *(f32 *)((s8 *)arg0 + 0xCC) = lbl_805DC7B8;
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    if (obj_getField1c(*(s32 *)((s8 *)arg0 + 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0x1C) + 0x828) != 0) {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0x40007;
        } else {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0x40107;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xD4) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = construct_collider_proxy__13TUnk_804AF8A0Fv(var_r0, arg0);
    }
    *(u32 *)((s8 *)arg0 + 0xE8) = var_r0;
    if (*(u32 *)((s8 *)arg0 + 0xE8) != 0U) {
        init_collision_body_parts(*(u32 *)((s8 *)arg0 + 0xE8), arg0 + 0xBC, 1);
    }
    return arg0;
}

u8 *construct_area_technique_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    *(void ***)((s8 *)arg0 + 0x18) = lbl_804CC148;
    *(u16 *)((s8 *)arg0 + 0xB4) = 0xFFFF;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x7C, arg3);
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x40) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x44) = lbl_805DC7B8;
    *(s32 *)((s8 *)arg0 + 0x74) = 0;
    *(s32 *)((s8 *)arg0 + 0xB8) = 0;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    if (arg4 < 0) {
        *(s16 *)((s8 *)arg0 + 0x78) = 0;
    } else if (arg4 >= 0x1E) {
        *(s16 *)((s8 *)arg0 + 0x78) = 0x1E;
    } else {
        *(s16 *)((s8 *)arg0 + 0x78) = arg4;
    }
    *(s16 *)((s8 *)arg0 + 0x7A) = TObjPlayer::get_level_tier(*(s16 *)((s8 *)arg0 + 0x78));
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DC7BC;
    *(f32 *)((s8 *)arg0 + 0x30) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DC7B8;
    *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DC7C0;
    *(f32 *)((s8 *)arg0 + 0x70) = lbl_805DC7C4;
    *(f32 *)((s8 *)arg0 + 0xBC) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0xC0) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0xC4) = lbl_805DC7B4;
    *(f32 *)((s8 *)arg0 + 0xC8) = lbl_805DC7C8;
    *(f32 *)((s8 *)arg0 + 0xCC) = lbl_805DC7B8;
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    if (obj_getField1c(*(s32 *)((s8 *)arg0 + 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0x1C) + 0x828) != 0) {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0x40007;
        } else {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0x40107;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xD4) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = construct_collider_proxy__13TUnk_804AF8A0Fv(var_r0, arg0);
    }
    *(u32 *)((s8 *)arg0 + 0xE8) = var_r0;
    if (*(u32 *)((s8 *)arg0 + 0xE8) != 0U) {
        init_collision_body_parts(*(u32 *)((s8 *)arg0 + 0xE8), arg0 + 0xBC, 1);
    }
    return arg0;
}

}

#undef lbl_804CC148
