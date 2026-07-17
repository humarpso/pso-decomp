#include "types.h"

extern "C" {

void TLobby__sub_801A4C6C(void* p);
void set_value__6TLobbyFPvi(void* p, s32 v);

void TLobby__sub_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void set_value__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }

}
