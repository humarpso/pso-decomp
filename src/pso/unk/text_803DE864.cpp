#include "types.h"
#include "pso/unk/text_803DE864.h"
struct A_803DE864 { void *a; void *b; u8 *(*alloc)(s32, s32); };

extern "C" {
extern A_803DE864 *global_allocator;
u8 *fn_803DE864(s32 a, s32 b) {
    return global_allocator->alloc(a, b);
}

}
