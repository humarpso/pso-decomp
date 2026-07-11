#include "types.h"

extern "C" {

void init_child__9TWindowDDFPvPv(void* p, void* a1);
int free_child__9TWindowDDFPv(void*);
int TWindowDD__sub_80341F9C(void*);
int reset_fields__9TWindowDDFPv(void*);
int TWindowDD__sub_80341FFC(void*);

void init_child__9TWindowDDFPvPv(void* p, void* a1) { free_child__9TWindowDDFPv(p); *(void**)((char*)p + 0x70) = a1; TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); reset_fields__9TWindowDDFPv(p); *(int*)((char*)p + 0x8c) = 1; }

}
