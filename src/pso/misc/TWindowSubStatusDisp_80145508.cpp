#include "types.h"

extern "C" {

int TWindowSubStatusDisp__sub_80145508(void* p);
void TWindowSubStatusDisp__sub_80145528(void* p);
int TWindowSubStatusDisp__sub_801454E0(void*);
int TWindowSubStatusDisp__sub_803DF160(void*, void*);
int fn_803DEE6C(void*);
int fn_803DEEAC(void*);

int TWindowSubStatusDisp__sub_80145508(void* p) { return fn_803DEEAC(p); }
void TWindowSubStatusDisp__sub_80145528(void* p) { fn_803DEE6C((void*)1); TWindowSubStatusDisp__sub_801454E0(p); TWindowSubStatusDisp__sub_803DF160((void*)0, (void*)-1); }

}
