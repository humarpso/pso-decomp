#include "types.h"

extern "C" {

int fn_800F6B14(void*);
int fn_800F6EB0(void*);
int TObjPlayer__sub_80154764(void*, void*, void*);
int send_entity_set_flags__6TLobbyFPv(void*);
void fn_800C5100(void* p);

void fn_800C5100(void* p) { if (*(short*)((char*)p + 0x326) != 8) { *(short*)((char*)p + 0x326) = 8; *(short*)((char*)p + 0xb8) = 8; fn_800F6EB0(p); TObjPlayer__sub_80154764(p, (void*)0, (void*)1); fn_800F6B14(p); send_entity_set_flags__6TLobbyFPv(p); } }

}
