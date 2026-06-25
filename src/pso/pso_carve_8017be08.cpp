#include "types.h"

extern "C" {

int fn_8020C5E0(void*);
int queue_destruction__7TObjectFv(void*);
int fn_8017BE3C(void* p);
int fn_801B4A18(void*, int);

void fn_8017BE08(void* p) { fn_8020C5E0(p); queue_destruction__7TObjectFv(p); }
int fn_8017BE3C(void* p) { return fn_801B4A18(p, -1); }
int fn_8017BE60(void) { return 0; }

}
