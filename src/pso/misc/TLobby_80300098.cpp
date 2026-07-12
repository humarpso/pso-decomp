#include "types.h"

extern "C" {

void TLobby__sub_80300098(void* p, s32 v);
void TLobby__sub_803000A0(void);
int TLobby__sub_8013A4A0(int);
int TLobby__sub_802930A8(void);

void TLobby__sub_80300098(void* p, s32 v) { *(s32*)((char*)p + 0xa4) = v; }
void TLobby__sub_803000A0(void) { TLobby__sub_802930A8(); TLobby__sub_8013A4A0(0); }

}
