#include "pso/TEffClitical.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80082688 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#include <stddef.h>
struct Stack_800823E0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
};

struct RecoveredGlobal_800823E0_lbl_80438EB8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_800823E0_lbl_80438EC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
f32 approach_vector_fixed_distance(void *, void *, void *, f32);
f32 vector_length(void *);
void approach_position_if_far(u8 *arg0, u8 *arg1, f32 farg0);
s32 queue_destruction__7TObjectFv(void *);
s32 fn_8008271C(void *, void *, f32);
s32 approach_alpha_clamped(void *, void *, f32);
s32 spawn_particle_effect(void *, int);
extern RecoveredGlobal_800823E0_lbl_80438EB8 lbl_80438EB8;
extern RecoveredGlobal_800823E0_lbl_80438EC8 lbl_80438EC8;
extern const f32 lbl_805D2900;
extern const f32 lbl_805D93A8;
extern const f32 lbl_805D93AC;
void run_task__12TEffCliticalFv(u8 *arg0);
void init_texture_copy_rect(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK fn_80082954(void *);
M2C_UNK fn_800829E0(void *);
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK begin_effect_render__13TParticleCtrlFv(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK draw_chunk_object(int);
extern M2C_UNK lbl_8048E2E0[];
extern M2C_UNK lbl_804CC934[];
extern u8 *lbl_805D4DF0;
extern s32 *lbl_805D4ED8;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
void render__12TEffCliticalFv(u8 *arg0);
}

extern "C" {

void init_texture_copy_rect(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void *__ct__12TEffCliticalFv(void *arg0, void *arg1);
void create__12TEffCliticalFPv(void *arg0);
void __ct__7TEffectFv(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__12TEffClitical[];
extern void *lbl_805D2904;
extern const f32 lbl_805D93B0;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_800823E0_lbl_80438EB8_size[sizeof(RecoveredGlobal_800823E0_lbl_80438EB8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_800823E0_lbl_80438EC8_size[sizeof(RecoveredGlobal_800823E0_lbl_80438EC8) == 0x10 ? 1 : -1];

void render__12TEffCliticalFv(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;
    set_depth_buffer_settings_1__Fv();
    init_texture_copy_rect((void *)((void *) (&sp8)), (s32)((void *) (lbl_8048E2E0)), (s32)((void *) (lbl_804CC934)), (s32)((int) (0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x70) + 1)));
    temp_r3 = some_id_805c6f74;
    lbl_805D5660 = temp_r3;
    some_id_805c6f74 = temp_r3 | 0x10;
    begin_effect_render__13TParticleCtrlFv((int) (temp_r3));
    set_chunk_material_color((void *) ((u8 *)(arg0) + 0x2C));
    fn_800829E0((void *) (&sp8));
    push_matrix();
    set_global_param__8TObjFishFi((void *) (lbl_8048E2E0));
    post_translate_matrix((void *) ((u8 *)(arg0) + 0x20));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(lbl_805D4DF0, s32 *, 0x194)));
    scale_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x3C)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)), (f32) (M2C_FIELD(arg0, f32 *, 0x44)));
    draw_chunk_object((int) (M2C_FIELD(lbl_805D4ED8, s32 *, 0)));
    pop_matrix();
    fn_80082954((void *) (&sp8));
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    restore_saved_depth_alpha_state();
}

void run_task__12TEffCliticalFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800823E0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800823E0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800823E0, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800823E0, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800823E0, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_800823E0, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_800823E0, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_800823E0, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_800823E0, sp28) == 0x20) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_800823E0, sp2C) == 0x24) ? 1 : -1];
    Stack_800823E0 stack;
    s32 temp_r0;
    s32 var_r30;
    stack.sp20 = M2C_FIELD(&lbl_80438EB8.value, s32 *, 0);
    stack.sp24 = M2C_FIELD(&lbl_80438EB8.value, s32 *, 4);
    stack.sp28 = M2C_FIELD(&lbl_80438EB8.value, s32 *, 8);
    stack.sp2C = M2C_FIELD(&lbl_80438EB8.value, s32 *, 0xC);
    stack.sp14 = M2C_FIELD(&lbl_80438EC8.value, s32 *, 0);
    stack.sp18 = M2C_FIELD(&lbl_80438EC8.value, s32 *, 4);
    stack.sp1C = M2C_FIELD(&lbl_80438EC8.value, s32 *, 8);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x74);
    switch (temp_r0) {
    case 1:
        break;
    case 0:
        var_r30 = 0;
        do {
            switch (var_r30) {
            case 0:
                spawn_particle_effect((void *) (arg0 + 0x20), (int) (7));
                break;
            case 1:
                spawn_particle_effect((void *) (arg0 + 0x20), (int) (0xB));
                break;
            case 2:
                stack.sp8 = M2C_FIELD(arg0, f32 *, 0x20);
                stack.spC = M2C_FIELD(arg0, f32 *, 0x24) - lbl_805D93A8;
                stack.sp10 = M2C_FIELD(arg0, f32 *, 0x28);
                spawn_particle_effect((void *) (&stack.sp8), (int) (0xC));
                break;
            case 3:
                spawn_particle_effect((void *) (arg0 + 0x20), (int) (0xE));
                break;
            }
            var_r30 += 1;
        } while (var_r30 < 4);
        M2C_FIELD(arg0, s32 *, 0x74) = 1;
        break;
    }
    if (approach_alpha_clamped((void *) (arg0 + 0x2C), (void *) (&stack.sp20), (f32) (lbl_805D2900)) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    fn_8008271C((void *) (arg0 + 0x3C), (void *) (&stack.sp14), (f32) (lbl_805D93AC));
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x70) >= 7) {
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
}
#pragma pop

TEffClitical::~TEffClitical() {}
void *__ct__12TEffCliticalFv(void *arg0, void *arg1) {
    __ct__7TEffectFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TEffClitical;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2904;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32), arg1);
    M2C_FIELD(arg0, u32 *, 0x70) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805D93B0;
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    return arg0;
}

void create__12TEffCliticalFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        __ct__12TEffCliticalFv((void *)(o), (void *)(arg0));
    }
}

void init_texture_copy_rect(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
void approach_position_if_far(u8 *arg0, u8 *arg1, f32 farg0) {
    Stack_80082688 stack;
    f32 temp_f1;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0);
    stack.spC = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8);
    temp_f1 = vector_length(&stack.sp8);
    if (temp_f1 > farg0) {
        approach_vector_fixed_distance(arg0, arg1, arg0, temp_f1 * farg0);
    }
}

}
