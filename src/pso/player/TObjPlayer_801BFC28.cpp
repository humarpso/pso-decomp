#include "types.h"

extern "C" {

int TObjPlayer__sub_801BFC90(void* a0 = 0);
void* wrap_update__10TObjPlayerFPv(void* p);
int init_forward__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BF964(void*);
int reset_counter_field4__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BFDD4(void*);
int init_pair__10TObjPlayerFPv(void*);
int set_vec4_const__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801C68B0(void*);
void TObjPlayer__sub_801BFD3C(void* p);

void* TObjPlayer__sub_801BFC28(void* p) { init_forward__10TObjPlayerFPv(p); reset_counter_field4__10TObjPlayerFPv(p); return p; }
void* wrap_update__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFC90(p); return p; }

}
