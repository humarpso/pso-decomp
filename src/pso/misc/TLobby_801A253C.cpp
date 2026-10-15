#include "types.h"

extern "C" {

void init_limits__6TLobbyFv(void);
void TLobby__sub_801A2550(void);
void TLobby__sub_801A2554(void);

extern s16 lbl_805D5CD2;
extern s16 lbl_805D5CD4;

void init_limits__6TLobbyFv(void) {
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}

void TLobby__sub_801A2550(void) {  }

extern s16 lbl_805D5CD0;
extern s16 lbl_805D5CD2;
extern s16 lbl_805D5CD4;

void TLobby__sub_801A2554(void) {
    lbl_805D5CD0 = 0;
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}

}
