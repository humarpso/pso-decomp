#include "types.h"

extern "C" {

int TObjPlayer__sub_801BFC90(void* a0 = 0);
void* TObjPlayer__sub_801BFC60(void* p);
int TObjPlayer__sub_8001BF10(void*);
int TObjPlayer__sub_801BF964(void*);
int TObjPlayer__sub_801BF9A4(void*);
int TObjPlayer__sub_801BFDD4(void*);
int TObjPlayer__sub_801BFE50(void*);
int set_vec4_const__10TObjPlayerFPv(void*);
int fn_801C68B0(void*);
void TObjPlayer__sub_801BFD3C(void* p);

void* TObjPlayer__sub_801BFCAC(void* p) { set_vec4_const__10TObjPlayerFPv(p); return p; }
void* TObjPlayer__sub_801BFCDC(void* p) { TObjPlayer__sub_801BF964(p); return p; }
void* TObjPlayer__sub_801BFD0C(void* p) { TObjPlayer__sub_801BFD3C(p); return p; }
void TObjPlayer__sub_801BFD3C(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x8) = 0; }
void* init_sub__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001BF10((char*)p + 0xc); fn_801C68B0(p); return p; }
void* init_subobjects__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001BF10((char*)p + 0x4); TObjPlayer__sub_801BFE50((char*)p + 0x18); TObjPlayer__sub_801BFDD4(p); return p; }

}
