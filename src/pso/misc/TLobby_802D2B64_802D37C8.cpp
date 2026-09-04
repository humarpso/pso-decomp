#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_trade_request__6TLobbyFv(void);
void update_battle_mode__6TLobbyFv(void);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK TLobby__sub_802D3070(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowSubTradeMain__sub_802D3924(s32);
int TWindowTradeRequest__sub_80249FCC(void);

extern s32 lbl_805D53A0;
extern u8 TLobby__data_805D688B;

void update_battle_mode__6TLobbyFv(void) {
    if ((s8) TLobby__data_805D688B != 0) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) {
            TLobby__sub_802D2D64();
            return;
        }
        if (TWindowSubTradeMain__sub_802D3924(lbl_805D53A0) == 0) {
            TLobby__sub_802D3070(lbl_805D53A0);
        }
    }
}

    extern short lbl_805D6888;
void close_trade_request__6TLobbyFv(void) { lbl_805D6888 = 0; TWindowTradeRequest__sub_80249FCC(); }

}
