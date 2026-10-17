#include "types.h"
#include "pso/player/TObjPlayer_8012B618.h"

extern "C" {

int rotate_matrix_z(void*, void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_8012B618(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { rotate_matrix_z((void*)0, *(void**)((char*)p + 0x1f8)); } }
void TObjPlayer__sub_8012B658(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }

}
