#include "types.h"

extern "C" {

int fn_802B4B64(void*, void*);
int fn_802B4BA8(void*, void*);
void fn_802B2FC8(void* p);

void fn_802B2FC8(void* p) { *(int*)((char*)p + 0x40c) = 300; *(int*)((char*)p + 0x410) = 300; fn_802B4BA8(p, (void*)0); fn_802B4B64(p, (void*)1); }

}
