#include "types.h"

extern "C" {

void* init_fields__10TObjPlayerFPv(void* a0);
int TItemWeapon__ct(void);

    extern unsigned char lbl_804A67D0[];
    extern const float lbl_805DAFD0;
void* init_fields__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A67D0; *(float*)((char*)a0 + 0x200) = lbl_805DAFD0; *(float*)((char*)a0 + 0x1fc) = lbl_805DAFD0; *(float*)((char*)a0 + 0x1f8) = lbl_805DAFD0; return a0; }

}
