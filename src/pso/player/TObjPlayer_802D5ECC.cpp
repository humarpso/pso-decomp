#include "types.h"

extern "C" {

void* init_state_445__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);

    extern unsigned char fn_8032E648[];
    extern unsigned char fn_8032E6A0[];
    extern unsigned char lbl_804E23F0[];
    extern const float lbl_805DE7A0;
void* init_state_445__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E23F0; TObjPlayer__sub_8012106C(a0, (void*)3); *(int*)((char*)a0 + 0x1f8) = 0; *(int*)((char*)a0 + 0x1fc) = 445; *(int*)((char*)a0 + 0x204) = (int)fn_8032E648; *(int*)((char*)a0 + 0x208) = (int)fn_8032E6A0; *(float*)((char*)a0 + 0x200) = lbl_805DE7A0; return a0; }

}
