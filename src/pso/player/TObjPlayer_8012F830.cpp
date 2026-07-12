#include "types.h"

extern "C" {

void* TObjPlayer__sub_8012F830(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);

    extern unsigned char lbl_804A64E8[];
    extern const float lbl_805DAFB8;
void* TObjPlayer__sub_8012F830(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A64E8; TObjPlayer__sub_8012106C(a0, (void*)2); *(int*)((char*)a0 + 0x204) = 0; *(float*)((char*)a0 + 0x200) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1fc) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1f8) = lbl_805DAFB8; return a0; }

}
