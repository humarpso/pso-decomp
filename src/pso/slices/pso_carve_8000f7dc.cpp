#include "types.h"

extern "C" {

int fn_8000F7DC(void* p);
int fn_800FAD08(void*);

int fn_8000F7DC(void* p) { return fn_800FAD08(p); }

}
