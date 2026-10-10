#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base1_8017262C { char pad[0x18]; };
struct VObj1_8017262C : Base1_8017262C { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

void TOMonumentAncient01__vt14(void);
void render__19TOMonumentAncient01Fv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
M2C_UNK get_bml_model(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void TOMonumentAncient01__vt14(void) {  }

extern s32 TOMonumentAncient01__resource_bundle;

void render__19TOMonumentAncient01Fv(u8 *arg0) {
    if (((VObj1_8017262C*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        get_bml_model(TOMonumentAncient01__resource_bundle, 2);
        draw_ginja_object();
        begin_effect_render__13TParticleCtrlFv();
        get_bml_model(TOMonumentAncient01__resource_bundle, 1);
        draw_ginja_object();
        get_bml_model(TOMonumentAncient01__resource_bundle, 0);
        draw_ginja_object();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

}
