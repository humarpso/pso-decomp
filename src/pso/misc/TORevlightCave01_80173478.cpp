#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model(s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void TORevlightCave01__sub_80173478(void * _w0) {  }

void run_task__16TORevlightCave01Fv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TORevlightCave01__sub_80173478((void *)((void *) (arg0)));
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + M2C_FIELD(arg0, s32 *, 0xCC));
}

void render__16TORevlightCave01Fv(u8 *arg0) {
    if (((TORevlightCave01_80173478*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x64));
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        draw_ginja_model(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4));
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xC8));
        draw_ginja_model(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x2C), s32 *, 4));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

}
