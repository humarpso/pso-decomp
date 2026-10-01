#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec3_80352240 {
    f32 x;
    f32 y;
    f32 z;
};

extern "C" {
extern const f32 lbl_805DFEE4;
extern const f32 lbl_805DFEE8;
void TObjLobbyMain__sub_80352624(u8 *arg0);
extern const f32 TObjLobbyMain__data_805DFEE0;
extern const f32 lbl_805DFEE4;
void TObjLobbyMain__sub_803525F0(u8 *arg0);
s32 fn_80352094();
void TObjLobbyMain__sub_803520DC(u8 *arg0);
void TObjLobbyMain__sub_803521A4(u8 *arg0);
void set_param_ptr__11TBoss4Type2FPvi(void *, int);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void TCameraCtrl__sub_803D8934(int, Vec3_80352240 *, Vec3_80352240 *);
void TObjPlayer__sub_803D8CD4(int);
void TObjPlayer__sub_803D9214(int, s32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
extern Vec3_80352240 lbl_804790D0[];
extern Vec3_80352240 lbl_804790DC[];
void TObjLobbyMain__sub_80352240(u8 *arg0);
}

extern "C" {

void TObjLobbyMain__sub_803520D8(void);
void reset_state__13TObjLobbyMainFPv(void *arg0);
void update_computer_machines__13TObjLobbyMainFv(void);
void update_particles__13TObjLobbyMainFPv(void *arg0);
M2C_UNK PPCSync();
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);
s32 fn_80352094();

void TObjLobbyMain__sub_803520D8(void) {  }

void TObjLobbyMain__sub_803520DC(u8 *arg0) {
    u32 temp_r0;
    M2C_FIELD(arg0, u32 *, 0xCC) = ((u32)fn_80352094());
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xCC);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xC;
        return;
    case 5:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xF;
        return;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xA;
        return;
    case 3:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0x10;
        return;
    case 9:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0x11;
        return;
    case 8:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xB;
        return;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xE;
        return;
    case 10:
        M2C_FIELD(arg0, s16 *, 0xD0) = 1;
        return;
    case 11:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xD;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0xD0) = (s16) M2C_FIELD(arg0, s16 *, 0xD2);
        return;
    }
}

void TObjLobbyMain__sub_803521A4(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x84);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0xD2) = 1;
        return;
    case 2:
        M2C_FIELD(arg0, s16 *, 0xD2) = 2;
        return;
    case 3:
        M2C_FIELD(arg0, s16 *, 0xD2) = 3;
        return;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xD2) = 4;
        return;
    case 5:
        M2C_FIELD(arg0, s16 *, 0xD2) = 5;
        return;
    case 6:
        M2C_FIELD(arg0, s16 *, 0xD2) = 6;
        return;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xD2) = 7;
        return;
    case 8:
        M2C_FIELD(arg0, s16 *, 0xD2) = 8;
        return;
    case 9:
        M2C_FIELD(arg0, s16 *, 0xD2) = 9;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0xD2) = 0;
        return;
    }
}

void TObjLobbyMain__sub_80352240(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0xD0)) {
    case 3:
    if (*(void **)(arg0 + 0xD8) != NULL) {
        Vec3_80352240 v = lbl_804790D0[0];
        set_param_ptr__11TBoss4Type2FPvi(*(void **)(arg0 + 0xD8), 0x222);
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D8CD4(0);
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, *(s32 *)(arg0 + 0x60));
        TCameraCtrl__sub_803D8934(0, &v, &v);
        copy_pos__11TNowLoadingFPvPv(*(void **)(arg0 + 0xD8), &v);
        TObjPlayer__sub_803D9B78();
    }
    if (*(void **)(arg0 + 0xDC) != NULL) {
        Vec3_80352240 v = lbl_804790DC[0];
        set_param_ptr__11TBoss4Type2FPvi(*(void **)(arg0 + 0xDC), 0x222);
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D8CD4(0);
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, *(s32 *)(arg0 + 0x60));
        TCameraCtrl__sub_803D8934(0, &v, &v);
        copy_pos__11TNowLoadingFPvPv(*(void **)(arg0 + 0xDC), &v);
        TObjPlayer__sub_803D9B78();
    }
        break;
    }
}

void update_particles__13TObjLobbyMainFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 2) {
        switch ((s16) M2C_FIELD(arg0, s16 *, 0xD0)) {
        case 3:
            if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
                clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
                clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xDC));
            }
            break;
        default:
            if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xDC));
            }
            break;
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xDC));
        }
    }
}

extern s32 lbl_805D53A4;
extern s32 lbl_805D6ED0;
extern s32 lbl_805D6ED4;
extern s32 lbl_805D6ED8;

void update_computer_machines__13TObjLobbyMainFv(void) {
    if ((s32) lbl_805D6ED8 != (s32) lbl_805D53A4) {
        lbl_805D6ED8 = lbl_805D53A4;
        TOComputerMachine01__sub_8023DDC8(lbl_805D6ED0, 1, 1, 0xA, 1);
        TOComputerMachine01__sub_8023DDC8(lbl_805D6ED4, 0, -0x14, 0x1A, 1);
        PPCSync();
    }
}

extern const f32 TObjLobbyMain__data_805DFEE0;

void TObjLobbyMain__sub_803525F0(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (M2C_FIELD(arg0, f32 *, 0xD4) + lbl_805DFEE4);
    if (M2C_FIELD(arg0, f32 *, 0xD4) >= TObjLobbyMain__data_805DFEE0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) TObjLobbyMain__data_805DFEE0;
    }
}

void TObjLobbyMain__sub_80352624(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (M2C_FIELD(arg0, f32 *, 0xD4) - lbl_805DFEE4);
    if (M2C_FIELD(arg0, f32 *, 0xD4) <= lbl_805DFEE8) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) lbl_805DFEE8;
        TObjLobbyMain__sub_803520DC((u8 *)(arg0));
        TObjLobbyMain__sub_80352240((u8 *)((void *) (arg0)));
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DFEE8;
    }
}

void reset_state__13TObjLobbyMainFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != fn_80352094()) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) TObjLobbyMain__data_805DFEE0;
    }
}

}
