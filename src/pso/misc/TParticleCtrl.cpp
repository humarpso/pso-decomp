#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1);
void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1);
void check_player_proximity__13TParticleCtrlFPv(u8 *arg0);
void mark_active__13TParticleCtrlFPv(void *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK get_object__13TParticleCtrlFPv(M2C_UNK);

extern s32 lbl_805D2930;
extern s32 lbl_805D53A0;
extern const f32 lbl_805D947C;
extern const f32 lbl_805D9480;

void check_player_proximity__13TParticleCtrlFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0));
    if ((temp_r3 != 0U) && (TObjPlayer__sub_80141CF8((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < lbl_805D947C)) {
        if (M2C_FIELD(arg0, f32 *, 0x68) > lbl_805D9480) {
            lbl_805D2930 = 1;
            return;
        }
        lbl_805D2930 = 0;
    }
}

extern M2C_UNK lbl_8048E6A8[];

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6A8;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8048E6DC[];

void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6DC;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void mark_active__13TParticleCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x2000);
    get_object__13TParticleCtrlFPv(0x1F);
}

}
