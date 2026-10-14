#include "types.h"

extern "C" {

void yasminkov_9000m_node_callback(void* p);
int post_translate_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void yasminkov_9000m_node_callback(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { post_translate_matrix((char*)p + 0x1fc); } }

}
