#include "types.h"

extern "C" {

void TLobby__sub_80072DA0(void* a0);
int TLobby__sub_80072E10(void*);
int TWindowCtrl__sub_8024AEAC(void*);

    extern int lbl_805D53A0;
void TLobby__sub_80072DA0(void* a0) { TWindowCtrl__sub_8024AEAC((void*)(lbl_805D53A0)); TLobby__sub_80072E10(a0); }

}
