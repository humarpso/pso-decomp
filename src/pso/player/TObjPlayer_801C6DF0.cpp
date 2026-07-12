#include "types.h"

extern "C" {

void free__10TObjPlayerFPv(void* a0);
void heap_alloc__10TObjPlayerFPv(void* a0);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

    extern int obj_heap;
void free__10TObjPlayerFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void heap_alloc__10TObjPlayerFPv(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

}
