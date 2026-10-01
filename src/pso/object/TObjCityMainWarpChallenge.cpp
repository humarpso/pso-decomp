#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct CityMainWarpChalBase_80187824 { char pad[0x18]; };
struct CityMainWarpChalVObj_80187824 : CityMainWarpChalBase_80187824 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Warp_80187B50 { u8 pad[0x144]; s32 arr[4]; };

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80187438(void *);
void update_state__25TObjCityMainWarpChallengeFPv(void *arg0);
extern const f32 lbl_805DBCC4;
extern const f32 lbl_805DBCC8;
extern const f32 lbl_805DBCCC;
void run_task__25TObjCityMainWarpChallengeFv(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_80154B60(void *, int, f32);
M2C_UNK TObjAreaWarp__ct();
s32 get_global_state__14TOKeyMachine01Fv();
extern M2C_UNK __vt__25TObjCityMainWarpChallenge[];
extern s32 lbl_805D32B8;
extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B60;
extern const f32 lbl_805DBCCC;
extern const f32 lbl_805DBCD0;
u8 *TObjCityMainWarpChallenge__ct(u8 *arg0);
}

extern "C" {

void *__dt__25TObjCityMainWarpChallengeFv(void *arg0, s16 arg1);
void render__25TObjCityMainWarpChallengeFv(u8 *arg0);
void update_state__25TObjCityMainWarpChallengeFPv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjCityMainWarp__sub_80186DA0();
M2C_UNK TObjCityMainWarp__sub_8018709C();
M2C_UNK TObjCityMainWarp__sub_801871D0();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__12TObjAreaWarpFv(void *, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK close_windows__16TObjCityMainWarpFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 fn_8013157C(s32, void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_challenge_warp_window();
M2C_UNK update_state__16TObjCityMainWarpFPv();

void update_state__25TObjCityMainWarpChallengeFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        TObjCityMainWarp__sub_801871D0();
        return;
    case 1:
        TObjCityMainWarp__sub_8018709C();
        return;
    case 2:
        update_state__16TObjCityMainWarpFPv();
        return;
    case 3:
        update_challenge_warp_window();
        return;
    case 4:
        TObjCityMainWarp__sub_80186DA0();
        return;
    }
}

extern s32 lbl_805D4DF0;
extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBCB8;
extern const f32 lbl_805DBCBC;
extern const f32 lbl_805DBCC0;

void render__25TObjCityMainWarpChallengeFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (fn_8013157C(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DBCB8) {
            return;
        }
        goto block_4;
    }
    if (((CityMainWarpChalVObj_80187824*)arg0)->m8(lbl_805DBCBC, lbl_805DBCC0) != 0) {
block_4:
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xC8));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

extern M2C_UNK __vt__25TObjCityMainWarpChallenge[];

void run_task__25TObjCityMainWarpChallengeFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 1) {
        if (!(M2C_FIELD(arg0, s16 *, 0xE2) & 1) && ((s16) M2C_FIELD(arg0, s16 *, 0xDE) != (s16) M2C_FIELD(arg0, s16 *, 0xDC))) {
            if ((s16) M2C_FIELD(arg0, s16 *, 0xE0) != -1) {
                M2C_FIELD(arg0, s16 *, 0xE0) = -1;
                update_state__25TObjCityMainWarpChallengeFPv((void *) (arg0));
            }
            M2C_FIELD(arg0, s16 *, 0xDE) = (s16) M2C_FIELD(arg0, s16 *, 0xDC);
            M2C_FIELD(arg0, s16 *, 0xE0) = 0;
        }
        TObjPlayer__sub_80187438((void *) (arg0));
        update_state__25TObjCityMainWarpChallengeFPv((void *) (arg0));
        if ((void *) M2C_FIELD(arg0, u8 **, 0xD4) != NULL) {
            M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) + lbl_805DBCC4);
            if ((lbl_805DBCC8 + M2C_FIELD(arg0, f32 *, 0xC4)) >= (f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD4), u32 *, 4)) {
                M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBCCC;
            }
        }
    }
}

void *__dt__25TObjCityMainWarpChallengeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TObjCityMainWarpChallenge;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        close_windows__16TObjCityMainWarpFPv(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjCityMainWarpChallenge__ct(u8 *arg0) {
    s32 var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_ctr;
    TObjAreaWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TObjCityMainWarpChallenge;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D32B8;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBCCC;
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805DBCD0;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xBC);
    lbl_805D5B60 = temp_r4;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    TObjPlayer__sub_80154B60((void *) (arg0), (int) (temp_r4), (f32) (lbl_805DBCCC));
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x16C) = -1;
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
        if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
            M2C_FIELD(arg0, s32 *, 0x16C) = -1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x16C) = temp_r0;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x16C) >= 0) {
        M2C_FIELD(arg0, s16 *, 0xDC) = 4;
        M2C_FIELD(arg0, s16 *, 0xDE) = 4;
    } else {
        M2C_FIELD(arg0, s16 *, 0xDC) = 0;
        M2C_FIELD(arg0, s16 *, 0xDE) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0xE0) = 0;
    M2C_FIELD(arg0, s16 *, 0xE2) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, u8 **, 0x430), s32 *, 0x2C);
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4));
        M2C_FIELD(arg0, u32 *, 0xB4) = 0U;
    }
    for (var_ctr = 0; var_ctr < 4; var_ctr++) {
        ((Warp_80187B50 *)arg0)->arr[var_ctr] = 0;
    }
    return arg0;
}

}
