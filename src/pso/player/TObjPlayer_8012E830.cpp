#include "types.h"

extern "C" {

void start_weapon_recoil__10TObjPlayerFPv(void* p);

void start_weapon_recoil__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x1fc) = 1; }

}
