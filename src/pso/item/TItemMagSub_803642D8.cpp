#include "types.h"

extern "C" {

void free_to_heap__11TItemMagSubFPv(void* a0);
int heap_free__5THeapFPv(void*, void*);

    extern int obj_heap;
void free_to_heap__11TItemMagSubFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

}
