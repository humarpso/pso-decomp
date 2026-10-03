#include "types.h"

extern "C" {

void* init_state_34__10TObjPlayerFPv(void* a0);
int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char TObjPlayer__sub_8012175C[];
    extern unsigned char lbl_804A0AC4[];
    extern const float lbl_805DACC4;
void* init_state_34__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A0AC4; set_status_flags__10TObjPlayerFPvUi(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)TObjPlayer__sub_8012175C; *(float*)((char*)a0 + 0x1e4) = lbl_805DACC4; return a0; }

}
