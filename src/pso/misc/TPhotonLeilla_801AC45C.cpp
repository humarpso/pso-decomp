#include "types.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"

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
void *find_entity_by_id(u16 id);
u8 * construct_photon_magic_square_normal(void *, s32, s32, s32, s32);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 advance_animation_playback(void *);
s32 queue_photon_blast_hit(int, int, int, f32);
s32 spawn_photon_blast_attachment_effects(void *, int);
u8 *__nw__7TObjectFUl(s32, f32);
extern const f64 lbl_80446DE8;
extern const f32 lbl_805DC1C4;
extern const f32 lbl_805DC1C8;
extern const f32 lbl_805DC1CC;
extern const f32 lbl_805DC1D0;
extern const f32 lbl_805DC1D4;
void copy_vec4__13TRaderMapCoreFPvPv(void *p, void *q);
s32 scroll_strip_uvs(void *, s16, int);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
void set_chunk_material_override_pair(s32 arg0, s32 arg1);
void set_chunk_material_color(f32 *arg);
extern Color_801AC45C saved_model_draw_color;
extern Color_801AC45C model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *leilla_photon_buffer_pair;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;

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
        set_chunk_material_color((f32 *)&self->color);
        ((TUnk_804C3248 *)self)->set_photon_blast_joint_callback();
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
    u8 *entity;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    *(s32 *)&this->m_1ac = (s32) (*(s32 *)&this->m_1ac + 1);
    if (((s32) *(s32 *)&this->m_1ac == 0x32) && ((s32) *(s32 *)&this->m_19c == 0)) {
        *(s32 *)&this->m_19c = 1;
        *(s32 *)&this->m_1ac = 0;
        entity = (u8 *)(find_entity_by_id(this->m_17c));
        if (entity != NULL) {
            VecCopy((Vec *)(&stack.sp8), (const Vec *)(entity + 0x38));
        }
        temp_f1 = stack.spC;
        stack.spC = temp_f1 + lbl_805DC1C4;
        temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0xD0, temp_f1));
        if (temp_r3_2 != NULL) {
            construct_photon_magic_square_normal(temp_r3_2, (s32) arg0, 4, (s32) &stack.sp8, 0x78);
        }
    }
    if ((lbl_805DC1C8 == (f32) *(s32 *)&this->m_1ac) && ((s16) this->m_b8 == 1)) {
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera((int) (2));
        *(s32 *)&this->m_1ac = 0;
        ((TObjMotion *)arg0)->set_field_b8((int) (0));
        spawn_photon_blast_attachment_effects((void *) (arg0), (int) (4));
    }
    *(s16 *)&this->m_190 = (s16) this->m_b8;
    ((TUnk_804C3248 *)arg0)->update_state();
    advance_animation_playback((void *) (arg0));
    ((TUnk_804C3248 *)arg0)->update_photon_blast_attachments();
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (*(s16 *)((s8 *)arg0 + 0x14C) + 0xF);
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (u8) *(s16 *)((s8 *)arg0 + 0x14C);
    if (lbl_805DC1CC == (f32) *(s32 *)&this->m_1ac) {
        temp_r3_3 = (u8 *)(find_entity_by_id(this->m_17c));
        if (temp_r3_3 != NULL) {
            queue_photon_blast_hit((int) (obj_getField1c(temp_r3_3)), (int) (4), (int) (0), (f32) (this->m_150));
        }
    }
    if ((f32) *(s32 *)&this->m_1ac > lbl_805DC1D0) {
        temp_f1_2 = *(f32 *)&this->m_180;
        if (temp_f1_2 > lbl_805DC1D4) {
            *(f32 *)&this->m_180 = (f32) ((f64) temp_f1_2 - lbl_80446DE8);
        }
    }
    if ((s32) *(s32 *)&this->m_19c != 0) {
        play_persistent_sound(0x4002462F, (s32) arg0, 0U, 0, 0);
    }
}

}
