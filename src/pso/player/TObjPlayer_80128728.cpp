#include "types.h"
#include "pso/player/TObjPlayer_80128728.h"

extern "C" {

int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);
}

void s_rank_harisen_scale_node(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1fc); } }

    extern const float lbl_805DADF0;
void s_rank_harisen_reset_fan(void* a0) { *(float*)((char*)a0 + 0x200) = lbl_805DADF0; }
