#include "types.h"

extern "C" {

void TLobby__sub_80142920(void);
int TLobby__sub_80142944(void* p);
int TObjFish__sub_803E46BC(void);
int fn_80143938(void);

void TLobby__sub_80142920(void) { fn_80143938(); TObjFish__sub_803E46BC(); }
int TLobby__sub_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
