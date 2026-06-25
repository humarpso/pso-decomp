#include "types.h"

extern "C" {

int fn_802B4B64(void*, void*);
int fn_802B4BA8(void*, void*);
void fn_802B3870(void* p);

void fn_802B3870(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; fn_802B4BA8(p, (void*)0); fn_802B4B64(p, (void*)1); }

}
