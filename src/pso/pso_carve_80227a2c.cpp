#include "types.h"

extern "C" {

int fn_80227A2C(void* p);
int fn_80227A4C(void* p);
void fn_80227A6C(void);
int fn_80227A70(void* p);
void fn_80227A90(void);
int fn_8022804C(void*);
int xfree__FPv(void*);
int xmalloc__FUl(void*);

int fn_80227A2C(void* p) { return xfree__FPv(p); }
int fn_80227A4C(void* p) { return xmalloc__FUl(p); }
void fn_80227A6C(void) {  }
int fn_80227A70(void* p) { return fn_8022804C(p); }
void fn_80227A90(void) {  }

}
