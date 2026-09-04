#include "pso/TAdChrSelMovePlateGC.h"

TAdChrSelMovePlateGC::~TAdChrSelMovePlateGC() {}

#include "types.h"

extern "C" {

void render__20TAdChrSelMovePlateGCFv(void* p);
int fn_80325660(void*);
int get_state_flag__9TMainTaskFv(void*);

void render__20TAdChrSelMovePlateGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { fn_80325660(p); } }

}
