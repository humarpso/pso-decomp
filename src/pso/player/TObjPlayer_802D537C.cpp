#include "types.h"

extern "C" {

void* TObjPlayer__sub_802D537C(void* a0);
int TObjPlayer__sub_8012106C(void*, void*);
int TObjPlayer__sub_802D5ECC(void);

    extern unsigned char fn_80109974[];
    extern unsigned char TObjPlayer__sub_802D52E8[];
    extern unsigned char lbl_804E1CA8[];
    extern const float lbl_805DE790;
void* TObjPlayer__sub_802D537C(void* a0) { TObjPlayer__sub_802D5ECC(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1CA8; *(float*)((char*)a0 + 0x200) = lbl_805DE790; TObjPlayer__sub_8012106C(a0, (void*)32); *(int*)((char*)a0 + 0x208) = (int)TObjPlayer__sub_802D52E8; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; return a0; }

}
