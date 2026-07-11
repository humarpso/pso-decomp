#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802D37C8(void);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK TLobby__sub_802D3070(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_802D3924(s32);

extern s32 lbl_805D53A0;
extern u8 TLobby__data_805D688B;

void TLobby__sub_802D37C8(void) {
    if ((s8) TLobby__data_805D688B != 0) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) {
            TLobby__sub_802D2D64();
            return;
        }
        if (fn_802D3924(lbl_805D53A0) == 0) {
            TLobby__sub_802D3070(lbl_805D53A0);
        }
    }
}

}
