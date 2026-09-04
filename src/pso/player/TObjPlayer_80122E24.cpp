#include "types.h"

extern "C" {

void update_effect_if_state1__10TObjPlayerFPv(void* p);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

void update_effect_if_state1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

}
