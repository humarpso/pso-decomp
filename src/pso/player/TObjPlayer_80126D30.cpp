#include "types.h"

extern "C" {

void harisen_battle_fan_scale_node(void* p);
void harisen_battle_fan_reset_fan(void* a0);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void harisen_battle_fan_scale_node(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1f8); } }

    extern const float lbl_805DAD98;
void harisen_battle_fan_reset_fan(void* a0) { *(float*)((char*)a0 + 0x1fc) = lbl_805DAD98; }

}
