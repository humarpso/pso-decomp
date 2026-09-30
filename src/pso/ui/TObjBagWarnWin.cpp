#include "pso/TObjBagWarnWin.h"

TObjBagWarnWin::~TObjBagWarnWin() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Sub_8006EC20 {
    u8 pad[0x1C];
    s16 v1C;
};

struct Ctrl_8006EC20 {
    u8 pad0[0x38];
    f32 f38;
    u8 pad3C[4];
    f32 f40;
    u8 pad44[0xD00 - 0x44];
    Sub_8006EC20 *pD00;
};

extern "C" {
M2C_UNK TObjBagWarnWin__sub_8006EDD8(void *);
M2C_UNK TWindow__close(int);
s32 TWindowCtrlMain__sub_8024CE58();
void run_task__14TObjBagWarnWinFv(u8 *arg0);
s32 fn_8006EF80();
Ctrl_8006EC20 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TLobby__sub_80211C3C();
extern s32 lbl_805D53A0;
extern const f32 lbl_805D90B8;
extern const f32 lbl_805D90BC;
extern const f32 lbl_805D90C0;
extern const f32 lbl_805D90C4;
s32 TObjBagWarnWin__sub_8006EC20(void *arg0);
}

extern "C" {

s32 TObjBagWarnWin__sub_8006EC20(void *arg0) {
    Ctrl_8006EC20 *ctrl;
    if (TLobby__sub_80211C3C() != 3) {
        return 0;
    }
    if (fn_8006EF80() != 0) {
        return 0;
    }
    ctrl = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ctrl == NULL) {
        return 0;
    }
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
        if (ctrl->f38 <= lbl_805D90B8 || ctrl->f38 >= lbl_805D90BC) {
            return 0;
        }
        break;
    case 18:
        if (ctrl->f38 <= lbl_805D90C0 || ctrl->f40 <= lbl_805D90C4) {
            return 0;
        }
        break;
    }
    ctrl = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ctrl == NULL || ctrl->pD00->v1C < 30) {
        return 0;
    }
    return 1;
}

void run_task__14TObjBagWarnWinFv(u8 *arg0) {
    s32 temp_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        if (TWindowCtrlMain__sub_8024CE58() != 0) {
            if (TObjBagWarnWin__sub_8006EC20((void *)((void *) (arg0))) != 0) {
                temp_r0 = M2C_FIELD(arg0, s32 *, 0xA0) - 1;
                M2C_FIELD(arg0, s32 *, 0xA0) = temp_r0;
                if (temp_r0 < 0) {
                    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0xA0) = 0x1E;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) == 0) {
                TObjBagWarnWin__sub_8006EDD8((void *) (arg0));
            }
        }
    } else if (TObjBagWarnWin__sub_8006EC20((void *)((void *) (arg0))) == 0) {
        TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x1C)));
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        M2C_FIELD(arg0, s32 *, 0xA0) = 0x1E;
    }
}

}
