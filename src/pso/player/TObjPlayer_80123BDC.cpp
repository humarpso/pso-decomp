#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);
int set_weapon_trail_joints(void*, void*, void*, void*);

    extern unsigned char lbl_804A1D30[];
    extern const float lbl_805DAD18;
void*TObjPlayer::init_state() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A1D30; set_weapon_trail_joints(this, (void*)0, (void*)3, (void*)2); set_weapon_trail_joints(this, (void*)1, (void*)4, (void*)5); *(float*)((char*)this + 0x200) = lbl_805DAD18; *(float *)&this->m_1fc = lbl_805DAD18; *(float*)((char*)this + 0x1f8) = lbl_805DAD18; return this; }

}
