#include "types.h"

extern "C" {

void TObjPlayer__sub_8012D034(void* p);
void notify_container_if_mode0__10TObjPlayerFPv(void* p);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_8012D034(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }
void notify_container_if_mode0__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
