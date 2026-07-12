#include "types.h"

extern "C" {

void* TObjPlayer__sub_801266D8(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);

    extern unsigned char TObjPlayer__sub_80126460[];
    extern unsigned char lbl_804A2A58[];
    extern const float lbl_805DAD78;
void* TObjPlayer__sub_801266D8(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2A58; TObjPlayer__sub_8012106C(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)TObjPlayer__sub_80126460; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD78; return a0; }

}
