#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__16TObjEneMorfosArmFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803DA798(int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK queue_destruction__7TObjectFv();

extern u32 lbl_805D6D38;

void render__16TObjEneMorfosArmFv(u8 *arg0) {
    if ((u32) lbl_805D6D38 == 0U) {
        queue_destruction__7TObjectFv();
        return;
    }
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    toggle_particle_effect__10TObjPlayerFv();
    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
    TParticleCtrl__sub_801E2F20();
    TObjPlayer__sub_803D9B78();
}

}
