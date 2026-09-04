#include "types.h"

extern "C" {

int copy_position__15TEffStarLight2DFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int copy_position__15TEffStarLight2DFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x2c); }

}
