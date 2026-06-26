#include "types.h"

extern "C" {

int fn_8036E624(void*);
int fn_8036E858(void*, void*);
void fn_8036E9AC(void* p);

void fn_8036E9AC(void* p) { if (fn_8036E624(p) == 0) { fn_8036E858(p, (void*)1); } }

}
