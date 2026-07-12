#include "types.h"

extern "C" {

void update_subsystems__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int fn_802F105C(void);

void update_subsystems__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802F105C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
