#include "types.h"

extern "C" {

int fn_8012012C(void* p);
int fn_8012106C(void*, int);

int fn_801200C0(void) { return 0; }
int fn_8012012C(void* p) { return fn_8012106C(p, 4); }

}
