#include "types.h"

extern "C" {

int get_position__12TBoss1DragonFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int get_position__12TBoss1DragonFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

}
