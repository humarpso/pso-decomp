#include "types.h"
#include "pso/player/TObjPlayer_80130B1C.h"
#include "pso/item/TUnk_804A6AD8.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char spawn_weapon_impact_effect[];
    extern unsigned char lbl_804A6AD8[];
    extern const float lbl_805DB00C;
    extern const float lbl_805DB018;
void* yasminkov_9000m_ct(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6AD8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)spawn_weapon_impact_effect; *(float*)((char*)a0 + 0x1e4) = lbl_805DB018; ((TObjPlayer *)a0)->set_status_flags((u32)((void*)515)); *(int*)((char*)a0 + 0x1f8) = 0; ((TUnk_804A6AD8 *)a0)->m_204 = lbl_805DB00C; *(float*)((char*)a0 + 0x200) = lbl_805DB00C; ((TUnk_804A6AD8 *)a0)->m_1fc = lbl_805DB00C; return a0; }

}
