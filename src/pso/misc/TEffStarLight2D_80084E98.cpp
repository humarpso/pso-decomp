#include "types.h"

extern "C" {

int TEffStarLight2D__sub_80084E98(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int TEffStarLight2D__sub_80084E98(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x2c); }

}
