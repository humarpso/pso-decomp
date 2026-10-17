#include "types.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"

#include <stddef.h>
#include "pso/misc/TPhotonEstlla.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
struct Stack_801AA930 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_801AA710 { f32 x, y, z; };

struct Packet_801AA710 { u32 w[8]; };

struct Self_801AA710 {
    u8 pad0[0x38];
    Vec_801AA710 pos;
    u8 pad1[0x150 - 0x44];
    f32 f150;
    u8 pad2[0x17C - 0x154];
    u16 id;
};

struct Owner_801AA710 { u8 pad[0x60]; s32 f60; };

struct Color_801AA818 { f32 a, r, g, b; };

struct Vec_801AA818 { f32 x, y, z; };

struct Self_801AA818 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AA818 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x180 - 0x14E];
    Color_801AA818 color;
    u8 pad5[0x19C - 0x190];
    s32 started;
};

extern "C" {
s32 advance_animation_playback(void *);
void *find_entity_by_id(u16 id);
s32 spawn_photon_blast_attachment_effects(void *, int);
u8 *construct_photon_magic_square_normal(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 play_persistent_sound(s32 id, s32 a1, u32 src, s32 a3, s32 flags);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC140;
extern const f32 lbl_805DC144;
extern const f32 lbl_805DC148;
extern const f32 lbl_805DC14C;
extern const f32 lbl_805DC150;
s32 TPhotonLine__ct(void *, void *, void *, u16);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrices(s32 arg0);
extern const Packet_801AA710 photon_estlla_line_packet_init;
extern u8 identity_matrix[];
extern const f32 lbl_805DC138;
extern const f32 lbl_805DC13C;
void copy_vec4__13TRaderMapCoreFPvPv(void *p, void *q);
s32 scroll_strip_uvs(void *, s16, int);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 push_matrix();
s32 pop_matrix();
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
void set_chunk_material_override_pair(s32 arg0, s32 arg1);
void set_chunk_material_color(f32 *arg);
extern Color_801AA818 saved_model_draw_color;
extern Color_801AA818 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *estlla_photon_blast_model;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;

void TPhotonEstlla::spawn_line() {
    Self_801AA710 *self = (Self_801AA710 *)this;
    Owner_801AA710 *owner;
    Vec_801AA710 forward;
    Vec_801AA710 direction;
    u32 line;
    owner = (Owner_801AA710 *)find_entity_by_id(self->id);
    forward.x = lbl_805DC138;
    forward.y = lbl_805DC138;
    forward.z = lbl_805DC13C;
    push_matrix_from(identity_matrix);
    if (owner) {
        rotate_matrix_y(0, owner->f60);
    }
    rotate_vector_by_matrix(0, &forward, &direction);
    pop_matrices(1);
    {
        Packet_801AA710 packet = photon_estlla_line_packet_init;
        *(Vec_801AA710 *)&packet.w[0] = self->pos;
        *(Vec_801AA710 *)&packet.w[3] = direction;
        *(f32 *)&packet.w[7] = self->f150;
        line = __nw__7TObjectFUl(0x378);
        if (line) {
            TPhotonLine__ct((void *)line, &packet, self, self->id);
        }
    }
}

void TPhotonEstlla::render() {
    Self_801AA818 *self = (Self_801AA818 *)this;
    if (self->started != 0) {
        scroll_strip_uvs(estlla_photon_blast_model, self->f14C, 0);
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(self->f24);
        push_matrix();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, self->f60);
        ((TUnk_804C3248 *)self)->set_photon_blast_joint_callback();
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x200820;
        TObjPlayer::set_global_flag();
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color((f32 *)&self->color);
        ((TObjEneRe7Berura *)self)->draw();
        TObjPlayer::clear_global_state();
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&model_material_color, &saved_model_draw_color);
        model_render_flags = lbl_805D5660;
        clear_render_context__10TObjPlayerFv(self);
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}

void TPhotonEstlla::run_task() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_801AA930, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AA930, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801AA930, sp10) == 0x8) ? 1 : -1];
    Stack_801AA930 stack;
    f32 temp_f1;
    u32 temp_r3_2;
    u8 *entity;
    *(s32 *)&this->m_1a0 = (s32) (*(s32 *)&this->m_1a0 + 1);
    if (((s32) *(s32 *)&this->m_1a0 == 0x32) && ((s32) *(s32 *)&this->m_19c == 0)) {
        *(s32 *)&this->m_19c = 1;
        entity = (u8 *)(find_entity_by_id(this->m_17c));
        if (entity != NULL) {
            stack.sp8 = *(f32 *)((s8 *)entity + 0x38);
            stack.spC = lbl_805DC140 + *(f32 *)((s8 *)entity + 0x3C);
            stack.sp10 = *(f32 *)((s8 *)entity + 0x40);
        }
        temp_r3_2 = __nw__7TObjectFUl(0xD0);
        if (temp_r3_2 != 0U) {
            construct_photon_magic_square_normal((u8 *)temp_r3_2, (s32)arg0, 1, (s32)(&stack.sp8), 0x78);
        }
    }
    if (((s32) *(s32 *)&this->m_1a0 == 0x64) && ((s16) this->m_b8 == 1)) {
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera(0);
        *(s32 *)&this->m_1a0 = 0;
        ((TObjMotion *)arg0)->set_field_b8(0);
        spawn_photon_blast_attachment_effects(arg0, 1);
    }
    *(s16 *)&this->m_190 = (s16) this->m_b8;
    ((TUnk_804C3248 *)arg0)->update_state();
    advance_animation_playback(arg0);
    ((TUnk_804C3248 *)arg0)->update_photon_blast_attachments();
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (*(s16 *)((s8 *)arg0 + 0x14C) + 0xF);
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (u8) *(s16 *)((s8 *)arg0 + 0x14C);
    if (lbl_805DC144 == (f32) *(s32 *)&this->m_1a0) {
        spawn_line();
    }
    if ((f32) *(s32 *)&this->m_1a0 > lbl_805DC148) {
        temp_f1 = *(f32 *)&this->m_180;
        if (temp_f1 > lbl_805DC14C) {
            *(f32 *)&this->m_180 = (f32) (temp_f1 - lbl_805DC150);
        }
    }
    if ((s32) *(s32 *)&this->m_19c != 0) {
        play_persistent_sound(0x4002462F, (s32)arg0, 0, 0, 0);
    }
}

}
