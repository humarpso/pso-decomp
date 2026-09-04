#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_forest_b(void);
void update_floor_download__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_801403B4(M2C_UNK);
M2C_UNK TLobby__sub_80226E44(M2C_UNK);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK TQuestVmDownLoadServer__sub_801F8E4C();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create__12TObjRainCtrlFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK reset_keyboard_control__6TLobbyFv();
M2C_UNK update_current_floor__6TLobbyFv();

extern M2C_UNK lbl_8043F228[];

s32 init_forest_b(void) {
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    create__12TObjRainCtrlFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_8043F228);
    } else {
        TLobby__sub_80226E44(0);
    }
    return 1;
}

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
