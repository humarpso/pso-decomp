#include "types.h"

extern "C" {

void* init_state__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_801210B0(void*, void*, void*, void*);

    extern unsigned char lbl_804A1D30[];
    extern const float lbl_805DAD18;
void* init_state__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A1D30; TObjPlayer__sub_801210B0(a0, (void*)0, (void*)3, (void*)2); TObjPlayer__sub_801210B0(a0, (void*)1, (void*)4, (void*)5); *(float*)((char*)a0 + 0x200) = lbl_805DAD18; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD18; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD18; return a0; }

}
