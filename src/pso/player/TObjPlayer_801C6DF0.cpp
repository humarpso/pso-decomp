#include "types.h"

extern "C" {

void TObjPlayer__sub_801C6DF0(void* a0);
void TObjPlayer__sub_801C6E18(void* a0);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

    extern int obj_heap;
void TObjPlayer__sub_801C6DF0(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void TObjPlayer__sub_801C6E18(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

}
