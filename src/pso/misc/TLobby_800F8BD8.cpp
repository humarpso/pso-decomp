#include "types.h"

extern "C" {

void clear_callback_and_reset_keyboard__6TLobbyFv(void);
void TLobby__sub_800F8BD8(void);
int TKeyBoardControl__sub_8000F92C(void);
int set_keyboard_mode__6TLobbyFi(int);
int reset__16TKeyBoardControlFv(void);

void TLobby__sub_800F8BD8(void) { reset__16TKeyBoardControlFv(); TKeyBoardControl__sub_8000F92C(); }

}
