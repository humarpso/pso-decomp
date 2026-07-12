#include "types.h"

extern "C" {

void* init_lockon__11TMainCursorFPv(void* a0);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A71C4[];
    extern int lbl_805D2CC4;
void* init_lockon__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A71C4; *(int*)((char*)a0 + 0x0) = lbl_805D2CC4; return a0; }

}
