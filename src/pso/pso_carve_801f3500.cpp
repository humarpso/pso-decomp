#include "types.h"

extern "C" {

int fn_801F3500(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int fn_801F3500(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0xc0); }
int fn_801F3524(void) { return 0; }

}
