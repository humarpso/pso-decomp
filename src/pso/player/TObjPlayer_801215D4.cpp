#include "types.h"

extern "C" {

void* init_substate__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char TObjPlayer__sub_8012175C[];
    extern unsigned char lbl_804A09B0[];
    extern const float lbl_805DACB8;
void* init_substate__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A09B0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)TObjPlayer__sub_8012175C; *(float*)((char*)a0 + 0x1e4) = lbl_805DACB8; return a0; }

}
