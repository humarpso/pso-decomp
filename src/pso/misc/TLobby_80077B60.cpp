#include "types.h"

extern "C" {
extern u32 lbl_805D4E58;
extern u32 lbl_805D4E5C;
void TLobby__sub_80077BAC(void);
}

extern "C" {

void free_static_windows__6TLobbyFv(void);
void __dl__FPv(void*);

extern u32 lbl_805D4E58;
extern u32 lbl_805D4E5C;

void free_static_windows__6TLobbyFv(void) {
    if ((u32) lbl_805D4E5C != 0U) {
        __dl__FPv((void*)lbl_805D4E5C);
        lbl_805D4E5C = 0U;
    }
    if ((u32) lbl_805D4E58 != 0U) {
        __dl__FPv((void*)lbl_805D4E58);
        lbl_805D4E58 = 0U;
    }
}
void TLobby__sub_80077BAC(void) { (*(int *)&lbl_805D4E58) = 0; (*(int *)&lbl_805D4E5C) = 0; }

}
