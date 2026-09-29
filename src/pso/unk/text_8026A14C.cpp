#include "types.h"
extern "C" {
void heap_free__5THeapFPv(void *, void *);
extern void *lbl_805187D8[];
extern void *lbl_805D6460;
extern void *lbl_805D6464;
void fn_8026A14C(void);
}

extern "C" {

void fn_8026A14C(void) {
    s32 i;
    for (i = 0x1D; i >= 0; i--) {
        if (lbl_805187D8[i] != NULL) {
            heap_free__5THeapFPv(lbl_805D6460, lbl_805187D8[i]);
            lbl_805187D8[i] = NULL;
        }
    }
    if (lbl_805D6464 != NULL) {
        heap_free__5THeapFPv(lbl_805D6460, lbl_805D6464);
        lbl_805D6464 = NULL;
    }
}

}
