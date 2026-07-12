#include "types.h"

extern "C" {

s32 TWindowOptionCtrl__sub_8034C3C4(void* p);
int TLobby__sub_8034C384(void* p);
int TLobby__sub_8034C3A4(void* p);
int TLobby__sub_8034C374(void*);

int TLobby__sub_8034C384(void* p) { return TLobby__sub_8034C374(p); }
int TLobby__sub_8034C3A4(void* p) { return TLobby__sub_8034C374(p); }
s32 TWindowOptionCtrl__sub_8034C3C4(void* p) { return *(s32*)((char*)p + 0x24); }

}
