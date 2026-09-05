#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjLobbyMain__sub_803520DC();
M2C_UNK TObjLobbyMain__sub_80352240(void *);
extern const f32 lbl_805DFEE4;
extern const f32 lbl_805DFEE8;
void TObjLobbyMain__sub_80352624(u8 *arg0);
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

void TObjLobbyMain__sub_80352624(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (M2C_FIELD(arg0, f32 *, 0xD4) - lbl_805DFEE4);
    if (M2C_FIELD(arg0, f32 *, 0xD4) <= lbl_805DFEE8) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) lbl_805DFEE8;
        TObjLobbyMain__sub_803520DC();
        TObjLobbyMain__sub_80352240((void *) (arg0));
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
