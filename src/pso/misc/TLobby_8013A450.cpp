#include "types.h"

extern "C" {

void TLobby__sub_8013A450(void* p);
void TLobby__sub_8013A4A0(int a0);
int bswap_32__FPUl(void*);
int bswap__17TPlyInventoryItemFv(void*);

void TLobby__sub_8013A450(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 30; i++) { bswap__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

    extern int lbl_805D5D6C;
void TLobby__sub_8013A4A0(int a0) { lbl_805D5D6C = a0; }

}
