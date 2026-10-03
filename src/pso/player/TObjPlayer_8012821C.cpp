#include "types.h"

extern "C" {

void* init_shot_params__10TObjPlayerFPv(void* a0);
int TItemWeapon__ct(void);

    extern unsigned char lbl_804A3928[];
    extern const float lbl_805DADE8;
void* init_shot_params__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A3928; *(float*)((char*)a0 + 0x200) = lbl_805DADE8; *(float*)((char*)a0 + 0x1fc) = lbl_805DADE8; *(float*)((char*)a0 + 0x1f8) = lbl_805DADE8; return a0; }

}
