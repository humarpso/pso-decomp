#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_city_warp_menu__6TLobbyFv(void);
s32 TLobby__sub_8013A14C(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK TCheckRoomSequence__sub_8013AD28(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void open_city_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv(lbl_805D55E0);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB5);
    lbl_805D55E4 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, TLobby__sub_8013A14C(0x4C), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, TLobby__sub_8013A14C(0x48), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, TLobby__sub_8013A14C(0x49), 6, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, TLobby__sub_8013A14C(0x4A), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, TLobby__sub_8013A14C(0x4B), 6, 4);
    TWindowSubComCard__sub_80265F60(lbl_805D55E4);
    TWindowSubComCard__sub_80265C30(lbl_805D55E4);
    TCheckRoomSequence__sub_8013AD28(lbl_805D55E4);
    TLobby__data_805D5594 = 0x19;
}

}
