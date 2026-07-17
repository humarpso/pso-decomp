#include "types.h"

extern "C" {

void reset_keyboard_control__6TLobbyFv(void);
void handle_disconnect_cleanup(void);
int TLobby__sub_800F7A8C(void);
int TLobby__sub_800F7B08(void);
int get_global_state__14TOKeyMachine01Fv(void);

void reset_keyboard_control__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_800F7A8C(); }

}
