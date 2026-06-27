#include "types.h"

extern "C" {

int VecCopy__FP3VecPC3Vec(void*, void*);
int TObjPlayer__sub_80154E3C(void*);
void TOMineTrap__sub_80170D9C(void* p);

void TOMineTrap__sub_80170D9C(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x38, (char*)p + 0x334); TObjPlayer__sub_80154E3C(p); }

}
