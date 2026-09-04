#include "types.h"

extern "C" {

void* init_vtable__11TMainCursorFPv(void* a0);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A7278[];
    extern int lbl_805D2CC0;
void* init_vtable__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7278; *(int*)((char*)a0 + 0x0) = lbl_805D2CC0; return a0; }

}
