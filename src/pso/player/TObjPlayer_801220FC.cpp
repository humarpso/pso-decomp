#include "types.h"

extern "C" {

void* init_state_vector__10TObjPlayerFPv(void* a0);
int TItemWeapon__ct(void);

    extern unsigned char lbl_804A0DB0[];
    extern const float lbl_805DACDC;
void* init_state_vector__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A0DB0; *(float*)((char*)a0 + 0x200) = lbl_805DACDC; *(float*)((char*)a0 + 0x1fc) = lbl_805DACDC; *(float*)((char*)a0 + 0x1f8) = lbl_805DACDC; return a0; }

}
