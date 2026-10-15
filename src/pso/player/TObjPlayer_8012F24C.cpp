#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char lbl_804A6200[];
    extern const float lbl_805DAF98;
void*TObjPlayer::set_mode_vector() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A6200; *(float*)((char*)this + 0x200) = lbl_805DAF98; *(float*)((char*)this + 0x1fc) = lbl_805DAF98; *(float*)((char*)this + 0x1f8) = lbl_805DAF98; return this; }

}
