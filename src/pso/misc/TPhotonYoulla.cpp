#include "types.h"
#include "pso/misc/TPhotonYoulla.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Color_801AE744 { f32 a, r, g, b; };

struct Vec_801AE744 { f32 x, y, z; };

struct Self_801AE744 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AE744 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x184 - 0x64];
    Color_801AE744 color;
    u8 pad4[0x1A0 - 0x194];
    s32 started;
};

extern "C" {
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 set_photon_blast_joint_callback__13TUnk_804C3248Fv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_material_alpha_compare_reference(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
extern Color_801AE744 saved_model_draw_color;
extern Color_801AE744 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
s32 set_field_b8__10TObjMotionFs(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 * find_entity_by_id(u16);
u8 * photon_base_ct(void *);
void sub_801AE72C__13TPhotonYoullaFv(void *, u8);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_photon_blast_opening_effects(int, int);
s32 spawn_photon_blast_attachment_effects(void *, s32);
extern u8 lbl_804C3B48[];
extern s32 __vt__13TPhotonYoulla[];
extern s32 lbl_805D3528;
extern u8 *photon_blast_shared_resource;
u8 *TPhotonYoulla__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

void TObjPlayer__sub_801AEB74(void);
void TObjPlayer__sub_801AEB80(void);
void *__dt__13TPhotonYoullaFv(void *arg0, s16 arg1);
s32 advance_animation_playback(void *);
s32 get_game_play_mode();
int is_locally_controlled__10TObjPlayerFPv(void*);
s32 update_photon_blast_attachments__13TUnk_804C3248Fv(void *);
s32 spawn_photon_blast_attachment_effects(void *, s32);
s32 TObjPlayer__sub_801AF868(s32);
int TObjPlayer__sub_801BEF60(void*, void*);
s32 emit_idle_water_effect(s32);
s32 has_water_ground_flag(s32);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 check_flag_800000__10TObjPlayerFPv(s32);
void destroy_photon_motion_object(void *, int);
void free_photon__13TUnk_804C3248Fv(void *);
s32 get_main_phase();
s32 is_technique_ready__8TTecCtrlFv();
s32 queue_destruction__7TObjectFv(void *);
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 set_field_b8__10TObjMotionFs(void *, s32);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
int test_flag_2000000__10TObjPlayerFPv(void*);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
s32 update_movement_by_screen__10TObjPlayerFv(s32);

extern const f64 lbl_80446F18;
extern const f32 lbl_805DC264;
extern const f32 lbl_805DC268;
extern const f32 lbl_805DC26C;
extern const f32 lbl_805DC270;
extern const f32 lbl_805DC274;

void TPhotonYoulla::render() {
    Self_801AE744 *self = (Self_801AE744 *)this;
    if (self->started != 0) {
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(self->f24);
        push_matrix();
        post_translate_matrix(&self->pos);
        rotate_matrix_y(0, self->f60);
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x200820;
        TObjPlayer::set_global_flag();
        set_material_alpha_compare_reference(0);
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        set_photon_blast_joint_callback__13TUnk_804C3248Fv(self);
        ((TObjEneRe7Berura *)self)->draw();
        TObjPlayer::clear_global_state();
        set_material_alpha_compare_reference(0xBF);
        clear_render_context__10TObjPlayerFv(self);
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&model_material_color, &saved_model_draw_color);
        model_render_flags = lbl_805D5660;
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}

void TPhotonYoulla::run_task() {
    f32 temp_f1;

    if (((s32) *(s32 *)&this->m_1a4 == 0x32) && ((s32) *(s32 *)&this->m_1a0 == 0)) {
        *(s32 *)&this->m_1a0 = 1;
    }
    if ((lbl_805DC264 == (f32) *(s32 *)&this->m_1a4) && ((s16) this->m_b8 == 1)) {
        spawn_photon_blast_attachment_effects(this, 6);
        *(s32 *)&this->m_1a4 = 0;
        set_field_b8__10TObjMotionFs(this, 0);
    }
    *(s16 *)&this->m_194 = (s16) this->m_b8;
    advance_animation_playback(this);
    update_photon_blast_attachments__13TUnk_804C3248Fv(this);
    *(s16 *)((s8 *)this + 0x14C) = (s16) (*(s16 *)((s8 *)this + 0x14C) + 0xF);
    *(s16 *)((s8 *)this + 0x14C) = (s16) (u8) *(s16 *)((s8 *)this + 0x14C);
    *(s32 *)&this->m_1a4 = (s32) (*(s32 *)&this->m_1a4 + 1);
    if ((f32) *(s32 *)&this->m_1a4 > lbl_805DC268) {
        temp_f1 = *(f32 *)&this->m_184;
        if (temp_f1 > lbl_805DC26C) {
            *(f32 *)&this->m_184 = (f32) (temp_f1 - lbl_805DC270);
        }
    }
    if (lbl_805DC274 == (f32) *(s32 *)&this->m_1a4) {
        queue_destruction__7TObjectFv(this);
    }
}

extern s32 __vt__13TPhotonYoulla[];

void *__dt__13TPhotonYoullaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TPhotonYoulla;
        free_photon__13TUnk_804C3248Fv(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D5D60;

u8 *TPhotonYoulla__ct(u8 *arg0, u8 *arg1) {
    u8 *temp_r3;
    photon_base_ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TPhotonYoulla;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3528;
    *(s32 *)((s8 *)arg0 + 0x138) = 5;
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (arg1));
    *(u16 *)((s8 *)arg0 + 0x17C) = (u16) *(u16 *)((s8 *)arg1 + 0xC);
    *(u8 **)((s8 *)arg0 + 0x180) = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x17C));
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x180));
    if (temp_r3 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) *(s32 *)((s8 *)temp_r3 + 0x60);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0xB8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0xBC);
    ((TObjPlayer *)arg0)->set_field_d8((s32) lbl_804C3B48);
    ((TObjPlayer *)arg0)->set_field_dc(*(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    set_field_b8__10TObjMotionFs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    *(s16 *)((s8 *)arg0 + 0x194) = 1;
    *(s32 *)((s8 *)arg0 + 0x198) = (s32) *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x19C) = (s32) *(s32 *)((s8 *)arg1 + 0x14);
    *(s32 *)((s8 *)arg0 + 0x1A0) = 0;
    sub_801AE72C__13TPhotonYoullaFv(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    *(s32 *)((s8 *)arg0 + 0x1A4) = 0;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x198) == 0) {
        set_field_b8__10TObjMotionFs(arg0, 0);
        *(s32 *)((s8 *)arg0 + 0x198) = 1;
        *(s16 *)((s8 *)arg0 + 0x194) = 0;
        *(s32 *)((s8 *)arg0 + 0x1A0) = 1;
        spawn_photon_blast_attachment_effects(arg0, 6);
    } else {
        spawn_photon_blast_opening_effects((int) (6), (int) (*(u16 *)((s8 *)arg0 + 0x17C)));
    }
    return arg0;
}

void TObjPlayer__sub_801AEB74(void) { lbl_805D5D60 = 0; }

void TObjPlayer__sub_801AEB80(void) {  }

}
