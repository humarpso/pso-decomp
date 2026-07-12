#include "types.h"

extern "C" {

void TLobby__sub_8007340C(void* p);
int TWindowSubComCard__sub_8007341C(void* p);

void TLobby__sub_8007340C(void* p) { *(u16*)((char*)p + 0x70) |= 0x200; }

}
