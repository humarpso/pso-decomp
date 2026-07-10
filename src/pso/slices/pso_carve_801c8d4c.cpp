#include "types.h"

extern "C" {

int set_indexed_flags(void*, void*, void*);
int TObjPlayer__sub_801C5BB0(void*);
void fn_801C8D4C(void* p);

void fn_801C8D4C(void* p) { set_indexed_flags(p, (void*)0, (void*)1); TObjPlayer__sub_801C5BB0((char*)p + 0x608); }

}
