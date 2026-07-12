#include "types.h"

extern "C" {

void update_effect_if_state1__10TObjPlayerFPv(void* p);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TObjPlayer__sub_80121200(void*);

void update_effect_if_state1__10TObjPlayerFPv(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

}
