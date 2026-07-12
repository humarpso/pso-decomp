#include "types.h"

extern "C" {

int TLobby__sub_802A7848(void* p);
int TLobby__sub_802A7868(void* p);
void TLobby__sub_802A7888(int a0);
int fn_802A7238(void*);
int fn_802A7890(void*);

int TLobby__sub_802A7848(void* p) { return fn_802A7890(p); }
int TLobby__sub_802A7868(void* p) { return fn_802A7238(p); }

    extern int lbl_805D6688;
void TLobby__sub_802A7888(int a0) { lbl_805D6688 = a0; }

}
