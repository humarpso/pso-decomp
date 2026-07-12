#include "types.h"

extern "C" {

void TItemLoad__sub_8010FF68(void* p);
int TLobby__sub_803CCE9C(void*);

void TItemLoad__sub_8010FF68(void* p) { if (*(unsigned int*)((char*)p + 0x4) != 0) { TLobby__sub_803CCE9C(*(void**)((char*)p + 0x4)); *(int*)((char*)p + 0x4) = 0; *(int*)((char*)p + 0xc) = 0; } }

}
