#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__14TPhotonRainbowFv(void *arg0, s16 arg1);
void render__14TPhotonRainbowFv(u8 *arg0);
void run_task__14TPhotonRainbowFv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *lbl_805D4DF0;

void render__14TPhotonRainbowFv(u8 *arg0) {
    if ((void *) lbl_805D4DF0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(lbl_805D4DF0, f32 *, 0x178);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(lbl_805D4DF0, f32 *, 0x180);
    }
    begin_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x90);
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    rotate_matrix_y(0, (s32) M2C_FIELD(arg0, s32 *, 0x60) / 2);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x98));
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x94);
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    rotate_matrix_y(0, 0x10000 - M2C_FIELD(arg0, s32 *, 0x60));
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x9C));
    TObjPlayer__sub_803D9B78();
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
