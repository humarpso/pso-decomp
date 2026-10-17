#include "types.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/player/TUnk_80494AE0.h"
#include "pso/boss/TBoss2DeRolLe.h"
#include "pso/math/MatrixTransforms.h"
#include "pso/player/TObjPlayer_801ADC6C.h"
#include "pso/system/ChunkMaterialState.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TPhotonPilla.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"

typedef struct { f32 x; f32 y; f32 z; } Vec3;

struct Color_801ADDDC { f32 a, r, g, b; };

struct Vec_801ADDDC { f32 x, y, z; };

struct Self_801ADDDC {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801ADDDC pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x180 - 0x14E];
    Color_801ADDDC color;
    u8 pad5[0x1A4 - 0x190];
    s32 started;
};

typedef struct Vec_801ADD10 { f32 x, y, z; } Vec_801ADD10;

typedef struct Packet_801ADD10 { Vec_801ADD10 pos; u32 w[9]; } Packet_801ADD10;

extern "C" {
s32 scroll_strip_uvs(void *, s16, int);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
extern Color_801ADDDC saved_model_draw_color;
extern Color_801ADDDC model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *pilla_photon_buffer_pair;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void TPhotonLaser__ct(void *, void *, void *, u16);
s32 __nw__7TObjectFUl(s32);
void vec3_add_to(void *, void *);
extern Packet_801ADD10 photon_pilla_laser_packet;
extern Vec_801ADD10 photon_pilla_laser_offset_table[];
extern const f32 lbl_805DC22C;
s32 advance_animation_playback(void *);
s32 play_persistent_sound(s32 id, s32 a1, u32 src, s32 a3, s32 flags);
s32 queue_photon_blast_hit(u16, s32, s32, f32);
s32 spawn_photon_blast_attachment_effects(void *, s32);
u8 *TPhotonMagicSquare__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void *find_entity_by_id(u16 id);
u32 obj_getField1c();

    extern int lbl_805D5D50;
void TObjPlayer__sub_801ADC6C(void) { lbl_805D5D50 = 0; }

void TObjPlayer__sub_801ADC78(void) {  }

    extern const float lbl_805DC228;
void TPhotonPilla::sub_801ADC7C() { this->m_180 = lbl_805DC228; *(float*)((char*)this + 0x184) = lbl_805DC228; this->m_188 = lbl_805DC228; *(float*)((char*)this + 0x18c) = lbl_805DC228; }

void TPhotonPilla::apply_photon_blast_effects() {
    s32 var_r31;

    TObjPlayer::init_all_slots();
    mark_enemy_body_contacts();
    if (*(s32 *)((s8 *)(*(void **)((s8 *)this + 0xA4)) + 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (TObjPlayer::get_battle_param(var_r31) != 0U) {
                queue_photon_blast_hit((u16) obj_getField1c(), 2, 0, *(f32 *)((s8 *)this + 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}

extern const f32 lbl_805DC230;
extern const f32 lbl_805DC234;
extern const f32 lbl_805DC238;
extern const f32 lbl_805DC23C;
extern const f32 lbl_805DC240;
extern const f32 lbl_805DC244;
extern const f32 lbl_805DC248;
extern const f32 lbl_805DC24C;
extern const f32 lbl_805DC250;
extern const f32 lbl_805DC254;

void TPhotonPilla::spawn_laser() {
    Vec_801ADD10 position;
    u8 *laser;
    position.x = *(f32 *)((s8 *)((u8 *)this) + 0x38);
    position.y = lbl_805DC22C;
    position.z = *(f32 *)((s8 *)((u8 *)this) + 0x40);
    vec3_add_to(&position, &photon_pilla_laser_offset_table[*(s32 *)((s8 *)((u8 *)this) + 0x194)]);
    (*(s32 *)((s8 *)((u8 *)this) + 0x194))++;
    Packet_801ADD10 packet = photon_pilla_laser_packet;
    packet.pos.x = position.x;
    packet.pos.y = position.y;
    packet.pos.z = position.z;
    laser = (u8 *) __nw__7TObjectFUl(0x380);
    if (laser != NULL) {
        TPhotonLaser__ct(laser, &packet, this, this->m_17c);
    }
}

void TPhotonPilla::render() {
    Self_801ADDDC *self = (Self_801ADDDC *)this;
    if (this->m_1a4 != 0) {
        scroll_strip_uvs(pilla_photon_buffer_pair, self->f14C, 0);
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(this->texture_id);
        push_matrix();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, this->rotation_y);
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

void TPhotonPilla::run_task() {
    Vec3 sp8;
    s32 entity;
    s32 temp_r3_2;

    *(s32 *)((s8 *)this + 0x1A8) = (s32) (*(s32 *)((s8 *)this + 0x1A8) + 1);
    if (((s32) *(s32 *)((s8 *)this + 0x1A8) == 0x32) && ((s32) this->m_1a4 == 0)) {
        this->m_1a4 = 1;
        *(s32 *)((s8 *)this + 0x1A8) = 0;
        entity = (s32)find_entity_by_id(this->m_17c);
        if (entity != 0) {
            VecCopy((Vec *)&sp8, (const Vec *)(entity + 0x38));
        }
        sp8.y = sp8.y + lbl_805DC230;
        entity = __nw__7TObjectFUl(0xD0);
        if (entity != 0U) {
            TPhotonMagicSquare__ct((u8 *)entity, (s32)this, 3, (s32)&sp8, 0xD2, (f32)lbl_805DC234);
        }
    }
    if ((lbl_805DC238 == (f32) *(s32 *)((s8 *)this + 0x1A8)) && ((s16) this->m_b8 == 1) && ((s32) this->m_1a4 == 1)) {
        begin_photon_summon_camera(4);
        *(s32 *)((s8 *)this + 0x1A8) = 0;
        this->set_field_b8(0);
        spawn_photon_blast_attachment_effects(this, 3);
    }
    this->m_198 = (s16) this->m_b8;
    update_state();
    advance_animation_playback(this);
    update_photon_blast_attachments();
    *(s16 *)((s8 *)this + 0x14C) = (s16) (*(s16 *)((s8 *)this + 0x14C) + 0xF);
    *(s16 *)((s8 *)this + 0x14C) = (s16) (u8) *(s16 *)((s8 *)this + 0x14C);
    temp_r3_2 = *(s32 *)((s8 *)this + 0x1A8);
    if ((lbl_805DC23C == (f32) temp_r3_2) || (lbl_805DC240 == (f32) temp_r3_2) || (lbl_805DC244 == (f32) temp_r3_2) || (lbl_805DC248 == (f32) temp_r3_2) || (lbl_805DC24C == (f32) temp_r3_2) || (lbl_805DC250 == (f32) temp_r3_2)) {
        spawn_laser();
    }
    if (lbl_805DC254 == (f32) *(s32 *)((s8 *)this + 0x1A8)) {
        this->apply_photon_blast_effects();
    }
    if ((s32) this->m_1a4 != 0) {
        play_persistent_sound(0x4002462F, (s32)this, 0, 0, 0);
    }
}

}
