#include "types.h"

extern "C" {

void* TObjPlayer__sub_801255A8(void* a0);
int fn_802E4A4C(void);

    extern unsigned char lbl_804A2548[];
    extern const float lbl_805DAD54;
void* TObjPlayer__sub_801255A8(void* a0) { fn_802E4A4C(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2548; *(float*)((char*)a0 + 0xc4) = lbl_805DAD54; return a0; }

}
