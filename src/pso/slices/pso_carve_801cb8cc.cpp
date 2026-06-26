#include "types.h"

extern "C" {

int fn_8001053C(void*);
int obj_setFlags30(void*, void*);
void fn_801CB8CC(void* p);

void fn_801CB8CC(void* p) { fn_8001053C(p); obj_setFlags30(p, (void*)1048576); }

}
