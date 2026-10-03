#include "types.h"

extern "C" {

void notify_tentacle_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80128764(void* a0);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void notify_tentacle_if_active__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1fc); } }

    extern const float lbl_805DADF0;
void TObjPlayer__sub_80128764(void* a0) { *(float*)((char*)a0 + 0x200) = lbl_805DADF0; }

}
