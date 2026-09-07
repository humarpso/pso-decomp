#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8008655C_lbl_8048E728 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 is_split_screen(void);
u8 * TParticleCtrl__sub_800858D0(void *, s32, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_particle;
u8 *TParticleCtrl__sub_8008592C(s32 arg0);
s32 is_split_screen(void);
u8 * TParticleCtrl__sub_80085E78(void *, s32, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_particle;
u8 *TParticleCtrl__sub_8008598C(s32 arg0);
extern RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
s32 TParticleCtrl__sub_800861F4(u8 *arg0);
u8 * __dt__7TObjectFv(void *, s16);
void free_from_heap__13TParticleCtrlFPv(void *);
extern RecoveredGlobal_8008655C_lbl_8048E728 lbl_8048E728;
u8 *TParticleCtrl__sub_8008655C(u8 *arg0, s16 arg1);
}

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

u8 *TParticleCtrl__sub_8008592C(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TParticleCtrl__sub_800858D0(temp_r3, arg0, tl_particle));
    }
    return var_r0;
}

u8 *TParticleCtrl__sub_8008598C(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xAC));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TParticleCtrl__sub_80085E78(temp_r3, arg0, tl_particle));
    }
    return var_r0;
}

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

typedef char RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];
s32 TParticleCtrl__sub_800861F4(u8 *arg0) {
    return *M2C_FIELD(M2C_FIELD(&TParticleCtrl__data_80511F70.value, M2C_UNK *, (M2C_FIELD(arg0, u16 *, 0x1C) * 4)), s32 **, 0x28) & 1;
}

void mark_active__13TParticleCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x2000);
    get_object__13TParticleCtrlFPv(0x1F);
}
typedef char RecoveredGlobal_8008655C_lbl_8048E728_size[sizeof(RecoveredGlobal_8008655C_lbl_8048E728) == 0x18 ? 1 : -1];
u8 *TParticleCtrl__sub_8008655C(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8048E728.value;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

}
