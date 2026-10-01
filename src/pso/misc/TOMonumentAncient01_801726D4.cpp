#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80172758_lbl_804B38E0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80172758_lbl_804B38E0_size[sizeof(RecoveredGlobal_80172758_lbl_804B38E0) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80172810_lbl_804B38F0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80172810___vt__19TOMonumentAncient01 {
    M2C_UNK value;
    u8 remaining[0x40];
};

extern "C" {
s32 calc_angle_to__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
M2C_UNK start_camera_pan__10TObjPlayerFPvs(int, int, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
void TOMonumentAncient02__vt11(u8 *arg0, u16 arg1);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80172758_lbl_804B38E0 lbl_804B38E0;
extern u32 TOMonumentAncient01__data_805D5A60;
void TOMonumentAncient01__sub_80172758(void);
s32 TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *);
s32 init__5TOKeyFPv(void *);
extern RecoveredGlobal_80172810_lbl_804B38F0 lbl_804B38F0;
extern M2C_UNK __vt__19TOMonumentAncient01[];
extern s32 lbl_805D30BC;
extern u32 TOMonumentAncient01__data_805D5A60;
extern const f32 lbl_805DB918;
extern const f32 lbl_805DB91C;
u8 *TOMonumentAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 TLobby__sub_80156A80(void *, void *, int);
s32 TODoorVoShip__sub_801F44BC(s32);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
void TOMonumentAncient02__vt4(void *arg0, s16 *arg1);
}

extern "C" {

void *__dt__19TOMonumentAncient01Fv(void *arg0, s16 arg1);
void *create__19TOMonumentAncient01FPv(void *arg0);
void release_static_resource__19TOMonumentAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);

extern void *tl_05;

void *create__19TOMonumentAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TOMonumentAncient01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOMonumentAncient01__data_805D5A60;

void release_static_resource__19TOMonumentAncient01Fv(void) {
    if ((u32) TOMonumentAncient01__data_805D5A60 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMonumentAncient01__data_805D5A60, 1);
        TOMonumentAncient01__data_805D5A60 = 0U;
    }
}

extern M2C_UNK __vt__19TOMonumentAncient01[];

void TOMonumentAncient01__sub_80172758(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804B38E0.value, 0, 0, 0));
    }
    (*(s32 *)&TOMonumentAncient01__data_805D5A60) = var_r0;
}

void *__dt__19TOMonumentAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOMonumentAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80172810_lbl_804B38F0_size[sizeof(RecoveredGlobal_80172810_lbl_804B38F0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80172810___vt__19TOMonumentAncient01_size[sizeof(RecoveredGlobal_80172810___vt__19TOMonumentAncient01) == 0x44 ? 1 : -1];
u8 *TOMonumentAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init__5TOKeyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80172810___vt__19TOMonumentAncient01 *)&__vt__19TOMonumentAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D30BC;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((int) ((*(s32 *)&TOMonumentAncient01__data_805D5A60)), (int) (2));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TOMonumentAncient01__data_805D5A60)), (int) (2));
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B38F0.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    update_heal_gauge_state__13TOHealGeneralFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB918;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB91C;
    return arg0;
}

void TOMonumentAncient02__vt4(void *arg0, s16 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) *arg1;
    switch (M2C_FIELD(arg0, s32 *, 0xAC)) {
    case 2:
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_FIELD(arg0, s32 *, 0xD0));
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
        break;
    default:
        if (TODoorVoShip__sub_801F44BC(M2C_FIELD(arg0, s32 *, 0xD0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 2;
            M2C_FIELD(arg0, s32 *, 0xC8) = 1;
        }
        break;
    }
    if ((TODoorVoShip__sub_801F44BC(0x2C) != 0) && (TODoorVoShip__sub_801F44BC(0x2D) != 0) && (TODoorVoShip__sub_801F44BC(0x2E) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x2F);
    }
    TLobby__sub_80156A80(arg0, arg1, 0);
}

void TOMonumentAncient02__vt11(u8 *arg0, u16 arg1) {
    s16 sp8;
    s32 temp_r3;
    switch (M2C_FIELD(arg0, s32 *, 0xAC)) {
    case 1:
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg1));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 2;
            start_camera_pan__10TObjPlayerFPvs((int) (temp_r3), (int) (0xC), (void *) (calc_angle_to__10TObjPlayerFPvPv((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38))));
            if (TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (1)) != 0) {
                sp8 = (s16) M2C_FIELD(arg0, s32 *, 0xAC);
                TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (0));
                TObjPlayer__sub_80154954((void *) (arg0), (void *) (&sp8));
            }
        }
        break;
    }
}

}
