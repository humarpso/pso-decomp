#include "types.h"

extern "C" {

int fn_801EF748(void* p);
int fn_801EF768(void* p);
int fn_801EF788(void* p);
int fn_8019608C(void*);
int fn_8034DF2C(void*);
int fn_8034DF74(void*);

int fn_801EF748(void* p) { return fn_8034DF2C(p); }
int fn_801EF768(void* p) { return fn_8034DF74(p); }
int fn_801EF788(void* p) { return fn_8019608C(p); }

}
