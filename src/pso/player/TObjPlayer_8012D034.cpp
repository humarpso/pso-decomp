#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void reset_soul_scythe_idle(void* p);
int rotate_matrix_z(void*, void*);
int get_player_list__10TObjPlayerFv(void*);

void reset_soul_scythe_idle(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }
void TObjPlayer::notify_container_if_mode0() { if (get_player_list__10TObjPlayerFv(this) == 0) { rotate_matrix_z((void*)0, *(void**)((char*)this + 0x1f8)); } }

}
