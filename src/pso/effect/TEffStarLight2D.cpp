#ifndef PSO_CLASS_PACKAGE
#include "pso/TEffStarLight2D.h"

TEffStarLight2D::~TEffStarLight2D() {}
#else
#if PSO_CLASS_PACKAGE == 0x80084E98
#include "types.h"

extern "C" {

int copy_position__15TEffStarLight2DFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int copy_position__15TEffStarLight2DFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x2c); }

}
#endif
#endif
