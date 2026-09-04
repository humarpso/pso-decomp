#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__14TBoss6GravBallFv(void *arg0, s16 arg1);
void update_charge_effects__14TBoss6GravBallFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6GravBall__sub_803231D0(void *, int);
M2C_UNK TBoss6GravBall__sub_80323278(void *, int);
void TBoss6GravBall__sub_80323348(void *);
M2C_UNK TBoss6GravBall__sub_803233AC();
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
s32 get_state__14TBoss6GravBallFPv(int);
void init_parts__14TBoss6GravBallFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_charge_effects__14TBoss6GravBallFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r3;

    TBoss6GravBall__sub_803233AC();
    TOTrapAncient01__sub_80226578((int) (0x4003C418), (void *) (arg0), (void *) (arg0 + 0xC8), (int) (0), (int) (0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if (temp_r0 >= 0x96) {
        if (temp_r0 == 0x96) {
            TBoss6GravBall__sub_80323278((void *) (arg0), (int) (3));
        }
    } else if (temp_r0 > 0x4B) {
        temp_r0_2 = temp_r0 & 0xF;
        if (temp_r0_2 == 0) {
            TBoss6GravBall__sub_80323278((void *) (arg0), (int) (3));
        } else if (temp_r0_2 == 0xE) {
            TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (3));
        }
    } else {
        temp_r0_3 = temp_r0 & 0xF;
        if (temp_r0_3 == 0) {
            TBoss6GravBall__sub_80323278((void *) (arg0), (int) (3));
        } else if (temp_r0_3 == 0xA) {
            TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (3));
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) + 1);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 1);
    temp_r3 = get_state__14TBoss6GravBallFPv((int) (M2C_FIELD(arg0, s32 *, 0xAC)));
    switch (temp_r3) {
    case 29:
    case 30:
    case 39:
        return;
    case 31:
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC4) == 0) {
            TObjEneDellBiter__sub_80087350((void *) (arg0 + 0xC8), (int) (0x21C));
            TObjEneDellBiter__sub_80087350((void *) (arg0 + 0xC8), (int) (0x21D));
            M2C_FIELD(arg0, s32 *, 0xC4) = 1;
        }
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (5));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (6));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (7));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (8));
        return;
    case 32:
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (4));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (3));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (5));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (6));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (7));
        TBoss6GravBall__sub_803231D0((void *) (arg0), (int) (8));
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
        TBoss6GravBall__sub_80323348((void *)((void *) (arg0)));
        M2C_FIELD(arg0, s32 *, 0xB0) = 2;
        TBoss3Volopt__sub_8022675C((int) (0x4003C417), (void *) (arg0 + 0xC8), (int) (0), (int) (0));
        return;
    default:
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
}

extern M2C_UNK __vt__14TBoss6GravBall[];

void *__dt__14TBoss6GravBallFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss6GravBall;
        init_parts__14TBoss6GravBallFPv(arg0);
        TBoss6GravBall__sub_80323348((void *)(arg0));
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
