#include "types.h"

extern "C" {

void reset_keyboard_state__6TLobbyFv(void);
int reset__16TKeyBoardControlFv(void);

    extern unsigned char lbl_805D535A;
void reset_keyboard_state__6TLobbyFv(void) { lbl_805D535A = 0; reset__16TKeyBoardControlFv(); }

}
