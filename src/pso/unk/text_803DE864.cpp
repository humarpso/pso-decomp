#include "types.h"
struct A_803DE864 { void *a; void *b; u8 *(*alloc)(s32, s32); };

extern "C" {
extern A_803DE864 *lbl_805D77A8;
u8 *fn_803DE864(s32 a, s32 b);
}

extern "C" {

u8 *fn_803DE864(s32 a, s32 b) {
    return lbl_805D77A8->alloc(a, b);
}

}
