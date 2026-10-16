#include "types.h"
#include "pso/item/TUnk_804A1570.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFUl(void*, void*);

    extern unsigned char lbl_804A1570[];
    extern const float lbl_805DAD04;
void*TUnk_804A1570::enter_state_513() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A1570; set_status_flags__10TObjPlayerFUl(this, (void*)513); *(float *)&this->unk_200 = lbl_805DAD04; *(float *)&(this->m_1fc) = lbl_805DAD04; *(float*)((char*)this + 0x1f8) = lbl_805DAD04; return this; }

}
