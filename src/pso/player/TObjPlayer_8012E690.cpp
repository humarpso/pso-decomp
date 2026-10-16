#include "types.h"
#include "pso/player/TUnk_804A5D28.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char play_effect__13TItemEffFlameFllll[];
    extern unsigned char play_target_impact_effect[];
    extern unsigned char create_shoot_model_with_particles[];
    extern unsigned char lbl_804A5D28[];
    extern const float lbl_805DAF7C;
    extern const float lbl_805DAF90;
void*TUnk_804A5D28::setup_flame_effect() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A5D28; *(float*)((char*)this + 0x1f8) = lbl_805DAF7C; *(int *)&(*(s32 * *)((u8 *)this + 0x1EC)) = (int)play_effect__13TItemEffFlameFllll; *(int *)&(*(s32 *)((u8 *)this + 0x1FC)) = 0; *(int *)&(*(s32 * *)((u8 *)this + 0x1F4)) = (int)play_target_impact_effect; *(int*)((char*)this + 0x1f0) = (int)create_shoot_model_with_particles; (*(float *)((u8 *)this + 0x1E4)) = lbl_805DAF90; return this; }

}
