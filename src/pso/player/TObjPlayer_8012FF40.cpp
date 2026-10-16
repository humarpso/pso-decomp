#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char lbl_804A67D0[];
    extern const float lbl_805DAFD0;
void*TObjPlayer::init_fields() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A67D0; *(float*)((char*)this + 0x200) = lbl_805DAFD0; *(float *)&this->m_1fc = lbl_805DAFD0; *(float*)((char*)this + 0x1f8) = lbl_805DAFD0; return this; }

}
