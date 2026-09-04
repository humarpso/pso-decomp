#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjRain.h"

TObjRain::~TObjRain() {}
#else
#if PSO_CLASS_PACKAGE == 0x80197BEC
#include "types.h"

extern "C" {

int run_task__8TObjRainFv(void* p);
int render__8TObjRainFv(void* p);
int fn_801977D4(void*);
int fn_80197904(void*);

int render__8TObjRainFv(void* p) { return fn_801977D4(p); }
int run_task__8TObjRainFv(void* p) { return fn_80197904(p); }

}
#endif
#endif
