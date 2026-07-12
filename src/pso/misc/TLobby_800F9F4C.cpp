#include "types.h"

extern "C" {

void TLobby__sub_800F9F4C(void* a0);
void TLobby__sub_800F9F74(void* a0);
void TLobby__sub_800F9F9C(void);
int TLobby__sub_800F9E18();
s32 TLobby__sub_800F9FD0();
int TLobby__sub_800FA464();
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

    extern int lbl_805D537C;
void TLobby__sub_800F9F4C(void* a0) { heap_free__5THeapFPv((void*)(lbl_805D537C), a0); }

    extern int lbl_805D537C;
void TLobby__sub_800F9F74(void* a0) { heap_alloc__5THeapFUl((void*)(lbl_805D537C), a0); }

void TLobby__sub_800F9F9C(void) {
loop_1:
    if (TLobby__sub_800F9FD0() != 0) {
        TLobby__sub_800FA464();
        TLobby__sub_800F9E18();
        goto loop_1;
    }
}

}
