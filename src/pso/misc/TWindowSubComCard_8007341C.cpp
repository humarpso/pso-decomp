#include "types.h"

extern "C" {

void TLobby__sub_8007340C(void* p);
int TWindowSubComCard__sub_8007341C(void* p);

int TWindowSubComCard__sub_8007341C(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }

}
