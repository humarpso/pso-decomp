#include "types.h"

extern "C" {
extern void *sys_heap_handle;
void OSFreeToHeap(void *heap, void *ptr);
void fn_803DE8E4(void *ptr);
extern void *sys_heap_handle;
void *OSAllocFromHeap(void *heap, u32 size);
void *fn_803DE8BC(u32 size);
extern void *sys_heap_handle;
void *OSAllocFromHeap(void *heap, u32 size);
void fn_803DE7E0(void *, s32, s32);
void *fn_803DE90C(s32 arg0, s32 arg1);
extern void *sys_heap_handle;
void *OSAllocFromHeap(void *heap, u32 size);
void OSFreeToHeap(void *heap, void *ptr);
void move_data__6TLobbyFv(void *, void *, void *);
void *fn_803DE960(void *arg0, void *arg1);
}

extern "C" {

#pragma push
#pragma scheduling off
void *fn_803DE8BC(u32 size) {
    return OSAllocFromHeap(sys_heap_handle, size);
}
#pragma pop

#pragma push
#pragma scheduling off
void fn_803DE8E4(void *ptr) {
    OSFreeToHeap(sys_heap_handle, ptr);
}
#pragma pop

void *fn_803DE90C(s32 arg0, s32 arg1) {
    void *p = OSAllocFromHeap(sys_heap_handle, arg0 * arg1);
    fn_803DE7E0(p, 0, arg0 * arg1);
    return p;
}
void *fn_803DE960(void *arg0, void *arg1) {
    void *p = OSAllocFromHeap(sys_heap_handle, (u32)arg1);
    move_data__6TLobbyFv(p, arg0, arg1);
    OSFreeToHeap(sys_heap_handle, arg0);
    return p;
}

}
