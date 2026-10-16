#include "types.h"
#include "pso/item/TUnk_804A5648.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char spawn_shoot_particle_9f[];
    extern unsigned char lbl_804A5648[];
    extern const float lbl_805DAEF8;
void*TUnk_804A5648::enter_state_515() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A5648; set_status_flags__10TObjPlayerFPvUi(this, (void*)515); *(int*)((char*)this + 0x1f0) = (int)spawn_shoot_particle_9f; (*(float *)((u8 *)this + 0x1E4)) = lbl_805DAEF8; return this; }

}
