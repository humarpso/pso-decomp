#include "types.h"

extern "C" {

int fn_80227A2C(void* p);
int fn_80227A4C(void* p);
int fn_80227A70(void* p);
int fn_8022804C(void*);
int xfree__FPv(void*);
int xmalloc__FUl(void*);

int fn_80227A2C(void* p) { return xfree__FPv(p); }
int fn_80227A4C(void* p) { return xmalloc__FUl(p); }
int fn_80227A6C(void) { return 0; }
int fn_80227A70(void* p) { return fn_8022804C(p); }
int fn_80227A90(void) { return 0; }

}
