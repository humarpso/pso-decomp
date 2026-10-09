#include "types.h"

extern "C" {
extern void *sys_heap_handle;
void OSFreeToHeap(void *heap, void *ptr);
void free_to_sys_heap(void *ptr);
extern void *sys_heap_handle;
void *OSAllocFromHeap(void *heap, u32 size);
void *sys_alloc(u32 size);
extern void *sys_heap_handle;
void *OSAllocFromHeap(void *heap, u32 size);
void fill_memory(void *, s32, s32);
void *sys_calloc(s32 arg0, s32 arg1);
extern void *sys_heap_handle;
void *OSAllocFromHeap(void *heap, u32 size);
void OSFreeToHeap(void *heap, void *ptr);
void move_data__6TLobbyFv(void *, void *, void *);
void *fn_803DE960(void *arg0, void *arg1);
}

extern "C" {

#pragma push
#pragma scheduling off
void *sys_alloc(u32 size) {
    return OSAllocFromHeap(sys_heap_handle, size);
}
#pragma pop

#pragma push
#pragma scheduling off
void free_to_sys_heap(void *ptr) {
    OSFreeToHeap(sys_heap_handle, ptr);
}
#pragma pop

void *sys_calloc(s32 arg0, s32 arg1) {
    void *p = OSAllocFromHeap(sys_heap_handle, arg0 * arg1);
    fill_memory(p, 0, arg0 * arg1);
    return p;
}
void *fn_803DE960(void *arg0, void *arg1) {
    void *p = OSAllocFromHeap(sys_heap_handle, (u32)arg1);
    move_data__6TLobbyFv(p, arg0, arg1);
    OSFreeToHeap(sys_heap_handle, arg0);
    return p;
}

}
