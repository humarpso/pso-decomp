#include "types.h"

extern "C" {

void init_flags_vec4__10TObjPlayerFPv(void* p);
int set_vec4_const__10TObjPlayerFPv(void*);

int set_indexed_flags(void*, void*, void*);

void init_flags_vec4__10TObjPlayerFPv(void* p) { set_indexed_flags(p, (void*)0, (void*)1); set_vec4_const__10TObjPlayerFPv((char*)p + 0x608); }

}
