#include "types.h"

extern "C" {

int fn_802B4B64(void*, void*);
int fn_802B4BA8(void*, void*);
void fn_802B33F4(void* p);

void fn_802B33F4(void* p) { *(int*)((char*)p + 0x40c) = 62; *(int*)((char*)p + 0x410) = 62; fn_802B4B64(p, (void*)0); fn_802B4BA8(p, (void*)1); }

}
