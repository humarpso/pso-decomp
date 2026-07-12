#include "types.h"

extern "C" {

void free_texture__9TItemLoadFPv(void* p);
int TLobby__sub_803CCE9C(void*);

void free_texture__9TItemLoadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x4) != 0) { TLobby__sub_803CCE9C(*(void**)((char*)p + 0x4)); *(int*)((char*)p + 0x4) = 0; *(int*)((char*)p + 0xc) = 0; } }

}
