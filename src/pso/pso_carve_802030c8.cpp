#include "types.h"

extern "C" {

int fn_8007AB54(void*);
void fn_80203210(void* p);

int fn_802030C8(void) { return 0; }
int fn_8020310C(void) { return 0; }
int fn_80203158(void) { return 0; }
int fn_80203190(void) { return 0; }
void* fn_802031E0(void* p) { fn_8007AB54(p); return p; }
void fn_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }
int fn_80203220(void) { return 0; }
int fn_8020325C(void) { return 0; }

}
