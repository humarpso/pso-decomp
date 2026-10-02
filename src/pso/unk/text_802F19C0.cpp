#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw_particle_effect(void* a0);
void fn_802F19C0(void);
int draw_ginja_model_with_motion(void*, void*, float);
void *__ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);
int begin_effect_render__13TParticleCtrlFv(void);
int clear_global_state__10TObjPlayerFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int func_80141618__Fv(void);
int set_depth_buffer_settings_id__FUl(void*);
int set_global_flag__10TObjPlayerFv(void);
int set_global_param__8TObjFishFi(void*);

extern void *tl_07;
extern void *lbl_805D6960;

void fn_802F19C0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    lbl_805D6960 = o;
}

    extern int lbl_805D6954;
void draw_particle_effect(void* a0) { set_depth_buffer_settings_id__FUl((void*)3); begin_effect_render__13TParticleCtrlFv(); set_global_param__8TObjFishFi((void*)(lbl_805D6954)); set_global_flag__10TObjPlayerFv(); draw_ginja_model_with_motion((void*)(*(int*)((char*)a0 + 0x1c)), (void*)(*(int*)((char*)a0 + 0x20)), *(float*)((char*)a0 + 0x28)); clear_global_state__10TObjPlayerFv(); end_effect_render__13TParticleCtrlFv(); func_80141618__Fv(); }

}
