#include "types.h"

extern "C" {

struct BarrierBase_80157F30 { char pad[0x18]; };
struct BarrierObj_80157F30 : BarrierBase_80157F30 {
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

void *create__17TOBarrierEnergy01FPv(void *arg0);
void render__17TOBarrierEnergy01Fv(u8 *arg0);
void *TOBarrierEnergy01__ct(void *, void *, void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(s32);

extern u8 *TOBarrierEnergy01__texture_lists;
extern s32 lbl_805D5898;

void render__17TOBarrierEnergy01Fv(u8 *arg0) {
    if (((BarrierObj_80157F30*)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0x34), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB0));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)TOBarrierEnergy01__texture_lists + 8));
        draw_ginja_object(lbl_805D5898);
        pop_matrix();
    }
}

extern void *tl_05;

void *create__17TOBarrierEnergy01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TOBarrierEnergy01__ct(o, tl_05, arg0);
    }
    return o;
}

}
