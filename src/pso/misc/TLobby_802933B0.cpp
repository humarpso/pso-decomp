#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_time_window2__6TLobbyFv(void);
M2C_UNK TLobby__sub_802932EC();
M2C_UNK TLobby__sub_80074034(s32);
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
M2C_UNK create_ch_time_win(s32);

extern M2C_UNK lbl_804DB1F0[];
extern s32 tl_07;

void create_time_window2__6TLobbyFv(void) {
    TLobby__sub_802932EC();
    create_ch_time_win(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

}
