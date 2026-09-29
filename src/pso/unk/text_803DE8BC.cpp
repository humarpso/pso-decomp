#include "types.h"

extern "C" {
extern void *lbl_805D77AC;
void OSFreeToHeap(void *heap, void *ptr);
void fn_803DE8E4(void *ptr);
extern void *lbl_805D77AC;
void *OSAllocFromHeap(void *heap, u32 size);
void *fn_803DE8BC(u32 size);
extern void *lbl_805D77AC;
void *OSAllocFromHeap(void *heap, u32 size);
void fn_803DE7E0(void *, s32, s32);
void *fn_803DE90C(s32 arg0, s32 arg1);
extern void *lbl_805D77AC;
void *OSAllocFromHeap(void *heap, u32 size);
void OSFreeToHeap(void *heap, void *ptr);
void move_data__6TLobbyFv(void *, void *, void *);
void *fn_803DE960(void *arg0, void *arg1);
}

extern "C" {

#pragma push
#pragma scheduling off
void *fn_803DE8BC(u32 size) {
    return OSAllocFromHeap(lbl_805D77AC, size);
}
#pragma pop

#pragma push
#pragma scheduling off
void fn_803DE8E4(void *ptr) {
    OSFreeToHeap(lbl_805D77AC, ptr);
}
#pragma pop

void *fn_803DE90C(s32 arg0, s32 arg1) {
    void *p = OSAllocFromHeap(lbl_805D77AC, arg0 * arg1);
    fn_803DE7E0(p, 0, arg0 * arg1);
    return p;
}
void *fn_803DE960(void *arg0, void *arg1) {
    void *p = OSAllocFromHeap(lbl_805D77AC, (u32)arg1);
    move_data__6TLobbyFv(p, arg0, arg1);
    OSFreeToHeap(lbl_805D77AC, arg0);
    return p;
}

}
