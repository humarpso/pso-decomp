#include "types.h"

extern "C" {

int fn_801454E0(void*);
int fn_803DEE6C(void*);
int fn_803DF160(void*, void*);
int fn_80145508(void* p);
int fn_803DEEAC(void*);

int fn_80145508(void* p) { return fn_803DEEAC(p); }
void fn_80145528(void* p) { fn_803DEE6C((void*)1); fn_801454E0(p); fn_803DF160((void*)0, (void*)-1); }

}
