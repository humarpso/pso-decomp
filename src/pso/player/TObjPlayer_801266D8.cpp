#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void* baranz_launcher_ct(void* a0);
int TItemWeapon__ct(void);

    extern unsigned char baranz_launcher_create_shot[];
    extern unsigned char lbl_804A2A58[];
    extern const float lbl_805DAD78;
void* baranz_launcher_ct(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2A58; ((TObjPlayer *)a0)->set_status_flags((u32)((void*)2)); *(int*)((char*)a0 + 0x1f0) = (int)baranz_launcher_create_shot; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD78; return a0; }

}
