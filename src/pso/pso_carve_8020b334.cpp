#include "types.h"

extern "C" {

int fn_8020B334(void* p);
int fn_8020B354(void* p);
int fn_8020E3F0(void*);
int fn_8020E3F8(void*);

int fn_8020B334(void* p) { return fn_8020E3F0(p); }
int fn_8020B354(void* p) { return fn_8020E3F8(p); }

}
