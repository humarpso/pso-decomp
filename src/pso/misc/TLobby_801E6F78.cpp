#include "types.h"

extern "C" {

void TLobby__sub_801E6F78(int a0);

    extern int lbl_80512220[];
    extern int lbl_805D5EA4;
void TLobby__sub_801E6F78(int a0) { int old = lbl_805D5EA4; lbl_805D5EA4 = old + 1; lbl_80512220[old] = a0; }

}
