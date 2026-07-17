#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void refresh_lobby_state__6TLobbyFv(void);
s32 init_particle_model__6TLobbyFv(void);
void update_field_state__6TLobbyFv(void);
M2C_UNK create_tasks__6TLobbyFv();
int TLobby__sub_8007BA20(void);
s32 check_disconnect_conditions__6TLobbyFv();
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK TObjLight__sub_80133D78();
u32 __nw__7TObjectFUl(M2C_UNK);
int reset_keyboard_control__6TLobbyFv(void);
M2C_UNK create_instance__10TSceneSoraFPv(void*, s32);
M2C_UNK create__15TBoss6EmptyWarpFv();
int fn_802FE9E0(void);
s32 is_split_screen();

void refresh_lobby_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

extern s32 tl_particlemodel;

s32 init_particle_model__6TLobbyFv(void) {
    void* obj;
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    if ((is_split_screen() == 0) && ((obj = (void*)__nw__7TObjectFUl(0x3C)) != 0)) {
        create_instance__10TSceneSoraFPv(obj, tl_particlemodel);
    }
    create__15TBoss6EmptyWarpFv();
    return 1;
}

void update_field_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802FE9E0(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
