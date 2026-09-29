#include "types.h"
typedef s32 M2C_UNK;
extern "C" {
s32 obj_getField1c(void *);
s32 check_player_flag1__6TLobbyFPv(void *);
u16 TCameraCtrl__sub_80068958(M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TLobby__sub_8024AC20(u16);
s32 is_not_split_screen__13TRaderMapCoreFv();
void fn_802233F8(void);
}

extern "C" {

void fn_802233F8(void) {
    u16 self_slot;
    s32 i;
    u8 *p;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        self_slot = TCameraCtrl__sub_80068958(0);
        for (i = 0; i < 4; i++) {
            if (self_slot != i) {
                p = TPlayerBattleCtrl4P__sub_801BA74C(i);
                if (p != NULL && check_player_flag1__6TLobbyFPv(p) != 0) {
                    send_code_45_1__10TObjPlayerFi(p);
                    TLobby__sub_8024AC20(obj_getField1c(p));
                }
            }
        }
    }
}

}
