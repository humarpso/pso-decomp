#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int construct_srank_weapon(void);

    extern unsigned char lbl_804A3E20[];
    extern const float lbl_805DADF4;
void*TObjPlayer::init_shot_state() { construct_srank_weapon(); *(int*)((char*)this + 0x18) = (int)lbl_804A3E20; *(float*)((char*)this + 0x204) = lbl_805DADF4; *(float*)((char*)this + 0x200) = lbl_805DADF4; *(float*)((char*)this + 0x1fc) = lbl_805DADF4; return this; }

}
