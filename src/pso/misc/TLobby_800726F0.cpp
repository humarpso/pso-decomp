#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80072B70(u8 *arg0);
void close_window_2c__6TLobbyFPv(void* p);
void open_loss_menu__6TLobbyFPv(void *arg0);
void send_45_and_close_windows__6TLobbyFv(void);
M2C_UNK TLobby__sub_8024AC20(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
int TWindow__close(void*);
s32 check_player_flag1__6TLobbyFPv();
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
M2C_UNK set_loss_flag__6TLobbyFPv(u32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(u32, M2C_UNK);

void TLobby__sub_80072B70(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, void **, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
}

void close_window_2c__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x2c))); *(int*)((char*)p + 0x2c) = 0; } }

void open_loss_menu__6TLobbyFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, u32 *, 0x2C)));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0x3A), 3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5B), 5, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5C), 5, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5D), 5, 2);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        set_loss_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, u32 *, 0x2C), 2);
    }
}

extern s32 lbl_805D53A0;

void send_45_and_close_windows__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
        send_code_45_1__10TObjPlayerFi(temp_r3);
    }
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
    TLobby__sub_8024AC20(lbl_805D53A0);
}

}
