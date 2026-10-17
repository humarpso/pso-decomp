#include "types.h"
#include "pso/player/TObjPlayer_801266D8.h"
#include "pso/item/TUnk_804A2A58.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char baranz_launcher_create_shot[];
    extern unsigned char lbl_804A2A58[];
    extern const float lbl_805DAD78;
void* baranz_launcher_ct(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2A58; ((TObjPlayer *)a0)->set_status_flags((u32)((void*)2)); *(int*)((char*)a0 + 0x1f0) = (int)baranz_launcher_create_shot; *(int *)&((TUnk_804A2A58 *)a0)->m_1fc = 0; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD78; return a0; }

}
