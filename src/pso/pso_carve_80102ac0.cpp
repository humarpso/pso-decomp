#include "types.h"

extern "C" {

int fn_80102AC0(void* p);
int fn_8010542C(void*);

int fn_80102AC0(void* p) { return fn_8010542C(p); }

}
