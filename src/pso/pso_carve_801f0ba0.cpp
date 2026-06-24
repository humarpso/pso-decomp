#include "types.h"

extern "C" {

int fn_801F0BA0(void* p);
int fn_801F0BC0(void* p);
int fn_8034E420(void*);
int fn_8034E430(void*);

int fn_801F0BA0(void* p) { return fn_8034E420(p); }
int fn_801F0BC0(void* p) { return fn_8034E430(p); }

}
