#include "types.h"

extern "C" {

int fn_80213410(void* p);
int fn_80213430(void*);

int fn_80213410(void* p) { return fn_80213430(p); }

}
