#include "types.h"

extern "C" {

int fn_803152D4(void*, void*);
int fn_8031543C(void*, void*, void*);
int fn_80316488(void*, void*);
void fn_8031415C(void* p);

void fn_8031415C(void* p) { fn_8031543C(p, (void*)30, (void*)30); fn_80316488(*(void**)((char*)p + 0x37c), (void*)0); fn_803152D4(p, (void*)2); }

}
