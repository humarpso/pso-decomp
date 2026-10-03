#include "types.h"

extern "C" {

void render__15TObjBoss2TunnelFPvPv(void* p, void* a1);
int get_current_matrix(void*);
int TObjPlayer__sub_803D89E8(void*);
int push_matrix(void*);
int pop_matrix(void);

void render__15TObjBoss2TunnelFPvPv(void* p, void* a1) { push_matrix(p); TObjPlayer__sub_803D89E8((void*)0); get_current_matrix(a1); pop_matrix(); }

}
