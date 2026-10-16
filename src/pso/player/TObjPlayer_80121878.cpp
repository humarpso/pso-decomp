#include "types.h"
#include "pso/item/TUnk_804A0AC4.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFUl(void*, void*);

    extern unsigned char create_item_shoot_model__10TObjPlayerFiiif[];
    extern unsigned char lbl_804A0AC4[];
    extern const float lbl_805DACC4;
void*TUnk_804A0AC4::init_state_34() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A0AC4; set_status_flags__10TObjPlayerFUl(this, (void*)34); *(int*)((char*)this + 0x1f0) = (int)create_item_shoot_model__10TObjPlayerFiiif; (*(float *)((u8 *)this + 0x1E4)) = lbl_805DACC4; return this; }

}
