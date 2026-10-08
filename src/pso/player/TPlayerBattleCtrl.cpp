#include "pso/TPlayerBattleCtrl.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_801C38E8(void *);
s32 TLobby__sub_801C3AF4(void *);
s32 TLobby__sub_801C418C(void *);
s32 update_duel_result__6TLobbyFPv(void *);
s32 update_timed_wait__6TLobbyFPv(void *);
s32 update_battle_intro__6TLobbyFPv(void *);
void update_player_battle_ctrl_state(void *arg0);
M2C_UNK TLobby__sub_801C3030();
s32 fn_801C4CE0(void *arg0);
}

extern "C" {

s32 fn_801C4CE0(void *arg0) {
    switch (M2C_FIELD(arg0, s32 *, 0x20)) {
    case -1:
        break;
    case 0:
        TLobby__sub_801C3030();
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        break;
    }
}

void update_player_battle_ctrl_state(void *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        fn_801C4CE0((void *)((void *) (arg0)));
        return;
    case 1:
        update_battle_intro__6TLobbyFPv((void *) (arg0));
        return;
    case 2:
        update_timed_wait__6TLobbyFPv((void *) (arg0));
        return;
    case 3:
        update_duel_result__6TLobbyFPv((void *) (arg0));
        return;
    case 4:
        TLobby__sub_801C418C((void *) (arg0));
        return;
    case 5:
        TLobby__sub_801C3AF4((void *) (arg0));
        return;
    case 6:
        TLobby__sub_801C38E8((void *) (arg0));
    default:
        return;
    }
}

}

extern "C" {
void TWindow__close(void *);
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D5D98;
}

void TPlayerBattleCtrl::run_task() {
    if (lbl_805D55C0 == 0) {
        if (state_1c != state_24) {
            if (state_20 != -1) {
                state_20 = -1;
                update_player_battle_ctrl_state(this);
            }
            state_1c = state_24;
            state_20 = 0;
        }
        update_player_battle_ctrl_state(this);
    }
}

TPlayerBattleCtrl::~TPlayerBattleCtrl() {
    if (state_20 != -1) {
        state_20 = -1;
        update_player_battle_ctrl_state(this);
    }
    if (window_4c != NULL) TWindow__close(window_4c);
    if (window_50 != NULL) TWindow__close(window_50);
    if (window_54 != NULL) TWindow__close(window_54);
    TLobby__data_805D5D98 = 0;
}
