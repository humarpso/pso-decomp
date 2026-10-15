#include "pso/AllocatorCallbacks.h"
#include <stddef.h>
typedef char AllocatorAllocateOffset[(offsetof(AllocatorCallbacks, allocate) == 0) ? 1 : -1];
typedef char AllocatorReleaseOffset[(offsetof(AllocatorCallbacks, release) == 4) ? 1 : -1];

extern "C" {
extern AllocatorCallbacks *global_allocator;
void *xmalloc__FUl(u32 bytes);
}

extern "C" {

#pragma push
#pragma scheduling off
void *xmalloc__FUl(u32 bytes) {
    return global_allocator->allocate(bytes, global_allocator);
}
#pragma pop

}
