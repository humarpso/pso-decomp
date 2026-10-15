#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char lbl_804A2E80[];
    extern const float lbl_805DAD9C;
void*TObjPlayer::init_shot_effect() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A2E80; *(float*)((char*)this + 0x200) = lbl_805DAD9C; *(float*)((char*)this + 0x1fc) = lbl_805DAD9C; *(float*)((char*)this + 0x1f8) = lbl_805DAD9C; return this; }

}
