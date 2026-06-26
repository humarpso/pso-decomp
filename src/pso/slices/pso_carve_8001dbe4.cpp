#include "types.h"

extern "C" {

int fn_8001DBE4(void* p);
int fn_8001DC04(void* p);
int fn_8001DBD8(void*);

int fn_8001DBE4(void* p) { return fn_8001DBD8(p); }
int fn_8001DC04(void* p) { return fn_8001DBD8(p); }

}
