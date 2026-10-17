#include "types.h"
#include "pso/boss/TBoss2DeRolLe.h"
#include "pso/misc/PhotonBlastSummon.h"
#include "pso/misc/obj_band.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/ChunkMaterialState.h"
#include "pso/system/MaterialAlphaCompare.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"
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
s32 clear_render_context__10TObjPlayerFv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 post_translate_matrix(void *);
extern Color_801AE744 saved_model_draw_color;
extern Color_801AE744 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void *find_entity_by_id(u16 id);
void sub_801AE72C__13TPhotonYoullaFv(void *, u8);
s32 spawn_photon_blast_attachment_effects(void *, s32);
extern u8 lbl_804C3B48[];
extern s32 __vt__13TPhotonYoulla[];
extern s32 lbl_805D3528;
extern u8 *photon_blast_shared_resource;
s32 advance_animation_playback(void *);
void __dl__7TObjectFPv(void *);

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
        set_chunk_material_color((f32 *)&self->color);
        ((TUnk_804C3248 *)self)->set_photon_blast_joint_callback();
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
        set_field_b8(0);
    }
    *(s16 *)&this->m_194 = (s16) this->m_b8;
    advance_animation_playback(this);
    update_photon_blast_attachments();
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

void *__dt__13TPhotonYoullaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TPhotonYoulla;
        ((TUnk_804C3248 *)arg0)->free_photon();
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D5D60;

u8 *TPhotonYoulla__ct(TPhotonYoulla *arg0, u8 *arg1) {
    u8 *temp_r3;
    photon_base_ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TPhotonYoulla;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3528;
    *(s32 *)((s8 *)arg0 + 0x138) = 5;
    VecCopy((Vec *)((u8 *)arg0 + 0x38), (const Vec *)(arg1));
    arg0->m_17c = (u16) *(u16 *)((s8 *)arg1 + 0xC);
    *(u8 **)((s8 *)arg0 + 0x180) = (u8 *)find_entity_by_id(arg0->m_17c);
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x180));
    if (temp_r3 != NULL) {
        arg0->rotation_y = (s32) *(s32 *)((s8 *)temp_r3 + 0x60);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0xB8);
    arg0->texture_id = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0xBC);
    ((TObjPlayer *)arg0)->set_field_d8((s32) lbl_804C3B48);
    ((TObjPlayer *)arg0)->set_field_dc(*(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    arg0->m_b8 = 1;
    set_animation__10TObjPlayerFPvs(arg0, arg0->m_b8);
    ((TObjMotion *)arg0)->set_field_b8(arg0->m_b8);
    arg0->m_194 = 1;
    arg0->m_198 = (s32) *(s32 *)((s8 *)arg1 + 0x10);
    arg0->m_19c = (s32) *(s32 *)((s8 *)arg1 + 0x14);
    arg0->m_1a0 = 0;
    sub_801AE72C__13TPhotonYoullaFv(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    arg0->m_1a4 = 0;
    if ((s32) arg0->m_198 == 0) {
        ((TObjMotion *)arg0)->set_field_b8(0);
        arg0->m_198 = 1;
        arg0->m_194 = 0;
        arg0->m_1a0 = 1;
        spawn_photon_blast_attachment_effects(arg0, 6);
    } else {
        spawn_photon_blast_opening_effects(6, (arg0->m_17c));
    }
    return (u8 *)arg0;
}

void TObjPlayer__sub_801AEB74(void) { lbl_805D5D60 = 0; }

void TObjPlayer__sub_801AEB80(void) {  }

}
