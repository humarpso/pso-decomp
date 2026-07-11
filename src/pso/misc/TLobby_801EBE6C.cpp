#include "types.h"

extern "C" {

int TLobby__sub_801EBE6C(void);
int TLobby__sub_801EBE90(void);
void TLobby__sub_801EBEB4(int a0);
int TOMineTrap__sub_80171378(void*);
int fn_801F49BC(void*);

int TLobby__sub_801EBE6C(void) { return TOMineTrap__sub_80171378((void*)(0)); }
int TLobby__sub_801EBE90(void) { return TOMineTrap__sub_80171378((void*)(1)); }

    extern int* lbl_805D5E78;
    extern unsigned char lbl_805D5E88;
    extern int lbl_805D5E98;
    extern int lbl_805D5EB8;
    extern int tl_01;
void TLobby__sub_801EBEB4(int a0) { lbl_805D5EB8 = fn_801F49BC((void*)(tl_01)); lbl_805D5E78[(unsigned char)(a0)] = 0; lbl_805D5E88 = a0; lbl_805D5E98 = 11; }

}
