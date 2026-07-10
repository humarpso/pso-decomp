#include "types.h"

extern "C" {

void init_and_mark_field8C__9TWindowDDFPv(void* p);
int TWindowDD__sub_80341F9C(void*);
int TWindowDD__sub_80341FFC(void*);

void init_and_mark_field8C__9TWindowDDFPv(void* p) { TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); *(int*)((char*)p + 0x8c) = 1; }

}
