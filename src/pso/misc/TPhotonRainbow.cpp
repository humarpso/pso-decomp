#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__14TPhotonRainbowFv(void *arg0, s16 arg1);
void render__14TPhotonRainbowFv(u8 *arg0);
void run_task__14TPhotonRainbowFv(void *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_chunk_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *camera_ctrl_instance;

void render__14TPhotonRainbowFv(u8 *arg0) {
    if ((void *) camera_ctrl_instance != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(camera_ctrl_instance, f32 *, 0x178);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(camera_ctrl_instance, f32 *, 0x180);
    }
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x90);
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, (s32) M2C_FIELD(arg0, s32 *, 0x60) / 2);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x98));
    pop_matrix();
    push_matrix();
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x94);
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, 0x10000 - M2C_FIELD(arg0, s32 *, 0x60));
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x9C));
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void run_task__14TPhotonRainbowFv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0xB6);
}

extern M2C_UNK __vt__14TPhotonRainbow[];

void *__dt__14TPhotonRainbowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TPhotonRainbow;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
