#include "pso/TObjVoloptShutter.h"

TObjVoloptShutter::~TObjVoloptShutter() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TObjVoloptShutterFv(void *arg0);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4684(s32);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern s32 lbl_805D4D48;
extern s32 lbl_805D4D4C;
extern s32 lbl_805D4D50;
extern s32 some_id_805c6f74;
extern f32 TObjVoloptShutter__data_805D88F4;

void render__17TObjVoloptShutterFv(void *arg0) {
    toggle_particle_effect__10TObjPlayerFv();
    set_global_param__8TObjFishFi(lbl_805D4D50);
    TObjPlayer__sub_803D9B2C();
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x30));
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D9624(0, TObjVoloptShutter__data_805D88F4, TObjVoloptShutter__data_805D88F4, M2C_FIELD(arg0, f32 *, 0x2C));
    TObjPlayer__sub_803E4684(lbl_805D4D4C);
    TObjPlayer__sub_803D9624(0, TObjVoloptShutter__data_805D88F4, M2C_FIELD(arg0, f32 *, 0x28), TObjVoloptShutter__data_805D88F4);
    TObjPlayer__sub_803E4684(lbl_805D4D48);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
