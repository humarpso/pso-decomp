#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void forward_to_player__6TLobbyFiPv(int arg0, void *arg1);
void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_80019248();
u32 get_item_field_6__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 TWindowSubComCard__sub_801058F8(s32);
u32 activate_d04_slot__10TObjPlayerFPv(s32);
u32 test_flag3__9TItemDataFPv(s32);
u32 get_item_field_2__9TItemDataFPv(s32);
M2C_UNK fn_801B849C(s32, void *);
M2C_UNK TObjPlayer__sub_801B9EDC(s32, s32);
M2C_UNK TObjPlayer__sub_801BA0F0(s32, s32, M2C_UNK);

s32 obj_isState3_324(s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

void forward_to_player__6TLobbyFiPv(int arg0, void *arg1) {
    s32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
        if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((TWindowSubComCard__sub_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
            fn_801B849C(temp_r3, arg1);
            TObjPlayer__sub_801BA0F0(temp_r3, M2C_FIELD(arg1, s32 *, 0xC), 0);
        }
    }
}

s32 obj_isState3_324(s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    u32 var_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((TWindowSubComCard__sub_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
        var_r3 = 0U;
        switch (arg1) {
        case 0:
            var_r3 = get_item_field_6__10TObjPlayerFPv(temp_r3);
            break;
        case 1:
            var_r3 = get_item_field_2__9TItemDataFPv(temp_r3);
            break;
        case 2:
            var_r3 = test_flag3__9TItemDataFPv(temp_r3);
            break;
        case 3:
            var_r3 = activate_d04_slot__10TObjPlayerFPv(temp_r3);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            var_r3 = get_equip_field_d04__10TObjPlayerFPv(temp_r3, arg1 + 5);
            break;
        default:
            break;
        }
        if (var_r3 != 0U) {
            TObjPlayer__sub_801B9EDC(temp_r3, get_field_d8__10TObjPlayerFPv());
        }
    }
}

}
