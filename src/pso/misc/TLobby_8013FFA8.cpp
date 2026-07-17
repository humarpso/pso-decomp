#include "types.h"

extern "C" {

void update_floor__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);

void set_range__6TLobbyFPviii(void* a0, int a1, int a2, int a3) { *(int*)((char*)a0 + 0x7220) = a1; *(int*)((char*)a0 + 0x7224) = a3; *(int*)((char*)a0 + 0x7228) = (a1 + a2); }
void update_floor__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
