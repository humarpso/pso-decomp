#include "types.h"
#include "pso/item/TItemEffPG.h"

struct RecoveredGlobal_8034FCF0_lbl_804F0BF0 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void disallow_rendering__7TObjectFv(void *);
s32 play_persistent_sound(int, void *, void *, int, int);
extern const f32 lbl_805DFE08;
extern const f32 lbl_805DFE0C;
void TItemEffPG__visual_run(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 create_particle_emitter(s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_804F0BF0[];
extern const f32 lbl_805DFE10;
u8 *TItemEffPG__visual_ct(u8 *arg0, u8 *arg1, u8 *arg2);
s32 get_state_flag__9TMainTaskFv();
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
u32 query_game_join_id__10TObjPlayerFv(int);
s32 set_depth_buffer_settings_id__FUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(int);
s32 draw_ginja_model(void *);
s32 set_chunk_material_color(void *);
extern s32 saved_model_draw_color[];
extern s32 model_material_color[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
}

extern "C" {

void TItemEffPG__begin_visual_fade(void* p);
void *__dt__10TItemEffPGFPvs(void *arg0, s16 arg1);
void TItemWeapon__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__10TItemEffPGFv(void *, int);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804F0AF8[];

void *TItemEffPG::init_fields(s32 _w1, void * _w2) {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804F0AF8;
    set_status_flags__10TObjPlayerFPvUi(this, 1);
    *(u32 *)((s8 *)this + 0x1F8) = -30947;
    *(u32 *)((s8 *)this + 0x1FC) = -7281;
    return this;
}

u8 *TItemEffPG::create() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TItemEffPG *)temp_r3)->init_fields((s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void TItemEffPG__begin_visual_fade(void* p) { *(s32*)((char*)p + 0x58) = 1; }

extern s32 lbl_804F0BF0[];

void TItemEffPG::draw_effect_models() {
    u8 *arg0 = (u8 *)this;
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0 || query_game_join_id__10TObjPlayerFv((int) (*(s32 *)((s8 *)arg0 + 0x1C))) == 0U) {
        return;
    }
    {
        if (((void *) *(u8 **)((s8 *)arg0 + 0x20) != NULL) && (get_state_flag__9TMainTaskFv() == 1)) {
            set_depth_buffer_settings_id__FUl((int) (3));
            lbl_805D5660 = model_render_flags;
            lbl_805D5664 = chunk_polygon_flags_and_mask;
            lbl_805D5668 = chunk_polygon_flags_or_mask;
            copy_vec4__13TRaderMapCoreFPvPv((void *) (saved_model_draw_color), (void *) (model_material_color));
            model_render_flags |= 0x20;
            set_chunk_material_color((void *) (arg0 + 0x28));
            begin_effect_render__13TParticleCtrlFv();
            set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x5C));
            push_matrix();
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x3C)));
            scale_current_matrix((void *) (arg0 + 0x48));
            draw_ginja_model((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x20)) + 4)));
            pop_matrix();
            push_matrix();
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x40)));
            scale_current_matrix((void *) (arg0 + 0x48));
            draw_ginja_model((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x20)) + 0x2C)) + 4)));
            pop_matrix();
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
            copy_vec4__13TRaderMapCoreFPvPv((void *) (model_material_color), (void *) (saved_model_draw_color));
            chunk_polygon_flags_and_mask = lbl_805D5664;
            chunk_polygon_flags_or_mask = lbl_805D5668;
            model_render_flags = lbl_805D5660;
        }
    }
}

void TItemEffPG__visual_run(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    *(s32 *)((s8 *)arg0 + 0x3C) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C) + 0x71C);
    *(s32 *)((s8 *)arg0 + 0x40) = (s32) (*(s32 *)((s8 *)arg0 + 0x40) - 0xE38);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x58) == 0) {
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x50);
        if (temp_f1 < *(f32 *)((s8 *)arg0 + 0x44)) {
            *(f32 *)((s8 *)arg0 + 0x50) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x54));
            temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x44);
            if (temp_f1_2 < *(f32 *)((s8 *)arg0 + 0x50)) {
                *(f32 *)((s8 *)arg0 + 0x50) = temp_f1_2;
            }
        }
        temp_f0 = *(f32 *)((s8 *)arg0 + 0x50);
        *(f32 *)((s8 *)arg0 + 0x4C) = temp_f0;
        *(f32 *)((s8 *)arg0 + 0x48) = temp_f0;
    } else {
        temp_f1_3 = *(f32 *)((s8 *)arg0 + 0x28);
        if (temp_f1_3 <= lbl_805DFE08) {
            queue_destruction__7TObjectFv(arg0);
            disallow_rendering__7TObjectFv(arg0);
        } else {
            *(f32 *)((s8 *)arg0 + 0x28) = (f32) (temp_f1_3 - lbl_805DFE0C);
        }
    }
    play_persistent_sound((int) (0x4001A343), (void *) (arg0), (void *) (arg0 + 0x5C), (int) (0), (int) (0));
}

void *__dt__10TItemEffPGFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0BF0;
        if (*(void **)((s8 *)arg0 + 0x38) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x38)); *(s32 *)((s8 *)arg0 + 0x38) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8034FCF0_lbl_804F0BF0_size[sizeof(RecoveredGlobal_8034FCF0_lbl_804F0BF0) == 0x18 ? 1 : -1];
u8 *TItemEffPG__visual_ct(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f1;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8034FCF0_lbl_804F0BF0 *)&lbl_804F0BF0).value;
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) *(s32 *)((s8 *)arg2 + 0x18);
    *(s32 *)((s8 *)arg0 + 0x20) = (s32) *(s32 *)((s8 *)arg2 + 0x34);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)arg2 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x54) = (f32) *(f32 *)((s8 *)arg2 + 0x30);
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) *(f32 *)((s8 *)arg2 + 0x28);
    VecCopy__FP3VecPC3Vec(arg0 + 0x5C, arg2);
    temp_f1 = *(f32 *)((s8 *)arg2 + 0xC);
    *(f32 *)((s8 *)arg0 + 0x50) = temp_f1;
    *(f32 *)((s8 *)arg0 + 0x4C) = temp_f1;
    *(f32 *)((s8 *)arg0 + 0x48) = temp_f1;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) lbl_805DFE10;
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) lbl_805DFE10;
    *(f32 *)((s8 *)arg0 + 0x30) = (f32) lbl_805DFE10;
    *(f32 *)((s8 *)arg0 + 0x34) = (f32) lbl_805DFE10;
    *(s32 *)((s8 *)arg0 + 0x38) = create_particle_emitter((s32) (arg0 + 0x5C), 0x83);
    *(s32 *)((s8 *)arg0 + 0x58) = 0;
    return arg0;
}

s32 TItemEffPG::countdown_timer() {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)this + 0xD4);
    if (temp_r4 > 0) {
        *(s32 *)((s8 *)this + 0xD4) = (s32) (temp_r4 - 1);
        return 1;
    }
    return 0;
}

extern s32 lbl_804F0C08[];

void *TItemEffPG::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804F0C08;
        __dt__10TItemEffPGFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
