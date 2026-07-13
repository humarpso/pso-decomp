#include "types.h"

extern "C" {

int TObjPlayer__sub_802C367C(void* p);
void clear_30_slots__10TObjPlayerFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_802C3AC0(void*);
int TObjPlayer__sub_802C4518(void*, void*);
int TObjPlayer__sub_802C456C(void*, void*, void*);
int TObjPlayer__sub_802C46BC(void*);
int clear_item_slots__10TObjPlayerFPv(void*);

int TObjPlayer__sub_802C367C(void* p) { *(unsigned char*)(p) = 0; clear_item_slots__10TObjPlayerFPv(p); TObjPlayer__sub_802C46BC((char*)p + 0x3c0); TAdSinglePlyChrSelectGC__sub_802C3AC0(p); *(int*)((char*)p + 0x36c) = 300; TObjPlayer__sub_802C4518(p, (void*)1); return 1; }

void clear_30_slots__10TObjPlayerFPv(void* p) { { int i; for (i = 0; i < 30; i++) { TObjPlayer__sub_802C456C(p, (void*)i, (void*)0); } } }

}
