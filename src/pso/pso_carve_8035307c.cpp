#include "types.h"

extern "C" {

int fn_8035307C(void* p);
int fn_803530A0(void* p);
int fn_80353018(void*, int);

int fn_8035307C(void* p) { return fn_80353018(p, 18); }
int fn_803530A0(void* p) { return fn_80353018(p, 17); }

}
