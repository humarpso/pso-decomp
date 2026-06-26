#include "types.h"

extern "C" {

int fn_80147AA8(void* p);
int xmalloc__FUl(void*);

int fn_80147A80(void) { return 0; }
int fn_80147AA8(void* p) { return xmalloc__FUl(p); }

}
