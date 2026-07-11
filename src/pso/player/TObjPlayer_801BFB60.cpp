#include "types.h"

extern "C" {

void TObjPlayer__sub_801BFB60(void* p);
void* forward_release__10TObjPlayerFPv(void* p);
void* TObjPlayer__sub_801BFB9C(void* p);
int set_vec3_const__10TObjPlayerFPv(void*);
int fn_801C5FCC(void*);

void TObjPlayer__sub_801BFB60(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void* forward_release__10TObjPlayerFPv(void* p) { fn_801C5FCC(p); return p; }
void* TObjPlayer__sub_801BFB9C(void* p) { set_vec3_const__10TObjPlayerFPv(p); return p; }

}
