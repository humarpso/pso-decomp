#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8014018C(void);
s32 load_scene_ship_b(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_80226E44(M2C_UNK);
M2C_UNK TLobby__sub_80227248();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK TObjLight__sub_80133D78();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK reset_keyboard_control__6TLobbyFv();
M2C_UNK update_current_floor__6TLobbyFv();

extern M2C_UNK lbl_8043F1A8[];

s32 load_scene_ship_b(void) {
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_8043F1A8);
    } else {
        TLobby__sub_80226E44(3);
    }
    return 1;
}

extern M2C_UNK lbl_804A7358[];

void TLobby__sub_8014018C(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TLobby__sub_80227248();
    TLobby__sub_800FD6A0(lbl_804A7358, 8);
    update_current_floor__6TLobbyFv();
    reset_keyboard_control__6TLobbyFv();
    TLobby__sub_8007BA20();
}

}
