#ifndef PSO_ALLOCATOR_CALLBACKS_H
#define PSO_ALLOCATOR_CALLBACKS_H

#include "types.h"

struct AllocatorCallbacks {
    void *(*allocate)(u32 bytes, AllocatorCallbacks *allocator);
    void (*release)(void *allocation, AllocatorCallbacks *allocator);
};

extern "C" {
extern AllocatorCallbacks *global_allocator;
void *xmalloc__FUl(u32 bytes);
void xfree__FPv(void *allocation);
}

#endif
