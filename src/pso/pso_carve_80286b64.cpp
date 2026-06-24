#include "types.h"

extern "C" {

int fn_80286BD4(void* p);
int fn_80286B0C(void*);

int fn_80286B64(void) { return 0; }
int fn_80286BD4(void* p) { return fn_80286B0C(p); }
int fn_80286BF4(void) { return 0; }
int fn_80286C78(void) { return 0; }
int fn_80286CC4(void) { return 0; }

}
