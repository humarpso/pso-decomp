#include "types.h"

extern "C" {

void* init_position_state__10TObjPlayerFPv(void* a0);
int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804A64E8[];
    extern const float lbl_805DAFB8;
void* init_position_state__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A64E8; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(int*)((char*)a0 + 0x204) = 0; *(float*)((char*)a0 + 0x200) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1fc) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1f8) = lbl_805DAFB8; return a0; }

}
