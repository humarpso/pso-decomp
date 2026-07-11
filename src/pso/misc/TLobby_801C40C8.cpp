#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_battle_result__6TLobbyFii(int arg0, s32 arg1);
void TLobby__sub_801C4120(int arg0, s32 arg1);
s32 TLobby__sub_801C417C(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK fn_8024ACEC(s32);
M2C_UNK fn_8024AD30(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi();

extern s32 lbl_805D53A0;

void handle_battle_result__6TLobbyFii(int arg0, s32 arg1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (arg1 != 0) {
        fn_8024AD30(lbl_805D53A0);
        clear_flag__11TWindowCtrlFv();
        TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
    }
}

M2C_UNK request_active_window_close();
extern s32 lbl_805D53A0;

void TLobby__sub_801C4120(int arg0, s32 arg1) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg1 != 0) {
        fn_8024ACEC(lbl_805D53A0);
        request_active_window_close();
        TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
    }
}

extern void *TLobby__data_805D5DA0;

s32 TLobby__sub_801C417C(void) {
    return M2C_FIELD(TLobby__data_805D5DA0, s32 *, 0x24) * 0x3C;
}

}
