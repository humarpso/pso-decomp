#include "types.h"

extern "C" {

void render__15TObjBoss2TunnelFPvPv(void* p, void* a1);
int get_current_matrix(void*);
int invert_matrix_in_place__10TObjPlayerFUi(void*);
int push_matrix(void*);
int pop_matrix(void);

void render__15TObjBoss2TunnelFPvPv(void* p, void* a1) { push_matrix(p); invert_matrix_in_place__10TObjPlayerFUi((void*)0); get_current_matrix(a1); pop_matrix(); }

}
