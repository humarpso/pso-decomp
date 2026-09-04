#include "types.h"

extern "C" {

void notify_tentacle_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80128764(void* a0);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

void notify_tentacle_if_active__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1fc); } }

    extern const float lbl_805DADF0;
void TObjPlayer__sub_80128764(void* a0) { *(float*)((char*)a0 + 0x200) = lbl_805DADF0; }

}
