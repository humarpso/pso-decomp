#include "types.h"

extern "C" {

int fn_80170CD4(void* p);
int fn_80170D9C(void*);

int fn_80170CD4(void* p) { return fn_80170D9C(p); }

}
