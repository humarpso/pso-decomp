#include "types.h"

extern "C" {

int fn_80321F18(void* p);
int fn_80321F3C(void* p);
int fn_80321B28(void*, int);

int fn_80321F18(void* p) { return fn_80321B28(p, 1); }
int fn_80321F3C(void* p) { return fn_80321B28(p, 0); }

}
