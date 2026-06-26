#include "types.h"

extern "C" {

int fn_80266CF8(void*);
int fn_80266D78(void*);
int fn_80266DB0(void*);
int fn_80279178(void*);
void fn_80279044(void* p);

void fn_80279044(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }
void TWindowSubEquip__sub_80279054(void* p) { fn_80266D78(p); fn_80266DB0(p); fn_80279178(p); fn_80266CF8(p); }
int fn_80279098(void) { return 0; }

}
