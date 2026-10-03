#include "types.h"

extern "C" {

void update_effect_if_state1__10TObjPlayerFPv(void* p);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void update_effect_if_state1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1f8); } }

}
