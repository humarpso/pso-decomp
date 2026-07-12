#include "types.h"

extern "C" {

void TLobby__sub_800F8AF8(void);
void TLobby__sub_800F8BD8(void);
int TKeyBoardControl__sub_8000F92C(void);
int TLobby__sub_800F8C2C(int);
int TKeyBoardControl__sub_801A57C4(void);

void TLobby__sub_800F8BD8(void) { TKeyBoardControl__sub_801A57C4(); TKeyBoardControl__sub_8000F92C(); }

}
