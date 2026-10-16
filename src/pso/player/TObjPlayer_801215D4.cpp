#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char create_item_shoot_model__10TObjPlayerFiiif[];
    extern unsigned char lbl_804A09B0[];
    extern const float lbl_805DACB8;
void*TObjPlayer::init_substate() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A09B0; set_status_flags__10TObjPlayerFPvUi(this, (void*)34); *(int*)((char*)this + 0x1f0) = (int)create_item_shoot_model__10TObjPlayerFiiif; this->m_1e4 = lbl_805DACB8; return this; }

}
