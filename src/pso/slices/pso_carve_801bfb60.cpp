#include "types.h"

extern "C" {

int fn_801BF9CC(void*);
int fn_801C5FCC(void*);
void fn_801BFB60(void* p);

void fn_801BFB60(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void* fn_801BFB6C(void* p) { fn_801C5FCC(p); return p; }
void* fn_801BFB9C(void* p) { fn_801BF9CC(p); return p; }

}
