#include "types.h"

extern "C" {

int fn_8029071C(void*);
int fn_802907E4(void*);
void fn_80290884(void* p, void* q);

void fn_80290884(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void fn_80290898(void* p) { fn_802907E4(p); fn_8029071C(p); }

}
