#include "types.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {
s32 obj_getField1c(void *);
s32 send_code_45_1__10TObjPlayerFi(void *);
u8 *get_player_by_client_id(s32);
s32 TLobby__sub_8024AC20(u16);
void fn_802233F8(void);
s32 obj_getField1c(void *);
s32 play_effect_default__10TObjPlayerFii(void *, s32);
u8 *get_player_by_client_id(s32);
s32 TObjPlayer__sub_8024ABDC(u16);
void fn_80223480(void);
}

extern "C" {

void fn_802233F8(void) {
    u16 self_slot;
    s32 i;
    u8 *p;
    if (TRaderMapCore::is_not_split_screen() == 1) {
        self_slot = TCameraCtrl::get_nth_view_player_id(0);
        for (i = 0; i < 4; i++) {
            if (self_slot != i) {
                p = get_player_by_client_id(i);
                if (p != NULL && ((TLobby *)p)->check_player_flag1() != 0) {
                    send_code_45_1__10TObjPlayerFi(p);
                    TLobby__sub_8024AC20(obj_getField1c(p));
                }
            }
        }
    }
}
void fn_80223480(void) {
    u16 self_slot;
    s32 i;
    u8 *p;
    if (TRaderMapCore::is_not_split_screen() == 1) {
        self_slot = TCameraCtrl::get_nth_view_player_id(0);
        for (i = 0; i < 4; i++) {
            if (self_slot != i) {
                p = get_player_by_client_id(i);
                if (p != NULL && ((TLobby *)p)->check_player_flag1() == 0) {
                    play_effect_default__10TObjPlayerFii(p, -1);
                    TObjPlayer__sub_8024ABDC(obj_getField1c(p));
                }
            }
        }
    }
}

}
