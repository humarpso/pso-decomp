#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_machine_scene(void);
void update_floor_alt__6TLobbyFv(void);
s32 TCameraCtrl__sub_8006B368();
int TLobby__sub_8007BA20(void);
M2C_UNK TLobby__sub_801403B4(M2C_UNK);
M2C_UNK TLobby__sub_80226E44(M2C_UNK);
int TLobby__sub_8022743C(void);
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK TObjLight__sub_80133D78();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 get_main_phase();
s32 is_split_screen();
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);

void update_floor_alt__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); TLobby__sub_8007BA20(); }

extern M2C_UNK lbl_8043F238[];

s32 init_machine_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_8043F238);
    } else {
        TLobby__sub_80226E44(2);
    }
    if ((get_main_phase() != 0xE) || (TCameraCtrl__sub_8006B368() == 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x28);
    }
    return 1;
}

}
