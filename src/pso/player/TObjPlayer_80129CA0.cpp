#include "types.h"

extern "C" {

void* init_s_rank_bazooka(void* a0);
int construct_srank_weapon(void);

    extern unsigned char play_effect__13TItemEffFlameFiiii[];
    extern unsigned char play_target_impact_effect[];
    extern unsigned char create_shoot_model_with_particles[];
    extern unsigned char s_rank_bazooka_weapon_vtable[];
    extern const float lbl_805DAE48;
    extern const float lbl_805DAE5C;
void* init_s_rank_bazooka(void* a0) { construct_srank_weapon(); *(int*)((char*)a0 + 0x18) = (int)s_rank_bazooka_weapon_vtable; *(float*)((char*)a0 + 0x1fc) = lbl_805DAE48; *(int*)((char*)a0 + 0x1ec) = (int)play_effect__13TItemEffFlameFiiii; *(int*)((char*)a0 + 0x200) = 0; *(int*)((char*)a0 + 0x1f4) = (int)play_target_impact_effect; *(int*)((char*)a0 + 0x1f0) = (int)create_shoot_model_with_particles; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE5C; return a0; }

}
