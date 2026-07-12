#include "types.h"

extern "C" {

void clear_callback_and_reset_keyboard__6TLobbyFv(void);
void TLobby__sub_800F8BD8(void);
int TKeyBoardControl__sub_8000F92C(void);
int TLobby__sub_800F8C2C(int);
int TKeyBoardControl__sub_801A57C4(void);

void clear_callback_and_reset_keyboard__6TLobbyFv(void) { TLobby__sub_800F8C2C(0); TKeyBoardControl__sub_801A57C4(); }

}
