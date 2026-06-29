#include "types.h"

extern "C" {

void TObjPlayer__sub_801BFB60(void* p);
void* TObjPlayer__sub_801BFB6C(void* p);
void* TObjPlayer__sub_801BFB9C(void* p);
int TObjPlayer__sub_801BF9CC(void*);
int fn_801C5FCC(void*);

void TObjPlayer__sub_801BFB60(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void* TObjPlayer__sub_801BFB6C(void* p) { fn_801C5FCC(p); return p; }
void* TObjPlayer__sub_801BFB9C(void* p) { TObjPlayer__sub_801BF9CC(p); return p; }

}
