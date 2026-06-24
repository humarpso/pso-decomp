#include "types.h"

extern "C" {

int fn_80134DA8(void* p);
int fn_80134DC8(void* p);
int fn_80134DE8(void* p);
int fn_800779A0(void*);
int fn_80077AE8(void*);
int fn_8034C18C(void*);

int fn_80134DA8(void* p) { return fn_8034C18C(p); }
int fn_80134DC8(void* p) { return fn_800779A0(p); }
int fn_80134DE8(void* p) { return fn_80077AE8(p); }

}
