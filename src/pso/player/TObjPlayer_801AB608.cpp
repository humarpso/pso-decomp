#include "types.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/player/TUnk_80494AE0.h"
#include "pso/player/TObjPlayer_801AB608.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TPhotonGolla.h"

#include <stddef.h>
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/TLobby.h"
#include "pso/object/TObjFish.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
struct Stack_801ABBAC {
    s32 sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct Color_801ABAA0 { f32 a, r, g, b; };

struct Vec_801ABAA0 { f32 x, y, z; };

struct Self_801ABAA0 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801ABAA0 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x15C - 0x14E];
    Color_801ABAA0 color;
    u8 pad5[0x1C4 - 0x16C];
    s32 started;
};

typedef struct Vec_801AB6A0 {
    f32 x, y, z;
} Vec_801AB6A0;

typedef struct Packet_801AB6A0 {
    Vec_801AB6A0 origin;
    Vec_801AB6A0 target;
    Vec_801AB6A0 direction;
    u8 pad24[0xC];
    void *owner;
    u32 angle;
} Packet_801AB6A0;

typedef struct Golla_801AB6A0 {
    u8 pad0[0x38];
    Vec_801AB6A0 pos;
    u8 pad44[0x158 - 0x44];
    u16 owner_id;
    u8 pad15A[0x19C - 0x15A];
    void *f19c;
    u8 pad1A0[8];
    u8 *f1a8;
    Vec_801AB6A0 f1ac;
} Golla_801AB6A0;

typedef struct Owner_801AB6A0 {
    u8 pad0[0x3C];
    f32 y;
    u8 pad40[0x20];
    s32 rot;
} Owner_801AB6A0;

typedef struct Vec_801AB868 {
    f32 x, y, z;
} Vec_801AB868;

typedef struct Target_801AB868 {
    u8 pad0[0x2FC];
    Vec_801AB868 pos;
} Target_801AB868;

typedef struct Owner_801AB868 {
    u8 pad0[0x38];
    Vec_801AB868 pos;
    u8 pad44[0x60 - 0x44];
    s32 rot;
} Owner_801AB868;

typedef struct Flags_801AB868 {
    u8 pad0[0x18];
    u32 flags;
} Flags_801AB868;

typedef struct Golla_801AB868 {
    u8 pad0[0x38];
    Vec_801AB868 pos;
    u8 pad44[0xA4 - 0x44];
    Flags_801AB868 *fa4;
    u8 padA8[0x150 - 0xA8];
    f32 f150;
    u8 pad154[4];
    u16 owner_id;
    u8 pad15A[0x19C - 0x15A];
    Target_801AB868 *f19c;
    u8 pad1A0[8];
    Target_801AB868 *f1a8;
} Golla_801AB868;

