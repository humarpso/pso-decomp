#include "types.h"

extern "C" {

int TLobby__sub_802D79EC(void* p);
int TLobby__sub_802D7A0C(void* p);
int TObjNpcEnemy__sub_802D73F8(void*);

int TLobby__sub_802D79EC(void* p) { return TObjNpcEnemy__sub_802D73F8(p); }
int TLobby__sub_802D7A0C(void* p) { return TObjNpcEnemy__sub_802D73F8(p); }

}
