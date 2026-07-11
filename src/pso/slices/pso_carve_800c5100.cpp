#include "types.h"

extern "C" {

int fn_800F6B14(void*);
int fn_800F6EB0(void*);
int fn_80154764(void*, void*, void*);
int TLobby__sub_8020C5A4(void*);
void fn_800C5100(void* p);

void fn_800C5100(void* p) { if (*(short*)((char*)p + 0x326) != 8) { *(short*)((char*)p + 0x326) = 8; *(short*)((char*)p + 0xb8) = 8; fn_800F6EB0(p); fn_80154764(p, (void*)0, (void*)1); fn_800F6B14(p); TLobby__sub_8020C5A4(p); } }

}