extern u8 *photon_blast_shared_resource;
extern u32 farlla_photon_blast_model_buffers;
extern "C" {
void *spawn_particle_effect(void *pos, s32 id);
s32 advance_animation_playback(void *);
void *find_entity_by_id(u16 id);
s32 spawn_photon_blast_attachment_effects(void *, int);
u8 *TPhotonMagicSquare__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
s32 play_persistent_sound(s32 id, s32 a1, u32 src, s32 a3, s32 flags);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC1A0;
extern const f32 lbl_805DC1A4;
extern const f32 lbl_805DC1A8;
s32 scroll_strip_uvs(void *, s16, int);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
void set_chunk_material_override_pair(s32 arg0, s32 arg1);
extern Color_801ABAA0 saved_model_draw_color;
extern Color_801ABAA0 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *golla_photon_blast_buffer_pair;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
u8 *TPhotonConcentrate__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
u32 __cvt_fp2unsigned(f32);
int rand(void);
void vec3_add_to(void *, void *);
void rotate_vector_by_matrix(int, void *, void *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
s32 push_matrix_from(void *src);
s32 pop_matrices(s32 arg0);
extern const Packet_801AB6A0 photon_golla_concentrate_packet;
extern u8 identity_matrix[];
extern const float lbl_805DC188;
extern const f32 lbl_805DC18C;
extern const f32 lbl_805DC190;
extern const f32 lbl_805DC194;
extern const f32 lbl_805DC198;
Target_801AB868 *get_battle_param__10TObjPlayerFi(s32);
f32 vec_squared_length(u8 *arg0);
f32 vec3_dot(void *, void *);
u16 obj_getField1c(void *);
void queue_photon_blast_hit(u32, int, int, f32);
}
extern const f32 lbl_805DC19C;
void *destroy_buffer_pair(void *arg0, s16 arg1);
extern "C" {

void TObjPlayer::destroy_buffers() {
    if ((u32) farlla_photon_blast_model_buffers != 0U) {
        destroy_buffer_pair((void *)farlla_photon_blast_model_buffers, 1);
    }
    farlla_photon_blast_model_buffers = 0U;
}
}

void create_farlla_photon_blast_model(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x14))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (((TLobby *)temp_r3)->alloc_tables(*(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 8), 0));
    }
    (*(s32 *)&farlla_photon_blast_model_buffers) = var_r0;
}
extern "C" {

void TPhotonGolla::sub_801AB688() { this->m_15c = lbl_805DC188; *(float*)((char*)this + 0x160) = lbl_805DC188; this->m_164 = lbl_805DC188; *(float*)((char*)this + 0x168) = lbl_805DC188; }

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
#define self ((Golla_801AB6A0 *)arg0)
s32 TPhotonGolla::spawn_concentrate(void *arg0) {
    Vec_801AB6A0 target;
    Vec_801AB6A0 local;
    Vec_801AB6A0 rotated;
    Owner_801AB6A0 *owner;
    f32 random;
    u32 angle;
    u32 beam;
    if (self->f19c == NULL) {
        owner = (Owner_801AB6A0 *)find_entity_by_id(self->owner_id);
        local.x = (*(const f32 *)&lbl_805DC188);
        if (owner != NULL) {
            local.y = owner->y;
        }
        local.z = lbl_805DC18C;
        push_matrix_from(identity_matrix);
        if (owner != NULL) {
            rotate_matrix_y(0, owner->rot);
        }
        rotate_vector_by_matrix(0, &local, &rotated);
        pop_matrices(1);
        VecCopy((Vec *)&target, (const Vec *)&self->pos);
        vec3_add_to(&target, &rotated);
    } else {
        VecCopy((Vec *)&target, (const Vec *)(self->f1a8 + 0x2FC));
    }
    Vec_801AB6A0 direction = target;
    subtract_vector(&direction, &self->f1ac);
    normalize_vector(&direction);
    random = lbl_805DC198 * (f32)rand();
    angle = __cvt_fp2unsigned(lbl_805DC194 * random + lbl_805DC190);
    Packet_801AB6A0 packet = photon_golla_concentrate_packet;
    packet.origin.x = self->f1ac.x;
    packet.origin.y = self->f1ac.y;
    packet.origin.z = self->f1ac.z;
    packet.target.x = target.x;
    packet.target.y = target.y;
    packet.target.z = target.z;
    packet.direction.x = direction.x;
    packet.direction.y = direction.y;
    packet.direction.z = direction.z;
    packet.owner = self->f1a8;
    packet.angle = angle;
    beam = __nw__7TObjectFUl(0x10C);
    if (beam != 0) {
        TPhotonConcentrate__ct((u8 *)beam, (u8 *)&packet, (s32)self, (s32)self->owner_id);
    }
}
#undef self
#pragma pop

#define self ((Golla_801AB868 *)arg0)
#pragma push
#pragma opt_common_subs off
#pragma opt_loop_invariants off
void TPhotonGolla::collect_hit_targets(void *arg0) {
    s32 i;
    Target_801AB868 *candidate;
    TObjPlayer::init_all_slots();
    ((TUnk_804AF8A0 *)self)->mark_enemy_body_contacts();
    if (self->fa4->flags & 0x100000) {
        for (i = 0; i < 16; i++) {
            candidate = get_battle_param__10TObjPlayerFi(i);
            if (candidate != NULL) {
                if (self->f1a8 != NULL) {
                    Vec_801AB868 selected_delta = self->f1a8->pos;
                    Owner_801AB868 *owner;
                    f32 selected_distance;
                    subtract_vector(&selected_delta, &self->pos);
                    Vec_801AB868 candidate_delta = candidate->pos;
                    subtract_vector(&candidate_delta, &self->pos);
                    selected_distance = vec_squared_length((u8 *)&selected_delta);
                    if (vec_squared_length((u8 *)&candidate_delta) < selected_distance) {
                        self->f1a8 = candidate;
                    }
                    owner = (Owner_801AB868 *)find_entity_by_id(self->owner_id);
                    Vec_801AB868 direction = self->f1a8->pos;
                    Vec_801AB868 forward;
                    Vec_801AB868 left;
                    Vec_801AB868 right;
                    if (owner != NULL) {
                        subtract_vector(&direction, &owner->pos);
                    }
                    normalize_vector(&direction);
                    forward.y = forward.x = lbl_805DC188;
                    forward.z = lbl_805DC190;
                    push_matrix_from(identity_matrix);
                    if (owner != NULL) {
                        rotate_matrix_y(0, owner->rot + 0x1555);
                    }
                    rotate_vector_by_matrix(0, &forward, &left);
                    pop_matrices(1);
                    push_matrix_from(identity_matrix);
                    if (owner != NULL) {
                        rotate_matrix_y(0, owner->rot - 0x1555);
                    }
                    rotate_vector_by_matrix(0, &forward, &right);
                    pop_matrices(1);
                    vec3_dot(&direction, &left);
                    vec3_dot(&direction, &right);
                    if (!(vec3_dot(&direction, &left) > lbl_805DC19C) ||
                        !(vec3_dot(&direction, &right) > lbl_805DC19C)) {
                        self->f1a8 = NULL;
                    }
                } else {
                    self->f1a8 = candidate;
                }
            }
        }
    }
    if (self->f1a8 != NULL) {
        queue_photon_blast_hit(obj_getField1c(self->f1a8), 2, 0, self->f150);
    }
    self->f19c = self->f1a8;
}
#pragma pop
#undef self

void TPhotonGolla::render() {
    Self_801ABAA0 *self = (Self_801ABAA0 *)this;
    if (self->started != 0) {
        scroll_strip_uvs(golla_photon_blast_buffer_pair, self->f14C, 0);
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(self->f24);
        push_matrix();
        post_translate_matrix(&self->pos);
        rotate_matrix_y(0, self->f60);
        ((TUnk_804C3248 *)self)->set_photon_blast_joint_callback();
        lbl_805D5660 = model_render_flags;
        ((TRaderMapCore *)(&saved_model_draw_color))->copy_vec4(&model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x200820;
        TObjPlayer::set_global_flag();
        set_chunk_material_override_pair(-1, 0x800);
        ((TUnk_80494AE0 *)((f32 *)&self->color))->set_chunk_material_color();
        ((TObjEneRe7Berura *)self)->draw();
        TObjPlayer::clear_global_state();
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        ((TRaderMapCore *)(&model_material_color))->copy_vec4(&saved_model_draw_color);
        model_render_flags = lbl_805D5660;
        clear_render_context__10TObjPlayerFv(self);
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}

void TPhotonGolla::run_task() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_801ABBAC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801ABBAC, spC) == 0x4) ? 1 : -1];
    Stack_801ABBAC stack;
    s32 temp_r0;
    s32 entity;
    u32 temp_r3_2;
    *(s32 *)&this->unk_1C8 = (s32) (*(s32 *)&this->unk_1C8 + 1);
    if (((s32) *(s32 *)&this->unk_1C8 == 0x32) && ((s32) this->m_1c4 == 0)) {
        this->m_1c4 = 1;
        *(s32 *)&this->unk_1C8 = 0;
        entity = (s32)find_entity_by_id((*(u16 *)((s8 *)arg0 + 0x158)));
        if (entity != 0) {
            VecCopy((Vec *)(&stack.sp8), (const Vec *)(entity + 0x38));
        }
        stack.spC += lbl_805DC1A0;
        temp_r3_2 = __nw__7TObjectFUl(0xD0);
        if (temp_r3_2 != 0U) {
            TPhotonMagicSquare__ct((u8 *)temp_r3_2, (s32)arg0, 3, (s32)&stack.sp8, 0xFA, (f32)lbl_805DC1A4);
        }
    }
    if ((lbl_805DC1A8 == (f32) *(s32 *)&this->unk_1C8) && ((s16) this->m_b8 == 1)) {
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera(5);
        *(s32 *)&this->unk_1C8 = 0;
        ((TObjMotion *)arg0)->set_field_b8(0);
        spawn_photon_blast_attachment_effects(arg0, 2);
    }
    this->m_1b8 = (s16) this->m_b8;
    ((TUnk_804C3248 *)arg0)->update_state();
    advance_animation_playback(arg0);
    ((TUnk_804C3248 *)arg0)->update_photon_blast_attachments();
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (*(s16 *)((s8 *)arg0 + 0x14C) + 0xF);
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (u8) *(s16 *)((s8 *)arg0 + 0x14C);
    if ((s32) *(s32 *)&this->unk_1C8 == 0x50) {
        VecCopy((Vec *)(arg0 + 0x1AC), (const Vec *)(this->m_148 + 0x44));
        spawn_particle_effect((arg0 + 0x1AC), 0x133);
        TPhotonGolla::spawn_concentrate(arg0);
    }
    temp_r0 = *(s32 *)&this->unk_1C8;
    if ((temp_r0 == 0x56) || (temp_r0 == 0x5C) || (temp_r0 == 0x62) || (temp_r0 == 0x68) || (temp_r0 == 0x6E) || (temp_r0 == 0x74)) {
        TPhotonGolla::spawn_concentrate(arg0);
    }
    if ((s32) this->m_1c4 != 0) {
        play_persistent_sound(0x4002462F, (s32)arg0, 0, 0, 0);
    }
}
}
