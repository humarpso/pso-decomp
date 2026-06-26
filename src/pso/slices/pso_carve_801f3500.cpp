#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_801F3500(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int fn_801F3500(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0xc0); }
void fn_801F3524(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
