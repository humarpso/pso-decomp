#include "types.h"

extern "C" {

void TWindowDD__sub_80341F48(void* p, void* a1);
int TWindowDD__sub_80341EF4(void*);
int TWindowDD__sub_80341F9C(void*);
int TWindowDD__sub_80341FD8(void*);
int TWindowDD__sub_80341FFC(void*);

void TWindowDD__sub_80341F48(void* p, void* a1) { TWindowDD__sub_80341EF4(p); *(void**)((char*)p + 0x70) = a1; TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); TWindowDD__sub_80341FD8(p); *(int*)((char*)p + 0x8c) = 1; }

}
