#include "types.h"

extern "C" {

void* init_state__10TObjPlayerFPv(void* a0);
int TItemWeapon__ct(void);
int set_weapon_trail_joints(void*, void*, void*, void*);

    extern unsigned char lbl_804A1D30[];
    extern const float lbl_805DAD18;
void* init_state__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A1D30; set_weapon_trail_joints(a0, (void*)0, (void*)3, (void*)2); set_weapon_trail_joints(a0, (void*)1, (void*)4, (void*)5); *(float*)((char*)a0 + 0x200) = lbl_805DAD18; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD18; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD18; return a0; }

}
