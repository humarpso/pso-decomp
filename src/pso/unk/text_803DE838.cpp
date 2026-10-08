#include "pso/AllocatorCallbacks.h"
#include <stddef.h>
typedef char AllocatorAllocateOffset[(offsetof(AllocatorCallbacks, allocate) == 0) ? 1 : -1];
typedef char AllocatorReleaseOffset[(offsetof(AllocatorCallbacks, release) == 4) ? 1 : -1];
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
