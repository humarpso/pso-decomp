#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TMainCursor.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

struct VOff_8013B524_arg0_8013B524 { char pad_0[0x4C]; char f_4C[1]; };

void render__11TMainCursorFPv(u8 *arg0);
void TMainCursor__sub_8013E2DC(void);
s32 rotate_matrix_z(s32, s32);
void draw_chunk_object(void);
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 offset_point_toward_camera(void *, s32 *, f32);
s32 translate_matrix_vec3(s32, s32 *);

void TMainCursor::update_chair() {
    struct VOff_8013B524_arg0_8013B524 *self = (struct VOff_8013B524_arg0_8013B524 *)this;
    TPlyPhotonChair::update_parts2(self->f_4C);
    ((TPlyPhotonChair *)(self->f_4C))->play_sound();
    TMainCursor__sub_8013E2DC();
    draw_chunk_object();
    TPlyPhotonChair::update_parts(self->f_4C);
}

extern u8 *camera_ctrl_instance;
extern const f32 TMainCursor__data_805DB0C0;

void render__11TMainCursorFPv(u8 *arg0) {
    s32 sp8;
    f32 temp_f31;

    TParticleCtrl::begin_effect_render();
    temp_f31 = *(f32 *)((s8 *)arg0 + 0x30);
    push_matrix();
    offset_point_toward_camera(arg0 + 0x40, &sp8, *(f32 *)((s8 *)arg0 + 0x2C));
    translate_matrix_vec3(0, &sp8);
    rotate_matrix_y(0, *(s32 *)((s8 *)camera_ctrl_instance + 0x194));
    push_matrix();
    rotate_matrix_z(0, 0x2AAA);
    translate_matrix(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    ((TMainCursor *)arg0)->update_photon_chair();
    ((TMainCursor *)arg0)->update_chair();
    pop_matrix();
    push_matrix();
    rotate_matrix_z(0, 0x7FFF);
    translate_matrix(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    ((TMainCursor *)arg0)->update_photon_chair();
    ((TMainCursor *)arg0)->update_chair();
    pop_matrix();
    push_matrix();
    rotate_matrix_z(0, 0xD554);
    translate_matrix(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    ((TMainCursor *)arg0)->update_photon_chair();
    ((TMainCursor *)arg0)->update_chair();
    pop_matrix();
    pop_matrix();
    TParticleCtrl::end_effect_render();
}

}
