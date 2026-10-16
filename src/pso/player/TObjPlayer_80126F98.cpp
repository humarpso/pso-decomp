#include "types.h"
#include "pso/item/TUnk_804A2F78.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char lbl_804A2F78[];
    extern const float lbl_805DADA4;
void*TUnk_804A2F78::setup_effect() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A2F78; *(float *)&this->unk_200 = lbl_805DADA4; *(float *)&(this->m_1fc) = lbl_805DADA4; *(float*)((char*)this + 0x1f8) = lbl_805DADA4; return this; }

}
