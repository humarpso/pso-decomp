#include "types.h"

extern "C" {

s32 get_state__10TSceneSoraFPv(void* p);
void set_scene_flag__10TSceneSoraFi(int a0);

s32 get_state__10TSceneSoraFPv(void* p) { return *(s32*)((char*)p + 0x20); }

    extern int lbl_805D65F0;
void set_scene_flag__10TSceneSoraFi(int a0) { lbl_805D65F0 = a0; }

}
