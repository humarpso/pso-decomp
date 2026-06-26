#include "types.h"

extern "C" {

int fn_8007EB94(void* p);
int fn_8007EBDC(void* p);
int fn_8007EBFC(void* p);
int fn_803DE864(void*);
int xmalloc__FUl(void*);

int fn_8007EB94(void* p) { return xmalloc__FUl(p); }
int fn_8007EBB4(void) { return 0; }
int fn_8007EBDC(void* p) { return fn_803DE864(p); }
int fn_8007EBFC(void* p) { return xmalloc__FUl(p); }

}
