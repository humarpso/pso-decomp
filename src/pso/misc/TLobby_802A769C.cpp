#include "types.h"

extern "C" {

void TLobby__sub_802A769C(void);
void TLobby__sub_802A76C4(void);
int TLobby__sub_802A7640(void);
int TLobby__sub_802A7674(void);
int TLobby__sub_802A7888(int);

void TLobby__sub_802A769C(void) { TLobby__sub_802A7640(); TLobby__sub_802A7888(0); }
void TLobby__sub_802A76C4(void) { TLobby__sub_802A7888(1); TLobby__sub_802A7674(); }

}
