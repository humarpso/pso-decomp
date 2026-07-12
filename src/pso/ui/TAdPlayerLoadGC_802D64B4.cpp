#include "types.h"

extern "C" {

void* TAdPlayerLoadGC__sub_802D64B4(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);

    extern unsigned char lbl_804E24F0[];
    extern const float lbl_805DE7A8;
void* TAdPlayerLoadGC__sub_802D64B4(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E24F0; TObjPlayer__sub_8012106C(a0, (void*)2); *(float*)((char*)a0 + 0x1f8) = lbl_805DE7A8; return a0; }

}
