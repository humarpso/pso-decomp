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

void* TObjPlayer__sub_801BFCAC(void* p) { set_vec4_const__10TObjPlayerFPv(p); return p; }
void* TObjPlayer__sub_801BFCDC(void* p) { TObjPlayer__sub_801BF964(p); return p; }
void* init_wrapper__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFD3C(p); return p; }
void TObjPlayer__sub_801BFD3C(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x8) = 0; }
void* init_sub__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv((char*)p + 0xc); TObjPlayer__sub_801C68B0(p); return p; }
void* init_subobjects__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv((char*)p + 0x4); init_pair__10TObjPlayerFPv((char*)p + 0x18); TObjPlayer__sub_801BFDD4(p); return p; }

}
