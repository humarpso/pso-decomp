#include "types.h"

extern "C" {

void clear_callback_and_reset_keyboard__6TLobbyFv(void);
void TLobby__sub_800F8BD8(void);
int TKeyBoardControl__sub_8000F92C(void);
int set_keyboard_mode__6TLobbyFi(int);
int reset__16TKeyBoardControlFv(void);

void clear_callback_and_reset_keyboard__6TLobbyFv(void) { set_keyboard_mode__6TLobbyFi(0); reset__16TKeyBoardControlFv(); }

}
