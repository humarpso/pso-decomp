#include "types.h"

extern "C" {

int fn_802B4B64(void*, void*);
int fn_802B4BA8(void*, void*);
int fn_802B6504(void*);
void fn_802B22E0(void* p);

void fn_802B22E0(void* p) { *(int*)((char*)p + 0x40c) = 555; *(int*)((char*)p + 0x410) = 555; fn_802B6504(p); fn_802B4B64(p, (void*)0); fn_802B4B64(p, (void*)1); fn_802B4BA8(p, (void*)3); }

}
