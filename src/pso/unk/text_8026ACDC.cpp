#include "types.h"
extern "C" {
void *__nw__5THeapFUl(u32);
void *__ct__5THeapFUli(void *, u32, s32);
extern void *lbl_805187D8[];
extern void *TAdScrollWinGC__chat_log_heap;
extern void *chat_last_line_buffer;
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
    TAdScrollWinGC__chat_log_heap = heap;
    chat_last_line_buffer = NULL;
    for (i = 0; i < 0x1E; i++) {
        lbl_805187D8[i] = NULL;
    }
}

}
