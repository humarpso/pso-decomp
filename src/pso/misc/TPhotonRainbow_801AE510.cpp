#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TPhotonRainbowFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

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
    TObjPlayer__sub_803D9214(0, (s32) M2C_FIELD(arg0, s32 *, 0x60) / 2);
    TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x98));
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x94);
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, 0x10000 - M2C_FIELD(arg0, s32 *, 0x60));
    TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x9C));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
