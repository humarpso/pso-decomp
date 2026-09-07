#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80049E9C_lbl_80484AD0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80049E9C_lbl_80484AFC {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80049E9C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss3Volopt__sub_8004812C(int);
s32 TObjParticle__sub_800870BC(void *, void *, int, int);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, void *);
s32 TCameraCtrl__sub_803D8934(int, int, int);
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_80049E9C_lbl_80484AD0 lbl_80484AD0;
extern M2C_UNK lbl_80484AFC[];
extern RecoveredGlobal_80049E9C_lbl_8058D490 lbl_8058D490;
extern u8 *lbl_805D4C10;
extern s32 lbl_805D4D30;
extern const f32 lbl_805D88AC;
extern const f32 lbl_805D88B0;
u8 *TBoss3Volopt__sub_80049E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void *TBoss3Volopt__sub_80049E2C(void *arg0, s16 arg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80484AFC[];

void *TBoss3Volopt__sub_80049E2C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484AFC;
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0));
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80049E9C_lbl_80484AD0_size[sizeof(RecoveredGlobal_80049E9C_lbl_80484AD0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80049E9C_lbl_80484AFC_size[sizeof(RecoveredGlobal_80049E9C_lbl_80484AFC) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_80049E9C_lbl_8058D490_size[sizeof(RecoveredGlobal_80049E9C_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TBoss3Volopt__sub_80049E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80049E9C_lbl_80484AFC *)&lbl_80484AFC).value;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_80484AD0.value), (int) (1));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805D88AC;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0xCC) = arg4;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = arg3;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805D88B0;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805D88B0;
    M2C_FIELD(arg0, f32 *, 0xBC) = TBoss3Volopt__sub_8004812C((int) (0));
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    temp_r4 = (u8 *)(arg0 + 0xB4);
    TCameraCtrl__sub_803D8934((int) (0), (int) (temp_r4), (int) (temp_r4));
    TObjPlayer__sub_803D9B78();
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4C10, u8 **, 0x42C), s32 *, 0x168);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4C10, u8 **, 0x42C), s32 *, 0x16C);
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = TObjParticle__sub_800870BC((void *) (arg0 + 0x38), (void *) (arg0 + 0xE4), (int) (0x112), (int) (2));
    lbl_805D4D30 = (s32) TBoss3Volopt__sub_8004812C((int) (3)) + 0xF0;
    return arg0;
}

}
