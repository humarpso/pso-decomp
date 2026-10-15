#include "types.h"
#include "pso/boss/TObjBoss2Tunnel.h"

extern "C" {

int get_current_matrix(void*);
int invert_matrix_in_place__10TObjPlayerFUl(void*);
int push_matrix(void*);
int pop_matrix(void);

void TObjBoss2Tunnel::render(void* a1) { push_matrix(this); invert_matrix_in_place__10TObjPlayerFUl((void*)0); get_current_matrix(a1); pop_matrix(); }

}
