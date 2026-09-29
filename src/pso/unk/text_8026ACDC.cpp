#include "types.h"
extern "C" {
void *__nw__5THeapFUl(u32);
void *__ct__5THeapFUli(void *, u32, s32);
extern void *lbl_805187D8[];
extern void *lbl_805D6460;
extern void *lbl_805D6464;
void TLobby__sub_8026ACDC(void);
}

extern "C" {

void TLobby__sub_8026ACDC(void) {
    void *heap;
    s32 i;
    heap = __nw__5THeapFUl(0x14);
    if (heap != NULL) {
        heap = __ct__5THeapFUli(heap, 0x2000, 8);
    }
    lbl_805D6460 = heap;
    lbl_805D6464 = NULL;
    for (i = 0; i < 0x1E; i++) {
        lbl_805187D8[i] = NULL;
    }
}

}
