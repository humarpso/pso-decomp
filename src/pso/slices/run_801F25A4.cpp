#include "types.h"

extern "C" {

    extern int* lbl_805D5E78;
void TLobby__sub_801F25A4(int a0, int a1) { lbl_805D5E78[(unsigned char)(a0)] = (a1 & 0xffff); }

    extern int* lbl_805D5E78;
void qst_op_leta_letb(int a0, int a1) { lbl_805D5E78[(unsigned char)(a0)] = (a1 & 0xff); }

    extern int* lbl_805D5E78;
void qst_op_leti(int a0, int a1) { lbl_805D5E78[(unsigned char)(a0)] = a1; }

}
