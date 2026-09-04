#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TObjLobbyMainFv(void *arg0);
M2C_UNK TObjLobbyMain__sub_803520D8(void *);
M2C_UNK TObjLobbyMain__sub_8035255C(void *);
M2C_UNK TObjLobbyMain__sub_803525F0(void *);
M2C_UNK reset_state__13TObjLobbyMainFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_particles__13TObjLobbyMainFPv(void *);
M2C_UNK update_computer_machines__13TObjLobbyMainFv(void *);
M2C_UNK TObjLobbyMain__sub_80352624(void *);

void run_task__13TObjLobbyMainFv(void *arg0) {
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjLobbyMain__sub_803520D8(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 0:
        TObjLobbyMain__sub_80352624(arg0);
        break;
    case 1:
        TObjLobbyMain__sub_803525F0(arg0);
        break;
    default:
    case 2:
        reset_state__13TObjLobbyMainFPv(arg0);
        break;
    }
    update_computer_machines__13TObjLobbyMainFv(arg0);
    TObjLobbyMain__sub_8035255C(arg0);
    update_particles__13TObjLobbyMainFPv(arg0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x803520D8
#include "types.h"

extern "C" {

void TObjLobbyMain__sub_803520D8(void);

void TObjLobbyMain__sub_803520D8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80352360
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_particles__13TObjLobbyMainFPv(void *arg0);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x803524F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_computer_machines__13TObjLobbyMainFv(void);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK PPCSync();
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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80352690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state__13TObjLobbyMainFPv(void *arg0);
s32 fn_80352094();

extern const f32 TObjLobbyMain__data_805DFEE0;

void reset_state__13TObjLobbyMainFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != fn_80352094()) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) TObjLobbyMain__data_805DFEE0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035276C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TObjLobbyMainFPv(void *arg0);
void *TObjLobbyMain__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__13TObjLobbyMainFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjLobbyMain__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803527B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__13TObjLobbyMainFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjLobbyMain__data_805D6EC8;

void release_static_instance__13TObjLobbyMainFv(void) {
    if ((u32) TObjLobbyMain__data_805D6EC8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjLobbyMain__data_805D6EC8, 1);
        TObjLobbyMain__data_805D6EC8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803528A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__13TObjLobbyMain[];

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjLobbyMain;
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
