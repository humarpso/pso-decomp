#include "types.h"

extern "C" {

void update_all__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_all__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
