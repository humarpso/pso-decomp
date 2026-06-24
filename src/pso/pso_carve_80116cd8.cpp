#include "types.h"

extern "C" {

int fn_80116CD8(void* p);
int fn_801160E0(void*);

int fn_80116CD8(void* p) { return fn_801160E0(*(void**)((char*)p + 0xf0)); }

}
