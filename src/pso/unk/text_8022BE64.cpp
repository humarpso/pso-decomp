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
void approach_vector_in_place(void *, void *, f32);
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

extern "C" {
void TTecLuker__sub_8022C008(u8 *arg0);
void count_if_within_range__9TTecLukerFPv(u8 *arg0);
extern u8 lbl_804CC148[];
}

#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8022BF8C_more_8022be64_1 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 vector_length(void *, f32);
}

extern "C" {

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
        approach_vector_in_place(&self->f3c, &v, lbl_805DC7B0);
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

void count_if_within_range__9TTecLukerFPv(u8 *arg0) {
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

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define TTecLuker__sub_8022C008 ((M2C_UNK (*)())TTecLuker__sub_8022C008)
#define count_if_within_range__9TTecLukerFPv ((M2C_UNK (*)(void *))count_if_within_range__9TTecLukerFPv)
#define lbl_804CC148 ((M2C_UNK *)lbl_804CC148)

struct Base_8022C03C_8022BEAC { char pad[0x18]; };
struct VObj_8022C03C_8022BEAC : Base_8022C03C_8022BEAC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

extern "C" {

void *destroy_technique_base__9TTecLukerFPvs(void *arg0, s16 arg1);
void dispatch_state__9TTecLukerFPv(void *arg0);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);

void dispatch_state__9TTecLukerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
    switch (temp_r0) {
    case 0:
        TTecLuker__sub_8022C008();
        count_if_within_range__9TTecLukerFPv(arg0);
        return;
    case 1:
        ((VObj_8022C03C_8022BEAC *)arg0)->m5();
        return;
    }
}

void *destroy_technique_base__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC148;
        if (M2C_FIELD(arg0, void **, 0xE8) != NULL) { free_collision_body_parts(M2C_FIELD(arg0, void **, 0xE8)); }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#undef TTecLuker__sub_8022C008
#undef count_if_within_range__9TTecLukerFPv
#undef lbl_804CC148

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define lbl_804CC148 ((void * *)lbl_804CC148)

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
void *__ct__7TEffectFv(void *);
M2C_UNK init_collision_body_parts(u32, void *, M2C_UNK);
u32 construct_collider_proxy__10TObjPlayerFPv(u32, void *);
u32 __nw__7TObjectFUl(M2C_UNK);
s16 get_level_tier__10TObjPlayerFi(s16);
extern const f32 lbl_805DC7B4;
extern const f32 lbl_805DC7B8;
extern const f32 lbl_805DC7BC;
extern const f32 lbl_805DC7C0;
extern const f32 lbl_805DC7C4;
extern const f32 lbl_805DC7C8;
u8 *construct_area_technique_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
void *__ct__7TEffectFv(void *);
M2C_UNK init_collision_body_parts(u32, void *, M2C_UNK);
u32 construct_collider_proxy__10TObjPlayerFPv(u32, void *);
u32 __nw__7TObjectFUl(M2C_UNK);
s16 get_level_tier__10TObjPlayerFi(s16);
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
    M2C_FIELD(arg0, void ***, 0x18) = lbl_804CC148;
    M2C_FIELD(arg0, u16 *, 0xB4) = 0xFFFF;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    M2C_FIELD(arg0, f32 *, 0x7C) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0x80) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0x84) = lbl_805DC7B4;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805DC7B8;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (arg4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x78) = 0;
    } else if (arg4 >= 0x1E) {
        M2C_FIELD(arg0, s16 *, 0x78) = 0x1E;
    } else {
        M2C_FIELD(arg0, s16 *, 0x78) = arg4;
    }
    M2C_FIELD(arg0, s16 *, 0x7A) = get_level_tier__10TObjPlayerFi(M2C_FIELD(arg0, s16 *, 0x78));
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DC7BC;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DC7C0;
    M2C_FIELD(arg0, f32 *, 0x70) = lbl_805DC7C4;
    M2C_FIELD(arg0, f32 *, 0xBC) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DC7C8;
    M2C_FIELD(arg0, f32 *, 0xCC) = lbl_805DC7B8;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    if (obj_getField1c(M2C_FIELD(arg0, s32 *, 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C) + 0x828) != 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0x40007;
        } else {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0x40107;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = construct_collider_proxy__10TObjPlayerFPv(var_r0, arg0);
    }
    M2C_FIELD(arg0, u32 *, 0xE8) = var_r0;
    if (M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
        init_collision_body_parts(M2C_FIELD(arg0, u32 *, 0xE8), arg0 + 0xBC, 1);
    }
    return arg0;
}

u8 *construct_area_technique_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    M2C_FIELD(arg0, void ***, 0x18) = lbl_804CC148;
    M2C_FIELD(arg0, u16 *, 0xB4) = 0xFFFF;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x7C, arg3);
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805DC7B8;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (arg4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x78) = 0;
    } else if (arg4 >= 0x1E) {
        M2C_FIELD(arg0, s16 *, 0x78) = 0x1E;
    } else {
        M2C_FIELD(arg0, s16 *, 0x78) = arg4;
    }
    M2C_FIELD(arg0, s16 *, 0x7A) = get_level_tier__10TObjPlayerFi(M2C_FIELD(arg0, s16 *, 0x78));
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DC7BC;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DC7C0;
    M2C_FIELD(arg0, f32 *, 0x70) = lbl_805DC7C4;
    M2C_FIELD(arg0, f32 *, 0xBC) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DC7C8;
    M2C_FIELD(arg0, f32 *, 0xCC) = lbl_805DC7B8;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    if (obj_getField1c(M2C_FIELD(arg0, s32 *, 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C) + 0x828) != 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0x40007;
        } else {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0x40107;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = construct_collider_proxy__10TObjPlayerFPv(var_r0, arg0);
    }
    M2C_FIELD(arg0, u32 *, 0xE8) = var_r0;
    if (M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
        init_collision_body_parts(M2C_FIELD(arg0, u32 *, 0xE8), arg0 + 0xBC, 1);
    }
    return arg0;
}

}

#undef lbl_804CC148
