#include "types.h"

extern "C" {
void *memset(void *dst, s32 c, u32 n);
void fill_memory(void *p, u8 c, u32 n);
void *OSCreateHeap(void *start, void *end);
extern void *sys_heap_handle;
extern void *global_allocator;
extern u8 sys_allocator_func_table[];
void fn_803DE804(u8 *start, s32 size);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fill_memory(void *p, u8 c, u32 n) {
    memset(p, c, n);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DE804(u8 *start, s32 size) {
    sys_heap_handle = OSCreateHeap(start, start + size);
    global_allocator = sys_allocator_func_table;
}
#pragma pop

}
