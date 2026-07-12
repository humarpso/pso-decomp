#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_floor_download__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK update_current_floor__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK TQuestVmDownLoadServer__sub_801F8E4C();
M2C_UNK reset_keyboard_control__6TLobbyFv();

extern M2C_UNK lbl_804A73D0[];

void update_floor_download__6TLobbyFv(void) {
    TQuestVmDownLoadServer__sub_801F8E4C();
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    TLobby__sub_800FD6A0(lbl_804A73D0, 0x30);
    TLobby__sub_8022743C();
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TLobby__sub_8007BA20();
}

}
