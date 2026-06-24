#include "types.h"

extern "C" {

void fn_80203210(void* p);

int fn_802030C8(void) { return 0; }
int fn_8020310C(void) { return 0; }
int fn_80203158(void) { return 0; }
int fn_80203190(void) { return 0; }
int fn_802031E0(void) { return 0; }
void fn_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }
int fn_80203220(void) { return 0; }
int fn_8020325C(void) { return 0; }

}
