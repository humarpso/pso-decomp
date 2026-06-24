#include "types.h"

extern "C" {

int fn_80143CC8(void* p);
int fn_8037BC54(void*);

int fn_80143CA4(void) { return 0; }
int fn_80143CC8(void* p) { return fn_8037BC54(p); }

}
