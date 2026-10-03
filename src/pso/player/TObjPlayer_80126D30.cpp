#include "types.h"

extern "C" {

void run_tentacle_if_state1__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80126D6C(void* a0);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void run_tentacle_if_state1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1f8); } }

    extern const float lbl_805DAD98;
void TObjPlayer__sub_80126D6C(void* a0) { *(float*)((char*)a0 + 0x1fc) = lbl_805DAD98; }

}
