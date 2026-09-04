#include "types.h"

extern "C" {

void* init_vtable_and_handler__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char spawn_shoot_particle_9f[];
    extern unsigned char lbl_804A2450[];
    extern const float lbl_805DAD48;
void* init_vtable_and_handler__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2450; *(int*)((char*)a0 + 0x1f0) = (int)spawn_shoot_particle_9f; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD48; return a0; }

}
