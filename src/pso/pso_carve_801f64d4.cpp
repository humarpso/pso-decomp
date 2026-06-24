#include "types.h"

extern "C" {

int fn_801F64D4(void* p);
void fn_801F6520(void* p);
int queue_destruction__7TObjectFv(void*);

int fn_801F64D4(void* p) { return queue_destruction__7TObjectFv(p); }
int fn_801F64F4(void) { return 0; }
void fn_801F6520(void* p) { *(u16*)((char*)p + 0x60) &= 0xfffe; }

}
