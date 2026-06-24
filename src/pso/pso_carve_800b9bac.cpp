#include "types.h"

extern "C" {

int fn_800B9BAC(void* p);
int fn_800B9BCC(void* p);
int fn_801BA42C(void*);
int fn_801BA494(void*);

int fn_800B9BAC(void* p) { return fn_801BA42C(p); }
int fn_800B9BCC(void* p) { return fn_801BA494(p); }

}
