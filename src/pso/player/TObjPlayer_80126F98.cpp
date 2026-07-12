#include "types.h"

extern "C" {

void* TObjPlayer__sub_80126F98(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A2F78[];
    extern const float lbl_805DADA4;
void* TObjPlayer__sub_80126F98(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2F78; *(float*)((char*)a0 + 0x200) = lbl_805DADA4; *(float*)((char*)a0 + 0x1fc) = lbl_805DADA4; *(float*)((char*)a0 + 0x1f8) = lbl_805DADA4; return a0; }

}
