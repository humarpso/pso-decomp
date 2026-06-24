#include "types.h"

extern "C" {

int fn_8020AB30(void* p);
int fn_8020C458(void*);

int fn_8020AB30(void* p) { return fn_8020C458(p); }

}
