#include "types.h"

extern "C" {

void free_resources__19TWindowKeyBoardSoftFv(void);
int TLobby__sub_800F957C(void*);

    extern int lbl_805D5538;
    extern int lbl_805D553C;
    extern int TWindowKeyBoardSoft__data_805D5548;
void free_resources__19TWindowKeyBoardSoftFv(void) { TLobby__sub_800F957C((void*)(lbl_805D5538)); TWindowKeyBoardSoft__data_805D5548 = 0; lbl_805D553C = 0; lbl_805D5538 = 0; }

}
