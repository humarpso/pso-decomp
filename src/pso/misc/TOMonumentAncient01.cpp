#include "types.h"

extern "C" {

struct Base1_8017262C { char pad[0x18]; };
struct VObj1_8017262C : Base1_8017262C { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

void TOMonumentAncient01__vt14(void);
void render__19TOMonumentAncient01Fv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_object();
s32 get_bml_model(s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(s32);

void TOMonumentAncient01__vt14(void) {  }

extern s32 TOMonumentAncient01__resource_bundle;

void render__19TOMonumentAncient01Fv(u8 *arg0) {
    if (((VObj1_8017262C*)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) == 1) {
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
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
