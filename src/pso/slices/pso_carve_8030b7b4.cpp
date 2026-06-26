#include "types.h"

extern "C" {

void fn_8030B7B4(void);
void fn_8030B7B8(void);
void fn_8030B7BC(void* p);
int fn_8030B7E8(void);
int fn_80083058(void*);
int fn_802F3388(void*);

void fn_8030B7B4(void) {  }
void fn_8030B7B8(void) {  }
void fn_8030B7BC(void* p) { void* m = *(void**)((char*)p + 0x50); if (m) fn_80083058(m); }
int fn_8030B7E8(void) { return fn_802F3388((void*)(0)); }

}
