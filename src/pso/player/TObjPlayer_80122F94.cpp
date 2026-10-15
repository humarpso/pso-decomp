#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804A1570[];
    extern const float lbl_805DAD04;
void*TObjPlayer::enter_state_513() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A1570; set_status_flags__10TObjPlayerFPvUi(this, (void*)513); *(float*)((char*)this + 0x200) = lbl_805DAD04; *(float*)((char*)this + 0x1fc) = lbl_805DAD04; *(float*)((char*)this + 0x1f8) = lbl_805DAD04; return this; }

}
