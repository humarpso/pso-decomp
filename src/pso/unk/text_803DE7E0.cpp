#include "types.h"

extern "C" {
void *memset(void *dst, s32 c, u32 n);
void fn_803DE7E0(void *p, u8 c, u32 n);
void *OSCreateHeap(void *start, void *end);
extern void *lbl_805D77AC;
extern void *lbl_805D77A8;
extern u8 lbl_8047E428[];
void fn_803DE804(u8 *start, s32 size);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DE7E0(void *p, u8 c, u32 n) {
    memset(p, c, n);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DE804(u8 *start, s32 size) {
    lbl_805D77AC = OSCreateHeap(start, start + size);
    lbl_805D77A8 = lbl_8047E428;
}
#pragma pop

}
