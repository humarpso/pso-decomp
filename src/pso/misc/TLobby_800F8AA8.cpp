#include "types.h"

extern "C" {

void TLobby__sub_800F8AA8(void);
int TKeyBoardControl__sub_801A57C4(void);

    extern unsigned char lbl_805D535A;
void TLobby__sub_800F8AA8(void) { lbl_805D535A = 0; TKeyBoardControl__sub_801A57C4(); }

}
