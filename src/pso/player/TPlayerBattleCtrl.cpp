#include "pso/TPlayerBattleCtrl.h"
extern "C" {
void fn_801C4D28(void *);
void TWindow__close(void *);
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D5D98;
}

void TPlayerBattleCtrl::run_task() {
    if (lbl_805D55C0 == 0) {
        if (state_1c != state_24) {
            if (state_20 != -1) {
                state_20 = -1;
                fn_801C4D28(this);
            }
            state_1c = state_24;
            state_20 = 0;
        }
        fn_801C4D28(this);
    }
}

TPlayerBattleCtrl::~TPlayerBattleCtrl() {
    if (state_20 != -1) {
        state_20 = -1;
        fn_801C4D28(this);
    }
    if (window_4c != NULL) TWindow__close(window_4c);
    if (window_50 != NULL) TWindow__close(window_50);
    if (window_54 != NULL) TWindow__close(window_54);
    TLobby__data_805D5D98 = 0;
}
