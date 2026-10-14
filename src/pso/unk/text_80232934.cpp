#include "types.h"
struct Vec_80232934 { f32 x; f32 y; f32 z; };

struct Quad_80232934 { u32 a; u32 b; u32 c; u32 d; };

struct Ctx_80232934 { u8 buf[0x10]; };

struct Obj_80232934 {
    u8 pad[0x20];
    u8 f20[0xC];
    Vec_80232934 pos;
    u8 f38[0x10];
    s32 f48;
    f32 f4c;
};

extern "C" {
void get_bml_model(s32, s32);
void init_texture_copy_rect(Ctx_80232934 *, void *, void *, s32, s32);
void approach_position_if_far(Vec_80232934 *, Vec_80232934 *, f32);
void approach_alpha_clamped(void *, Quad_80232934 *, f32);
void copy_slot_to_anim_frame(Ctx_80232934 *);
void fn_800829E0(Ctx_80232934 *);
void func_80141618__Fv(void);
void set_depth_buffer_settings_id__FUl(u32);
void begin_effect_render__13TParticleCtrlFv(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void scale_matrix(s32, f32, f32, f32);
void translate_matrix(s32, f32, f32, f32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(void *);
void draw_ginja_object(void);
void set_chunk_material_color(void *, s32);
extern Vec_80232934 lbl_8044D5A8;
extern Quad_80232934 lbl_8044D5B4;
extern u8 lbl_804CC868[];
extern u8 technique_ringwave_texture_list[];
extern s32 lbl_805D5660;
extern s32 technique_effect_bml;
extern s32 model_render_flags;
extern const f32 lbl_805DC840;
extern const f32 lbl_805DC844;
extern const f32 lbl_805DC848;
void grants_flash_render(Obj_80232934 *arg0);
}

extern "C" {

void grants_flash_render(Obj_80232934 *arg0) {
    Ctx_80232934 ctx;
    s32 id;
    if (get_global_state__14TOKeyMachine01Fv() == 0 || get_global_state__14TOKeyMachine01Fv() == 0x12 ||
        get_global_state__14TOKeyMachine01Fv() == 0xF) {
        return;
    }
    init_texture_copy_rect(&ctx, lbl_804CC868, technique_ringwave_texture_list, 0, arg0->f48 + 1);
    Vec_80232934 v = lbl_8044D5A8;
    Quad_80232934 q = lbl_8044D5B4;
    approach_alpha_clamped(arg0->f38, &q, lbl_805DC840);
    approach_position_if_far(&arg0->pos, &v, arg0->f4c);
    fn_800829E0(&ctx);
    id = model_render_flags;
    lbl_805D5660 = id;
    model_render_flags = id | 0x10;
    set_chunk_material_color(arg0->f38, id);
    set_depth_buffer_settings_id__FUl(3);
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    post_translate_matrix(arg0->f20);
    scale_matrix(0, arg0->pos.x, arg0->pos.y, arg0->pos.z);
    translate_matrix(0, lbl_805DC844, lbl_805DC848, lbl_805DC844);
    set_global_param__8TObjFishFi(lbl_804CC868);
    get_bml_model(technique_effect_bml, 10);
    draw_ginja_object();
    pop_matrix();
    copy_slot_to_anim_frame(&ctx);
    func_80141618__Fv();
    model_render_flags = lbl_805D5660;
}

}
