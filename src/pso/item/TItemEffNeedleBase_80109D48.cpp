#include "types.h"
#include "pso/item/TItem.h"
#include "pso/TItemEffNeedleBase.h"
#include "pso/TObject.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"

struct Needle_80109D48 {
    u8 pad0[0x1C];
    u8 m_1c[0x10];
    u8 m_2c[4];
    u8 m_30[0xC];
    void *m_3c;
    u32 m_40;
    u8 m_44[4];
};

extern "C" {
void queue_destruction__7TObjectFv(void *arg0);
void allow_rendering__7TObjectFv(void *arg0);
void disallow_rendering__7TObjectFv(void *arg0);
u32 query_game_join_id__10TObjPlayerFv(int);
extern const f32 lbl_805DAB50;
extern const f32 lbl_805DAB54;
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void rotate_matrix_by_node_angles(void *, s32);
void push_matrix();
s32 pop_matrix(void);
void post_translate_matrix(void *);
void draw_ginja_object(void *);
void set_chunk_material_color(f32 *arg);
extern u8 saved_model_draw_color[];
extern u8 model_material_color[];
extern u32 lbl_805D5660;
extern u32 model_render_flags;
u8 *__ct__18TItemEffNeedleBaseFv(u8 *arg0, void *arg1, u8 *arg2);
s32 __ct__7TObjectFP7TObject();

extern s32 __vt__18TItemEffNeedleBase[];
extern s32 TItemEffNeedleBase__class_name;
extern const f32 lbl_805DAB4C;

void TItemEffNeedleBase::render() {
    Needle_80109D48 *self = (Needle_80109D48 *)this;
    if (((TObject *)self)->all_parents_unqueued_for_destruction() == 0 ||
        query_game_join_id__10TObjPlayerFv(*(int *)self->m_2c) == 0) {
        return;
    }
    if (self->m_3c != NULL) {
        lbl_805D5660 = model_render_flags;
        model_render_flags = lbl_805D5660 | 0x20;
        copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, model_material_color);
        set_chunk_material_color((f32 *)self->m_1c);
        TObjPlayer::notify_fish_if_valid(self->m_40);
        TParticleCtrl::begin_effect_render();
        push_matrix();
        post_translate_matrix(self->m_30);
        rotate_matrix_by_node_angles(self->m_44, 1);
        draw_ginja_object(self->m_3c);
        pop_matrix();
        TParticleCtrl::end_effect_render();
        copy_vec4__13TRaderMapCoreFPvPv(model_material_color, saved_model_draw_color);
        model_render_flags = lbl_805D5660;
    }
}

void TItemEffNeedleBase::run_task() {
    u8 *arg0 = (u8 *)this;
    if (query_game_join_id__10TObjPlayerFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) == 0U) {
        queue_destruction__7TObjectFv((arg0));
        disallow_rendering__7TObjectFv(((void *) (arg0)));
        return;
    }
    allow_rendering__7TObjectFv((arg0));
    if (this->vfunc_6() != 0) {
        *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (*(f32 *)((s8 *)arg0 + 0x1C) - lbl_805DAB50);
        if (*(f32 *)((s8 *)arg0 + 0x1C) <= lbl_805DAB54) {
            queue_destruction__7TObjectFv((arg0));
        }
    }
}

u8 *__ct__18TItemEffNeedleBaseFv(u8 *arg0, void *arg1, u8 *arg2) {
    s32 temp_r4;

    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TItemEffNeedleBase;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TItemEffNeedleBase__class_name;
    *(s32 *)((s8 *)arg0 + 0x2C) = ((TItem *)arg2)->get_field_d8();
    temp_r4 = *(s32 *)((s8 *)arg2 + 0x60);
    *(s32 *)((s8 *)arg0 + 0x48) = temp_r4;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) lbl_805DAB4C;
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805DAB4C;
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) lbl_805DAB4C;
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) lbl_805DAB4C;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
