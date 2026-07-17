#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_8007BA20();
M2C_UNK reset_keyboard_control__6TLobbyFv();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK update_current_floor__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK refresh_render_state__6TLobbyFv();
extern M2C_UNK lbl_804A7360[];

void TLobby__sub_80140308(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TLobby__sub_800FD6A0(lbl_804A7360, 8);
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    TLobby__sub_8007BA20();
}

}
