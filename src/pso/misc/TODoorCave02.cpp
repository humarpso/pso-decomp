#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(void *, f32);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DB4B4;
extern const f32 lbl_805DB4B8;
extern const f32 lbl_805DB4BC;
extern const f32 lbl_805DB4C0;
void TODoorCave02__vt13(u8 *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model(int);
M2C_UNK set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 model_render_flags;
M2C_UNK draw_parts__12TODoorCave02FPvPv(void *arg0_, void *arg1_);
}

extern "C" {

struct Base_80161D38 { char pad[0x18]; };
struct VObj_80161D38 : Base_80161D38 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

void TODoorCave02__vt15(u8 *arg0);
void TODoorCave02__vt18(void);
void render__12TODoorCave02Fv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 is_any_player_within_radius_xz(void *, f32);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model_with_motion(void *, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
s32 is_in_view_depth(void *, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);

void TODoorCave02__vt18(void) {  }

extern u8 *cave_door02_resources;
extern const f32 lbl_805DB4B0;

void TODoorCave02__vt15(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(cave_door02_resources, s32 *, 4);
        if (is_any_player_within_radius_xz(arg0, lbl_805DB4B0) != 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)0, (M2C_UNK)8);
            play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(cave_door02_resources, s32 *, 0);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)NULL, (M2C_UNK)8);
        play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
    }
}

extern u8 *cave_door02_resources;
extern const f32 lbl_805DB4C4;

void TODoorCave02__vt13(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 0x100000) {
        M2C_FIELD(arg0, f32 *, 0xD8) = (f32) (M2C_FIELD(arg0, f32 *, 0xD8) + lbl_805DB4B4);
        if (lbl_805DB4B8 <= M2C_FIELD(arg0, f32 *, 0xD8)) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFEFFFFF);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xD8) = (f32) (M2C_FIELD(arg0, f32 *, 0xD8) - lbl_805DB4B4);
        if (M2C_FIELD(arg0, f32 *, 0xD8) <= lbl_805DB4BC) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0x100000);
        }
    }
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (is_any_player_within_radius_xz((void *) (arg0), (f32) (lbl_805DB4C0)) == 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        play_sound_effect((M2C_UNK)((int) (0x42807)), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    }
}

M2C_UNK draw_parts__12TODoorCave02FPvPv(void *arg0_, void *arg1_) {
    u8 *arg0 = (u8 *)arg0_;
    u8 *arg1 = (u8 *)arg1_;
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    push_matrix();
    post_translate_matrix((void *) (arg1 + 8));
    draw_ginja_model((int) (M2C_FIELD(arg1, s32 *, 4)));
    begin_effect_render__13TParticleCtrlFv();
    temp_r4 = model_render_flags;
    lbl_805D5660 = temp_r4;
    model_render_flags = temp_r4 | 0x10;
    set_chunk_material_color((void *) (arg0 + 0xD4));
    push_matrix();
    temp_r31 = M2C_FIELD(arg1, u8 **, 0x2C);
    post_translate_matrix((void *) (temp_r31 + 8));
    draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    pop_matrix();
    push_matrix();
    temp_r31_2 = M2C_FIELD(temp_r31, u8 **, 0x30);
    post_translate_matrix((void *) (temp_r31_2 + 8));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    pop_matrix();
    set_chunk_material_color(chunk_material_color_half_alpha_f32);
    model_render_flags = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void render__12TODoorCave02Fv(u8 *arg0) {
    if ((((VObj_80161D38 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) && (is_in_view_depth(arg0, lbl_805DB4C4) != 0)) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
            set_global_param__8TObjFishFi(*(s32 *)(cave_door02_resources + ((M2C_FIELD(arg0, s32 *, 0xD0) * 4) & 4)));
            draw_parts__12TODoorCave02FPvPv((void *)(arg0), (void *)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C)));
            draw_parts__12TODoorCave02FPvPv((void *)(arg0), (void *)(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x30)));
        } else {
            set_global_param__8TObjFishFi(M2C_FIELD(cave_door02_resources, s32 *, 4));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, void **, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        }
        pop_matrix();
    }
}

}
