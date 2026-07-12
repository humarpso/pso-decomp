#include "types.h"

extern "C" {

void* TObjPlayer__sub_801220FC(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A0DB0[];
    extern const float lbl_805DACDC;
void* TObjPlayer__sub_801220FC(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A0DB0; *(float*)((char*)a0 + 0x200) = lbl_805DACDC; *(float*)((char*)a0 + 0x1fc) = lbl_805DACDC; *(float*)((char*)a0 + 0x1f8) = lbl_805DACDC; return a0; }

}
