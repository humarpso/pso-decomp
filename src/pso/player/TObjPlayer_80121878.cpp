#include "types.h"

extern "C" {

void* TObjPlayer__sub_80121878(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);

    extern unsigned char TObjPlayer__sub_8012175C[];
    extern unsigned char lbl_804A0AC4[];
    extern const float lbl_805DACC4;
void* TObjPlayer__sub_80121878(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A0AC4; TObjPlayer__sub_8012106C(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)TObjPlayer__sub_8012175C; *(float*)((char*)a0 + 0x1e4) = lbl_805DACC4; return a0; }

}
