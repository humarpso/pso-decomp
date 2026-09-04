#include "types.h"

extern "C" {

void* setup_flame_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char play_effect__13TItemEffFlameFiiii[];
    extern unsigned char fn_8010A710[];
    extern unsigned char fn_8011BE50[];
    extern unsigned char lbl_804A5D28[];
    extern const float lbl_805DAF7C;
    extern const float lbl_805DAF90;
void* setup_flame_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A5D28; *(float*)((char*)a0 + 0x1f8) = lbl_805DAF7C; *(int*)((char*)a0 + 0x1ec) = (int)play_effect__13TItemEffFlameFiiii; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x1f4) = (int)fn_8010A710; *(int*)((char*)a0 + 0x1f0) = (int)fn_8011BE50; *(float*)((char*)a0 + 0x1e4) = lbl_805DAF90; return a0; }

}
