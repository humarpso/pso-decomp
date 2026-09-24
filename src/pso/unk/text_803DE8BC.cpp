#include "types.h"

extern "C" {
extern void *lbl_805D77AC;
void OSFreeToHeap(void *heap, void *ptr);
void fn_803DE8E4(void *ptr);
extern void *lbl_805D77AC;
void *OSAllocFromHeap(void *heap, u32 size);
void *fn_803DE8BC(u32 size);
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

}
