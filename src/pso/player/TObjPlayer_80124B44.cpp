#include "types.h"

extern "C" {

void* TObjPlayer__sub_80124B44(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);

    extern unsigned char TObjPlayer__sub_8012484C[];
    extern unsigned char lbl_804A2164[];
    extern const float lbl_805DAD30;
void* TObjPlayer__sub_80124B44(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2164; *(int*)((char*)a0 + 0x1f0) = (int)TObjPlayer__sub_8012484C; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD30; TObjPlayer__sub_8012106C(a0, (void*)34); *(int*)((char*)a0 + 0x1f8) = 1; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x200) = 0; return a0; }

}
