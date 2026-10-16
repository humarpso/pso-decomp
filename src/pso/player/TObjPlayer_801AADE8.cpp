#include "types.h"
#include "pso/unk/TPhotonFarlla.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/TLobby.h"
#include "pso/object/TObjFish.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Color_801AAF00 { f32 a, r, g, b; };

struct Vec_801AAF00 { f32 x, y, z; };

struct Self_801AAF00 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AAF00 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x184 - 0x14E];
    Color_801AAF00 color;
    u8 pad5[0x1A0 - 0x194];
    s32 started;
};

extern "C" {
extern u8 *photon_blast_shared_resource;
extern u32 estlla_photon_blast_model;
void create_estlla_photon_blast_model(void);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 scroll_strip_uvs(void *, s16, int);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 set_photon_blast_joint_callback__13TUnk_804C3248Fv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 translate_matrix(int, f32, f32, f32);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
extern Color_801AAF00 saved_model_draw_color;
extern Color_801AAF00 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *farlla_photon_blast_model_buffers;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void render__13TPhotonFarllaFv(Self_801AAF00 *self);
}

extern "C" {

void sub_801AAE6C__13TPhotonFarllaFv(void* a0);
s32 mark_enemy_body_contacts__13TUnk_804AF8A0Fv(void *);
s32 queue_photon_blast_hit(u16, s32, s32, f32);
s32 destroy_buffer_pair(void*, s32);
u32 obj_getField1c();

extern u32 estlla_photon_blast_model;

void TObjPlayer::destroy_global_buffer() {
    if ((u32) estlla_photon_blast_model != 0U) {
        destroy_buffer_pair((void*)estlla_photon_blast_model, 1);
    }
    estlla_photon_blast_model = 0U;
}

    extern const float lbl_805DC158;

void create_estlla_photon_blast_model(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x14))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (((TLobby *)temp_r3)->alloc_tables(*(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x98)) + 0x2C), 0));
    }
    (*(s32 *)&estlla_photon_blast_model) = var_r0;
}

void TPhotonFarlla::sub_801AAE6C() { *(float*)((char*)this + 0x184) = lbl_805DC158; *(float*)((char*)this + 0x188) = lbl_805DC158; *(float*)((char*)this + 0x18c) = lbl_805DC158; *(float*)((char*)this + 0x190) = lbl_805DC158; }

void TPhotonFarlla::update_all_slots() {
    s32 var_r31;

    TObjPlayer::init_all_slots();
    mark_enemy_body_contacts__13TUnk_804AF8A0Fv(this);
    if (*(s32 *)((s8 *)(*(void **)((s8 *)this + 0xA4)) + 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (TObjPlayer::get_battle_param(var_r31) != 0U) {
                queue_photon_blast_hit((u16) obj_getField1c(), 0, 0, *(f32 *)((s8 *)this + 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}
void TPhotonFarlla::render() {
    Self_801AAF00 *self = (Self_801AAF00 *)this;
    if (self->started != 0) {
        scroll_strip_uvs(farlla_photon_blast_model_buffers, self->f14C, 0);
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(self->f24);
        push_matrix();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, self->f60);
        set_photon_blast_joint_callback__13TUnk_804C3248Fv(self);
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x200820;
        TObjPlayer::set_global_flag();
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
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

}
