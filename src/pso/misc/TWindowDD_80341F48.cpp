#include "types.h"

extern "C" {

void init_child__9TWindowDDFPvPv(void* p, void* a1);
int free_child__9TWindowDDFPv(void*);
int TWindowDD__sub_80341F9C(void*);
int TWindowDD__sub_80341FD8(void*);
int TWindowDD__sub_80341FFC(void*);

void init_child__9TWindowDDFPvPv(void* p, void* a1) { free_child__9TWindowDDFPv(p); *(void**)((char*)p + 0x70) = a1; TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); TWindowDD__sub_80341FD8(p); *(int*)((char*)p + 0x8c) = 1; }

}
