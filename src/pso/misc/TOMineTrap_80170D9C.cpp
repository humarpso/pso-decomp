#include "types.h"

extern "C" {

void sync_position__10TOMineTrapFPv(void* p);

int VecCopy__FP3VecPC3Vec(void*, void*);
int TObjPlayer__sub_80154E3C(void*);

void sync_position__10TOMineTrapFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x38, (char*)p + 0x334); TObjPlayer__sub_80154E3C(p); }

}
