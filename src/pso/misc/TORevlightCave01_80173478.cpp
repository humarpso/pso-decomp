#include "types.h"

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
void TORevlightCave01__sub_80173478(void * = 0);
void run_task__16TORevlightCave01Fv(u8 *arg0);
}

extern "C" {

struct TORevlightCave01Base_80173478 { char pad[0x18]; };
struct TORevlightCave01_80173478 : TORevlightCave01Base_80173478 {
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

void render__16TORevlightCave01Fv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(s32);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(s32);

void TORevlightCave01__sub_80173478(void * _w0) {  }

void run_task__16TORevlightCave01Fv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TORevlightCave01__sub_80173478((void *)((void *) (arg0)));
    }
    *(s32 *)((s8 *)arg0 + 0xC8) = (s32) (*(s32 *)((s8 *)arg0 + 0xC8) + *(s32 *)((s8 *)arg0 + 0xCC));
}

void render__16TORevlightCave01Fv(u8 *arg0) {
    if (((TORevlightCave01_80173478*)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x64));
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x5C));
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        draw_ginja_model(*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 4));
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0xC8));
        draw_ginja_model(*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 0x2C)) + 4));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model(*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 0x2C)) + 0x2C)) + 4));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

}
