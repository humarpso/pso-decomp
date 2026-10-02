#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802BC4CC_lbl_804712FC {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 is_target_valid__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BD870(u32);
extern RecoveredGlobal_802BC4CC_lbl_804712FC lbl_804712FC;
void TBoss6Type2__sub_802BC4CC(u8 *arg0);
}

extern "C" {

void play_phase_sound__11TBoss6Type2FPv(u8 *arg0);
void update_attack_switch__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);

void update_attack_switch__11TBoss6Type2FPv(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x518) % 24) == 0) {
        spawn_particle_effect_with_flags(arg0 + 0x38, 0x224, 0x2040);
    }
}

void play_phase_sound__11TBoss6Type2FPv(u8 *arg0) {
    M2C_UNK var_r3;
    s32 temp_r0;

    if (is_target_valid__11TBoss6Type2FPv((void *)(arg0)) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x42C);
        switch (temp_r0) {
        case 1:
            var_r3 = 0x6852C;
            break;
        case 2:
            var_r3 = 0x6852D;
            break;
        case 3:
            var_r3 = 0x6852E;
            break;
        case 4:
            var_r3 = 0x6852F;
            break;
        case 5:
        default:
            var_r3 = 0x6852B;
            break;
        }
        TBoss3Volopt__sub_8022675C(var_r3, arg0 + 0x38, 0, 1);
    }
}
typedef char RecoveredGlobal_802BC4CC_lbl_804712FC_size[sizeof(RecoveredGlobal_802BC4CC_lbl_804712FC) == 0x10 ? 1 : -1];
void TBoss6Type2__sub_802BC4CC(u8 *arg0) {
    if (is_target_valid__11TBoss6Type2FPv((void *)(arg0)) == 0) {
        TBoss3Volopt__sub_8022675C((M2C_UNK)(M2C_FIELD(&lbl_804712FC.value, M2C_UNK *, (TBoss6Type2__sub_802BD870(M2C_FIELD(arg0, u32 *, 0x2E4)) * 4))), (void *)((u32) (arg0 + 0x38)), (M2C_UNK)(0), (M2C_UNK)(1));
    }
}

}
