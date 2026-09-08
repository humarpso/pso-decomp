#include "pso/TBoss3VoloptCtrl.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80040D70_lbl_8043636C { M2C_UNK value; u8 remaining[0x9]; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TLobby__sub_80226E44(int);
extern s32 lbl_805D53A0;
extern const f32 lbl_805D86F8;
void TBoss3VoloptCtrl__sub_80040B80(s32 arg0);
s32 get_main_phase(void);
M2C_UNK TObjPlayer__sub_800196EC();
void *init_object__16TBoss3VoloptCtrlFPv(void *arg0);
s32 TCameraCtrl__sub_80069DA8(void);
s32 TCameraCtrl__sub_80069E7C(s32);
s32 TODoorVoShip__sub_801F44BC(s32);
M2C_UNK TLobby__sub_8020C9C8(M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TBoss3Volopt__sub_8003EA2C(int);
void dispatch_state__16TBoss3VoloptCtrlFi(s32 arg0);
M2C_UNK TObjPlayer__sub_801BA42C();
M2C_UNK TObjPlayer__sub_801BA494();
M2C_UNK TObjBgmColCtrl__sub_802274B8(void *);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern RecoveredGlobal_80040D70_lbl_8043636C lbl_8043636C;
extern s32 lbl_805D4C2C;
}

extern "C" {

void *TBoss3VoloptCtrl__ct(void *arg0);
void *deleting_destructor__16TBoss3VoloptCtrlFPvs(void *arg0, s16 arg1);
void dispatch_state__16TBoss3VoloptCtrlFi(s32 arg0);
void *init_object__16TBoss3VoloptCtrlFPv(void *arg0);
M2C_UNK TLobby__sub_8020C07C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TLobby__sub_8020C9C8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_800196EC();
void __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void disallow_rendering__7TObjectFv(void *);

extern M2C_UNK lbl_80483B88[];

extern void *tl_02;
extern M2C_UNK lbl_80483B88[];

extern void *tl_02;
extern M2C_UNK __vt__16TBoss3VoloptCtrl[];
extern void *lbl_805D2730;

}

extern "C" {
void TBoss3VoloptCtrl__sub_80040B80(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0));
    if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, f32 *, 0x40) >= lbl_805D86F8)) {
        TLobby__sub_80226E44((int) (3));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
}

extern "C" {
void *deleting_destructor__16TBoss3VoloptCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483B88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}

extern "C" {
void *init_object__16TBoss3VoloptCtrlFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_02);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483B88;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}
}

extern "C" {
void dispatch_state__16TBoss3VoloptCtrlFi(s32 arg0) {
    switch (arg0) {
    case 0:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 1);
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
        return;
    case 1:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
    case 3:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 2);
        TLobby__sub_8020C07C(TObjPlayer__sub_800196EC(), 0, 2, -0x11, 0);
        return;
    case 2:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
    case 4:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 2);
        return;
    case 5:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 1);
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
        return;
    }
}
}

void TBoss3VoloptCtrl::run_task() {
    s32 temp_r0;
    u8 *temp_r3;
    countdown = (s32) (countdown - 1);
    temp_r0 = phase;
    switch (temp_r0) {
    case 0:
        phase = 1;
        break;
    case 1:
        if ((s32) countdown <= 0) {
            if ((s32) lbl_805D4C2C == 0) {
                TBoss3Volopt__sub_8003EA2C((int) (1));
                TCameraCtrl__sub_80069E7C(9);
                TObjPlayer__sub_801BA494();
                TObjBgmColCtrl__sub_802274B8((void *) (&lbl_8043636C.value));
                if (get_main_phase() != 0xF) {
                    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
                        TLobby__sub_8020C9C8((M2C_UNK)(((s32)TObjPlayer__sub_800196EC())), (M2C_UNK)(0), (M2C_UNK)(1));
                    } else if (TODoorVoShip__sub_801F44BC(0x2F) != 0) {
                        dispatch_state__16TBoss3VoloptCtrlFi((s32)((int) (4)));
                    } else {
                        dispatch_state__16TBoss3VoloptCtrlFi((s32)((int) (3)));
                    }
                } else {
                    TLobby__sub_8020C9C8((M2C_UNK)(((s32)TObjPlayer__sub_800196EC())), (M2C_UNK)(0), (M2C_UNK)(1));
                }
                TLobby__sub_8020C9C8((M2C_UNK)(((s32)TObjPlayer__sub_800196EC())), (M2C_UNK)(0), (M2C_UNK)(3));
                temp_r3 = (u8 *)(__nw__7TObjectFUl(0x1C));
                if (temp_r3 != NULL) {
                    init_object__16TBoss3VoloptCtrlFPv(temp_r3);
                }
                phase = 2;
                break;
            }
            phase = -1;
            break;
        }
        break;
    case 2:
        TCameraCtrl__sub_80069DA8();
        TObjPlayer__sub_801BA42C();
        queue_destruction__7TObjectFv((void *) (this));
        break;
    case -1:
        queue_destruction__7TObjectFv((void *) (this));
        break;
    }
}

TBoss3VoloptCtrl::~TBoss3VoloptCtrl() {}
extern "C" {
void *TBoss3VoloptCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_02);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TBoss3VoloptCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2730;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 3;
    return arg0;
}
}
