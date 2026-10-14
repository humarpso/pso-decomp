#include "types.h"

extern "C" {

void yasminkov_3000r_node_callback(void* p);
int post_translate_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void yasminkov_3000r_node_callback(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { post_translate_matrix((char*)p + 0x1f8); } }

}
