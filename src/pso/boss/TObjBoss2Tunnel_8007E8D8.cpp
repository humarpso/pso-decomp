#include "types.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int get_current_matrix(void*);
int push_matrix(void*);
int pop_matrix(void);

void TObjBoss2Tunnel::render(void* a1) { push_matrix(this); TObjPlayer::invert_matrix_in_place((u32)((void*)0)); get_current_matrix(a1); pop_matrix(); }

}
