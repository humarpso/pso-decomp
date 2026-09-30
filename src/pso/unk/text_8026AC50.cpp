#include "types.h"
extern "C" {
void heap_free__5THeapFPv(void *, u32);
void __dt__5THeapFv(void *, s32);
extern u32 lbl_805187D8[];
extern void *lbl_805D6460;
extern u32 lbl_805D6464;
void fn_8026AC50(void);
}

extern "C" {

void fn_8026AC50(void) {
    s32 i;
    u32 v;
    for (i = 29; i >= 0; i--) {
        v = lbl_805187D8[i];
        if (v != 0) {
            heap_free__5THeapFPv(lbl_805D6460, v);
            lbl_805187D8[i] = 0;
        }
    }
    v = lbl_805D6464;
    if (v != 0) {
        heap_free__5THeapFPv(lbl_805D6460, v);
        lbl_805D6464 = 0;
    }
    __dt__5THeapFv(lbl_805D6460, 1);
    lbl_805D6460 = 0;
}

}
