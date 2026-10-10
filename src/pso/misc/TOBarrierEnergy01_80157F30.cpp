#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *TOBarrierEnergy01__texture_lists;
extern s32 lbl_805D5898;

void render__17TOBarrierEnergy01Fv(u8 *arg0) {
    if (((BarrierObj_80157F30*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(TOBarrierEnergy01__texture_lists, s32 *, 8));
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
