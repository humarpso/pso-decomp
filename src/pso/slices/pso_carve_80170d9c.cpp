#include "types.h"

extern "C" {

int VecCopy__FP3VecPC3Vec(void*, void*);
int fn_80154E3C(void*);
void fn_80170D9C(void* p);

void fn_80170D9C(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x38, (char*)p + 0x334); fn_80154E3C(p); }

}
