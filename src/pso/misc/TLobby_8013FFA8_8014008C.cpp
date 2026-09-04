#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_ship_scene(void);
void update_floor_state__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
M2C_UNK TLobby__sub_80226E44(M2C_UNK);
int TLobby__sub_8022743C(void);
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK TObjLight__sub_80133D78();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);

extern M2C_UNK lbl_8043F198[];

s32 init_ship_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_8043F198);
    } else {
        TLobby__sub_80226E44(3);
    }
    return 1;
}

void update_floor_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
