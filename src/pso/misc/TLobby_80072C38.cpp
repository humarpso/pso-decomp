#include "types.h"

extern "C" {

void TLobby__sub_80072C38(void* p);
int TWindow__close(void*);

void TLobby__sub_80072C38(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
