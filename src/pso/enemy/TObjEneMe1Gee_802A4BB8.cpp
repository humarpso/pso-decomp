#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK TObjFish__sub_803DA798();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK queue_destruction__7TObjectFv();

extern u32 lbl_805D6660;

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0) {
    if ((u32) lbl_805D6660 == 0U) {
        queue_destruction__7TObjectFv();
        return;
    }
    TObjPlayer__sub_803D9B2C();
    begin_effect_render__13TParticleCtrlFv();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x6C));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xA4)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xA0)));
    TObjFish__sub_8001EDB0((void *) (lbl_805D6660), (int) (1));
    TObjFish__sub_803DA798();
    TObjFish__sub_8001EDC4((void *) (lbl_805D6660), (int) (1));
    TObjBoss2Tunnel__sub_803DB470();
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

}
