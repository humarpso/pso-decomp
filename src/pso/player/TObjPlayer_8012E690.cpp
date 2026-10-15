#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char play_effect__13TItemEffFlameFllll[];
    extern unsigned char play_target_impact_effect[];
    extern unsigned char create_shoot_model_with_particles[];
    extern unsigned char lbl_804A5D28[];
    extern const float lbl_805DAF7C;
    extern const float lbl_805DAF90;
void*TObjPlayer::setup_flame_effect() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A5D28; *(float*)((char*)this + 0x1f8) = lbl_805DAF7C; *(int*)((char*)this + 0x1ec) = (int)play_effect__13TItemEffFlameFllll; *(int*)((char*)this + 0x1fc) = 0; *(int*)((char*)this + 0x1f4) = (int)play_target_impact_effect; *(int*)((char*)this + 0x1f0) = (int)create_shoot_model_with_particles; *(float*)((char*)this + 0x1e4) = lbl_805DAF90; return this; }

}
