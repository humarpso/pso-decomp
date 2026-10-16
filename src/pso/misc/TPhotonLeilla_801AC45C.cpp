#include "types.h"

#include <stddef.h>
#include "pso/misc/TPhotonLeilla.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
struct Stack_801AC574 {
    s32 sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct Color_801AC45C { f32 a, r, g, b; };

struct Vec_801AC45C { f32 x, y, z; };

struct Self_801AC45C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AC45C pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x180 - 0x14E];
    Color_801AC45C color;
    u8 pad5[0x19C - 0x190];
    s32 started;
};

extern "C" {
u16 obj_getField1c(void *);
u8 * find_entity_by_id(u16);
u8 * construct_photon_magic_square_normal(void *, s32, s32, s32, s32);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 advance_animation_playback(void *);
s32 queue_photon_blast_hit(int, int, int, f32);
s32 begin_photon_summon_camera(void *, int);
s32 update_photon_blast_attachments(void *);
s32 spawn_photon_blast_attachment_effects(void *, int);
s32 update_state__10TSceneSoraFPv(void *);
u8 *__nw__7TObjectFUl(s32, f32);
extern const f64 lbl_80446DE8;
extern const f32 lbl_805DC1C4;
extern const f32 lbl_805DC1C8;
extern const f32 lbl_805DC1CC;
extern const f32 lbl_805DC1D0;
extern const f32 lbl_805DC1D4;
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 scroll_strip_uvs(void *, s16, int);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 set_photon_blast_joint_callback__10TObjPlayerFPv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 translate_matrix(int, f32, f32, f32);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
extern Color_801AC45C saved_model_draw_color;
extern Color_801AC45C model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *leilla_photon_buffer_pair;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
}

extern "C" {

void TPhotonLeilla::render() {
    Self_801AC45C *self = (Self_801AC45C *)this;
    if (self->started != 0) {
        scroll_strip_uvs(leilla_photon_buffer_pair, self->f14C, 0);
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(self->f24);
        push_matrix();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, self->f60);
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x200820;
        TObjPlayer::set_global_flag();
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        set_photon_blast_joint_callback__10TObjPlayerFPv(self);
        ((TObjEneRe7Berura *)self)->draw();
        TObjPlayer::clear_global_state();
        clear_render_context__10TObjPlayerFv(self);
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&model_material_color, &saved_model_draw_color);
        model_render_flags = lbl_805D5660;
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}

void TPhotonLeilla::run_task() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_801AC574, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AC574, spC) == 0x4) ? 1 : -1];
    Stack_801AC574 stack;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    *(s32 *)((s8 *)arg0 + 0x1AC) = (s32) (*(s32 *)((s8 *)arg0 + 0x1AC) + 1);
    if (((s32) *(s32 *)((s8 *)arg0 + 0x1AC) == 0x32) && ((s32) *(s32 *)((s8 *)arg0 + 0x19C) == 0)) {
        *(s32 *)((s8 *)arg0 + 0x19C) = 1;
        *(s32 *)((s8 *)arg0 + 0x1AC) = 0;
        temp_r3 = (u8 *)(find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x17C)));
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3 + 0x38));
        }
        temp_f1 = stack.spC;
        stack.spC = temp_f1 + lbl_805DC1C4;
        temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0xD0, temp_f1));
        if (temp_r3_2 != NULL) {
            construct_photon_magic_square_normal(temp_r3_2, (s32) arg0, 4, (s32) &stack.sp8, 0x78);
        }
    }
    if ((lbl_805DC1C8 == (f32) *(s32 *)((s8 *)arg0 + 0x1AC)) && ((s16) *(s16 *)((s8 *)arg0 + 0xB8) == 1)) {
        begin_photon_summon_camera((void *) (arg0), (int) (2));
        *(s32 *)((s8 *)arg0 + 0x1AC) = 0;
        ((TObjEnePanarms *)arg0)->set_field_b8((int) (0));
        spawn_photon_blast_attachment_effects((void *) (arg0), (int) (4));
    }
    *(s16 *)((s8 *)arg0 + 0x190) = (s16) *(s16 *)((s8 *)arg0 + 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    advance_animation_playback((void *) (arg0));
    update_photon_blast_attachments((void *) (arg0));
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (*(s16 *)((s8 *)arg0 + 0x14C) + 0xF);
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (u8) *(s16 *)((s8 *)arg0 + 0x14C);
    if (lbl_805DC1CC == (f32) *(s32 *)((s8 *)arg0 + 0x1AC)) {
        temp_r3_3 = (u8 *)(find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x17C)));
        if (temp_r3_3 != NULL) {
            queue_photon_blast_hit((int) (obj_getField1c(temp_r3_3)), (int) (4), (int) (0), (f32) (*(f32 *)((s8 *)arg0 + 0x150)));
        }
    }
    if ((f32) *(s32 *)((s8 *)arg0 + 0x1AC) > lbl_805DC1D0) {
        temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x180);
        if (temp_f1_2 > lbl_805DC1D4) {
            *(f32 *)((s8 *)arg0 + 0x180) = (f32) ((f64) temp_f1_2 - lbl_80446DE8);
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x19C) != 0) {
        play_persistent_sound(0x4002462F, (s32) arg0, 0U, 0, 0);
    }
}

}
