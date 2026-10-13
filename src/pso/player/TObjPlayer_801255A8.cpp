#include "types.h"

extern "C" {

void* construct_explosion_collider__10TObjPlayerFPv(void* a0);
int construct_attack_collision(void);

    extern unsigned char lbl_804A2548[];
    extern const float lbl_805DAD54;
void* construct_explosion_collider__10TObjPlayerFPv(void* a0) { construct_attack_collision(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2548; *(float*)((char*)a0 + 0xc4) = lbl_805DAD54; return a0; }

}
