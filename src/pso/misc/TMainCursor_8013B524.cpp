#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VOff_8013B524_arg0_8013B524 { char pad_0[0x4C]; char f_4C[1]; };

void render__11TMainCursorFPv(u8 *arg0);
void update_chair__11TMainCursorFPv(void *arg0);
void TMainCursor__sub_8013E2DC(void);
M2C_UNK rotate_matrix_z(M2C_UNK, M2C_UNK);
void draw_chunk_object(void);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK offset_point_toward_camera(void *, M2C_UNK *, f32);
void play_sound__15TPlyPhotonChairFPv(void *);
M2C_UNK translate_matrix_vec3(M2C_UNK, M2C_UNK *);
void update_parts2__15TPlyPhotonChairFPv(void *);
void update_parts__15TPlyPhotonChairFPv(void *);
M2C_UNK update_photon_chair__11TMainCursorFi(void *);

void update_chair__11TMainCursorFPv(void *arg0) {
    struct VOff_8013B524_arg0_8013B524 *self = (struct VOff_8013B524_arg0_8013B524 *)arg0;
    update_parts2__15TPlyPhotonChairFPv(self->f_4C);
    play_sound__15TPlyPhotonChairFPv(self->f_4C);
    TMainCursor__sub_8013E2DC();
    draw_chunk_object();
    update_parts__15TPlyPhotonChairFPv(self->f_4C);
}

extern u8 *camera_ctrl_instance;
extern const f32 TMainCursor__data_805DB0C0;

void render__11TMainCursorFPv(u8 *arg0) {
    M2C_UNK sp8;
    f32 temp_f31;

    begin_effect_render__13TParticleCtrlFv();
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x30);
    push_matrix();
    offset_point_toward_camera(arg0 + 0x40, &sp8, M2C_FIELD(arg0, f32 *, 0x2C));
    translate_matrix_vec3(0, &sp8);
    rotate_matrix_y(0, M2C_FIELD(camera_ctrl_instance, s32 *, 0x194));
    push_matrix();
    rotate_matrix_z(0, 0x2AAA);
    translate_matrix(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv((void *)(arg0));
    pop_matrix();
    push_matrix();
    rotate_matrix_z(0, 0x7FFF);
    translate_matrix(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv((void *)(arg0));
    pop_matrix();
    push_matrix();
    rotate_matrix_z(0, 0xD554);
    translate_matrix(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv((void *)(arg0));
    pop_matrix();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

}
