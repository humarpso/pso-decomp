#include "types.h"
#include "pso/misc/TLobby_801A253C.h"
#include "pso/misc/TLobby.h"

extern s16 lbl_805D5CD2;
extern s16 lbl_805D5CD4;

void TLobby::init_limits() {
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}

void TLobby__sub_801A2550(void) {  }

extern s16 lbl_805D5CD0;

void TLobby__sub_801A2554(void) {
    lbl_805D5CD0 = 0;
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}
