#include "types.h"

extern "C" {

int fn_80341EF4(void*);
int fn_80341F9C(void*);
int fn_80341FD8(void*);
int fn_80341FFC(void*);
void fn_80341F48(void* p, void* a1);

void fn_80341F48(void* p, void* a1) { fn_80341EF4(p); *(void**)((char*)p + 0x70) = a1; fn_80341F9C(p); fn_80341FFC(p); fn_80341FD8(p); *(int*)((char*)p + 0x8c) = 1; }

}
