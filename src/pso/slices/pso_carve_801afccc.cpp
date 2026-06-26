#include "types.h"

extern "C" {

s16 fn_801AFCCC(void* p);
int fn_801C0024(void*);

s16 fn_801AFCCC(void* p) { return (s16)(fn_801C0024(*(void**)((char*)p + 0x380))); }

}
