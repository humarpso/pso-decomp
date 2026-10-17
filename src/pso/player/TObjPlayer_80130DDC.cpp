#include "types.h"
#include "pso/player/TObjPlayer_80130DDC.h"
#include "pso/item/TUnk_804A6BD0.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char spawn_weapon_impact_effect[];
    extern unsigned char lbl_804A6BD0[];
    extern const float lbl_805DB024;
    extern const float lbl_805DB030;
void* yasminkov_3000r_ct(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6BD0; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)spawn_weapon_impact_effect; *(float*)((char*)a0 + 0x1e4) = lbl_805DB030; *(float*)((char*)a0 + 0x200) = lbl_805DB024; ((TUnk_804A6BD0 *)a0)->m_1fc = lbl_805DB024; *(float*)((char*)a0 + 0x1f8) = lbl_805DB024; ((TUnk_804A6BD0 *)a0)->m_204 = 0; return a0; }

}
