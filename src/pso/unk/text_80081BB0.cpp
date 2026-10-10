#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80081CD0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80081CD0_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80081CD0_lbl_8058D490_size[sizeof(RecoveredGlobal_80081CD0_lbl_8058D490) == 0x30 ? 1 : -1];

struct VBase_80081EA4 { u8 pad[0x18]; };

struct VObj_80081EA4 : VBase_80081EA4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK queue_destruction__10TObjPlayerFPv(void *);
M2C_UNK update_freeze_shell_timer(void *);
u32 find_active_entity_by_id(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
void freeze_shell_update(void *arg0);
s32 create_timed_particle_emitter(void *, int, int, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_80081CD0_lbl_8058D490 identity_matrix;
extern const f32 lbl_805D9378;
extern const f32 lbl_805D9388;
extern const f32 lbl_805D938C;
void freeze_shell_grow(u8 *arg0);
s32 obj_testFlags30(s32, s32);
s32 get_bml_motion(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK attach_particle_model(s32, s32, s32, s32, M2C_UNK, f32);
M2C_UNK set_position_xy__10TObjPlayerFPvff(s32, f32, f32);
s32 spawn_particle_effect(void *, M2C_UNK);
u32 find_active_entity_by_id(u16);
extern s32 lbl_805D4ED0;
extern s32 technique_effect_bml;
extern s32 lbl_805D63B0;
extern const f32 lbl_805D9378;
extern const f32 lbl_805D9384;
M2C_UNK freeze_shell_hold(void *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
u32 find_active_entity_by_id(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 rotate_matrix_y(int, int);
M2C_UNK push_matrix();
s32 pop_matrix();
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK draw_ginja_object(int);
M2C_UNK set_chunk_material_override_pair(int, int);
M2C_UNK set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D4ED0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9390;
extern const f32 lbl_805D9394;
void freeze_shell_draw(u8 *arg0);
}

extern "C" {

M2C_UNK freeze_shell_hold(void *arg0) {
    s32 p;
    p = find_active_entity_by_id(M2C_FIELD(arg0, u16 *, 0x358));
    if (p == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) += 0x10;
    if (obj_testFlags30(p, 0x800) == 0) {
        if (obj_testFlags30(p, 0x20) != 0) {
            return;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x334) = 2;
    p = spawn_particle_effect((u8 *)arg0 + 0x35C, 0x153);
    if (p != 0) {
        attach_particle_model(p, get_bml_model(technique_effect_bml, 5), lbl_805D63B0, 0, 0, lbl_805D9384);
    }
    p = spawn_particle_effect((u8 *)arg0 + 0x38, 0x33);
    if (p != 0) {
        attach_particle_model(p, get_bml_model(lbl_805D4ED0, 0), TObjFish__sub_8001EDB0(lbl_805D4ED0, 1), get_bml_motion(lbl_805D4ED0, 0), 0, lbl_805D9384);
        set_position_xy__10TObjPlayerFPvff(p, M2C_FIELD(arg0, f32 *, 0x68), M2C_FIELD(arg0, f32 *, 0x6C));
    }
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805D9378;
}

void freeze_shell_grow(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80081CD0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80081CD0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80081CD0, sp10) == 0x8) ? 1 : -1];
    Stack_80081CD0 stack;
    f32 temp_f0;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x1000);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0x70) + lbl_805D9388);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x6C) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x68) = temp_f0;
    if (M2C_FIELD(arg0, f32 *, 0x338) < M2C_FIELD(arg0, f32 *, 0x68)) {
        M2C_FIELD(arg0, s32 *, 0x334) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x33C) = (s32) (M2C_FIELD(arg0, s32 *, 0x33C) + 1);
    if ((M2C_FIELD(arg0, s32 *, 0x33C) % 3) == 0) {
        stack.sp8 = lbl_805D9378;
        stack.spC = lbl_805D9378;
        stack.sp10 = lbl_805D938C * M2C_FIELD(arg0, f32 *, 0x68);
        push_matrix_from((void *) (&identity_matrix.value));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60) * 2));
        rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
        pop_matrix();
        vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        create_timed_particle_emitter((void *) (&stack.sp8), (int) (0x12D), (int) (0), (int) (0xA));
    }
}

void freeze_shell_update(void *arg0) {
    s32 temp_r0;
    u32 var_r3;
    u16 id = M2C_FIELD(arg0, u16 *, 0x358);
    if ((id != 0xffffU) && (id < 0x4000U)) {
        var_r3 = find_active_entity_by_id(id);
    } else {
        var_r3 = 0U;
    }
    if (var_r3 == 0U) {
        queue_destruction__7TObjectFv(arg0);
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0) {
        disallow_rendering__7TObjectFv(arg0);
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0) {
    case 0:
        freeze_shell_grow((u8 *)(arg0));
        return;
    case 1:
        freeze_shell_hold((void *)(arg0));
        return;
    case 2:
        update_freeze_shell_timer(arg0);
        return;
    case 3:
        queue_destruction__10TObjPlayerFPv(arg0);
        return;
    }
}
void freeze_shell_draw(u8 *arg0) {
    s32 ok;
    VObj_80081EA4 *p;
    ok = 1;
    p = (VObj_80081EA4 *)find_active_entity_by_id(M2C_FIELD(arg0, u16 *, 0x358));
    if (p != NULL && all_parents_unqueued_for_destruction__7TObjectFv() != 0) {
        ok = p->m8(lbl_805D9390, lbl_805D9394);
    }
    if (ok != 0) {
        TObjFish__sub_8001EDB0((s32)((void *)lbl_805D4ED0), (M2C_UNK)(1));
        set_global_param__8TObjFishFi();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        scale_current_matrix(arg0 + 0x68);
        switch (M2C_FIELD(arg0, s32 *, 0x334)) {
        case 0:
        case 1:
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x34));
            break;
        case 2:
            lbl_805D5660 = some_id_805c6f74;
            some_id_805c6f74 = lbl_805D5660 | 0x8820;
            set_chunk_material_color(arg0 + 0x340);
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x34));
            some_id_805c6f74 &= 0xFFFF77DF;
            set_chunk_material_override_pair(0xFF00, 0);
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
            some_id_805c6f74 = lbl_805D5660;
            break;
        }
        pop_matrix();
    }
}

}
