#include "types.h"

extern "C" {

void fn_802BA20C(void* p, void* q);
int fn_802BA394(void* p);
int fn_802AAFCC(void*);

int fn_802BA158(void) { return 0; }
int fn_802BA180(void) { return 0; }
void fn_802BA20C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
int fn_802BA220(void) { return 0; }
int fn_802BA31C(void) { return 0; }
int fn_802BA394(void* p) { return fn_802AAFCC(p); }

}
