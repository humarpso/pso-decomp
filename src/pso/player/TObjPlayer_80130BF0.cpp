#include "types.h"

extern "C" {

void update_hanger_position__10TObjPlayerFPv(void* p);
int post_translate_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void update_hanger_position__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { post_translate_matrix((char*)p + 0x1f8); } }

}
