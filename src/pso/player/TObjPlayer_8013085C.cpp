#include "types.h"

extern "C" {

void TObjPlayer__sub_8013085C(void* p);
int post_translate_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_8013085C(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { post_translate_matrix((char*)p + 0x1fc); } }

}
