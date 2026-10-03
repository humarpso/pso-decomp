#include "types.h"

extern "C" {

void* enter_state_513__10TObjPlayerFPv(void* a0);
int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804A1570[];
    extern const float lbl_805DAD04;
void* enter_state_513__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A1570; set_status_flags__10TObjPlayerFPvUi(a0, (void*)513); *(float*)((char*)a0 + 0x200) = lbl_805DAD04; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD04; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD04; return a0; }

}
