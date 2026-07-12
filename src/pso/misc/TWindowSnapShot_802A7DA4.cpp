#include "types.h"

extern "C" {

void TWindowSnapShot__sub_802A7DA4(void);
int TLobby__sub_800FD944(void);
int TLobby__sub_8037F1C8(void);
int TWindowSnapShot__sub_802A7EAC(void);

    extern int lbl_805D669C;
    extern int lbl_805D66A0;
void TWindowSnapShot__sub_802A7DA4(void) { TWindowSnapShot__sub_802A7EAC(); lbl_805D66A0 = ((TLobby__sub_800FD944() + 0x1f) & 0xffffffe0); lbl_805D669C = TLobby__sub_8037F1C8(); }

}
