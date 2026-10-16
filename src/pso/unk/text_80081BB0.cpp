#include "types.h"
#include "pso/misc/TUnk_8048E1A4.h"

#include <stddef.h>
#include "pso/player/TObjPlayer.h"
struct Stack_80081CD0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80081CD0_lbl_8058D490 { s32 value; u8 remaining[0x2C]; };
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
s32 queue_destruction__7TObjectFv(void *);
s32 disallow_rendering__7TObjectFv(void *);
u32 find_active_entity_by_id(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
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
s32 obj_testFlags30(s32, s32);
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 attach_particle_model(s32, s32, s32, s32, s32, f32);
s32 spawn_particle_effect(void *, s32);
u32 find_active_entity_by_id(u16);
extern s32 freeze_shell_bml_resource;
extern s32 technique_effect_bml;
extern s32 lbl_805D63B0;
extern const f32 lbl_805D9378;
extern const f32 lbl_805D9384;
s32 TObjFish__sub_8001EDB0(s32, s32);
u32 find_active_entity_by_id(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl();
s32 draw_ginja_object(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 freeze_shell_bml_resource;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D9390;
extern const f32 lbl_805D9394;
}

extern "C" {

s32 TUnk_8048E1A4::freeze_shell_hold() {
    s32 p;
    p = find_active_entity_by_id(*(u16 *)((s8 *)this + 0x358));
    if (p == 0) {
        return;
    }
    *(s32 *)((s8 *)this + 0x60) += 0x10;
    if (obj_testFlags30(p, 0x800) == 0) {
        if (obj_testFlags30(p, 0x20) != 0) {
            return;
        }
    }
    *(s32 *)((s8 *)this + 0x334) = 2;
    p = spawn_particle_effect((u8 *)this + 0x35C, 0x153);
    if (p != 0) {
        attach_particle_model(p, get_bml_model(technique_effect_bml, 5), lbl_805D63B0, 0, 0, lbl_805D9384);
    }
    p = spawn_particle_effect((u8 *)this + 0x38, 0x33);
    if (p != 0) {
        attach_particle_model(p, get_bml_model(freeze_shell_bml_resource, 0), TObjFish__sub_8001EDB0(freeze_shell_bml_resource, 1), get_bml_motion(freeze_shell_bml_resource, 0), 0, lbl_805D9384);
        ((TObjPlayer *)p)->set_position_xy(*(f32 *)((s8 *)this + 0x68), *(f32 *)((s8 *)this + 0x6C));
    }
    *(f32 *)((s8 *)this + 0xC0) = lbl_805D9378;
}

void TUnk_8048E1A4::freeze_shell_grow() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_80081CD0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80081CD0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80081CD0, sp10) == 0x8) ? 1 : -1];
    Stack_80081CD0 stack;
    f32 temp_f0;
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) + 0x1000);
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) (*(f32 *)((s8 *)arg0 + 0x70) + lbl_805D9388);
    temp_f0 = *(f32 *)((s8 *)arg0 + 0x70);
    *(f32 *)((s8 *)arg0 + 0x6C) = temp_f0;
    *(f32 *)((s8 *)arg0 + 0x68) = temp_f0;
    if (*(f32 *)((s8 *)arg0 + 0x338) < *(f32 *)((s8 *)arg0 + 0x68)) {
        *(s32 *)((s8 *)arg0 + 0x334) = 1;
    }
    *(s32 *)((s8 *)arg0 + 0x33C) = (s32) (*(s32 *)((s8 *)arg0 + 0x33C) + 1);
    if ((*(s32 *)((s8 *)arg0 + 0x33C) % 3) == 0) {
        stack.sp8 = lbl_805D9378;
        stack.spC = lbl_805D9378;
        stack.sp10 = lbl_805D938C * *(f32 *)((s8 *)arg0 + 0x68);
        push_matrix_from((void *) (&identity_matrix.value));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60) * 2));
        rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
        pop_matrix();
        vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        create_timed_particle_emitter((void *) (&stack.sp8), (int) (0x12D), (int) (0), (int) (0xA));
    }
}

void TUnk_8048E1A4::run_task() {
    s32 temp_r0;
    u32 var_r3;
    u16 id = *(u16 *)((s8 *)this + 0x358);
    if ((id != 0xffffU) && (id < 0x4000U)) {
        var_r3 = find_active_entity_by_id(id);
    } else {
        var_r3 = 0U;
    }
    if (var_r3 == 0U) {
        queue_destruction__7TObjectFv(this);
        disallow_rendering__7TObjectFv(this);
        return;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0) {
        disallow_rendering__7TObjectFv(this);
        queue_destruction__7TObjectFv(this);
        return;
    }
    temp_r0 = *(s32 *)((s8 *)this + 0x334);
    switch (temp_r0) {
    case 0:
        freeze_shell_grow();
        return;
    case 1:
        freeze_shell_hold();
        return;
    case 2:
        update_freeze_shell_timer();
        return;
    case 3:
        ((TObjPlayer *)this)->queue_destruction();
        return;
    }
}
void TUnk_8048E1A4::render() {
    u8 *arg0 = (u8 *)this;
    s32 ok;
    VObj_80081EA4 *p;
    ok = 1;
    p = (VObj_80081EA4 *)find_active_entity_by_id(*(u16 *)((s8 *)arg0 + 0x358));
    if (p != NULL && all_parents_unqueued_for_destruction__7TObjectFv() != 0) {
        ok = p->m8(lbl_805D9390, lbl_805D9394);
    }
    if (ok != 0) {
        TObjFish__sub_8001EDB0((s32)((void *)freeze_shell_bml_resource), (s32)(1));
        set_global_param__8TObjFishFl();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, this->rotation_y);
        scale_current_matrix(arg0 + 0x68);
        switch (*(s32 *)((s8 *)arg0 + 0x334)) {
        case 0:
        case 1:
            draw_ginja_object(*(s32 *)&this->model);
            break;
        case 2:
            lbl_805D5660 = model_render_flags;
            model_render_flags = lbl_805D5660 | 0x8820;
            set_chunk_material_color(arg0 + 0x340);
            draw_ginja_object(*(s32 *)&this->model);
            model_render_flags &= 0xFFFF77DF;
            set_chunk_material_override_pair(0xFF00, 0);
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
            break;
        }
        pop_matrix();
    }
}

}
