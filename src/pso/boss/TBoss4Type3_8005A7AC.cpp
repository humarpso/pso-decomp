#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw__11TBoss4Type3FPv(void *arg0);
void TBoss4Type3__sub_8005A438(void *);
void TOHangerMachine01__sub_803D9C00(void *);
void fn_80051E9C(int, f32);
void toggle_particle_effect__10TObjPlayerFv(void *);
void TParticleCtrl__sub_801E2F20(void);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);

void draw__11TBoss4Type3FPv(void *arg0) {
    toggle_particle_effect__10TObjPlayerFv(arg0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TBoss4Type3__sub_8005A438(arg0);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 1152));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    fn_80051E9C(M2C_FIELD(arg0, u16 *, 0x3BA), M2C_FIELD(arg0, f32 *, 0x3C8));
    TObjPlayer__sub_803D9B78();
    TParticleCtrl__sub_801E2F20();
}

}
