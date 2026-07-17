#include "types.h"

extern "C" {

void clear_base__10TObjPlayerFPv(void* p);
void* forward_release__10TObjPlayerFPv(void* p);
void* TObjPlayer__sub_801BFB9C(void* p);
int set_vec3_const__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801C5FCC(void*);

void clear_base__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void* forward_release__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801C5FCC(p); return p; }
void* TObjPlayer__sub_801BFB9C(void* p) { set_vec3_const__10TObjPlayerFPv(p); return p; }

}
