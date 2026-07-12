#include "types.h"

extern "C" {

void reset_keyboard_state__6TLobbyFv(void);
int TKeyBoardControl__sub_801A57C4(void);

    extern unsigned char lbl_805D535A;
void reset_keyboard_state__6TLobbyFv(void) { lbl_805D535A = 0; TKeyBoardControl__sub_801A57C4(); }

}
