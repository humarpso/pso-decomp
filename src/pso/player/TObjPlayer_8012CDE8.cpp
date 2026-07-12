#include "types.h"

extern "C" {

void* enter_state_515__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);

    extern unsigned char fn_8011BEF0[];
    extern unsigned char lbl_804A5648[];
    extern const float lbl_805DAEF8;
void* enter_state_515__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A5648; TObjPlayer__sub_8012106C(a0, (void*)515); *(int*)((char*)a0 + 0x1f0) = (int)fn_8011BEF0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAEF8; return a0; }

}
