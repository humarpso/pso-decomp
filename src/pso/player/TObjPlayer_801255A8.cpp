#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int construct_attack_collision(void);

    extern unsigned char lbl_804A2548[];
    extern const float lbl_805DAD54;
void*TObjPlayer::construct_explosion_collider() { construct_attack_collision(); *(int*)((char*)this + 0x18) = (int)lbl_804A2548; *(float*)((char*)this + 0xc4) = lbl_805DAD54; return this; }

}
