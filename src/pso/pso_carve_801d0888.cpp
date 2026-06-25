#include "types.h"

extern "C" {

int fn_801D08B0(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void fn_801D0888(void* p);
void fn_801D09F4(void);
void fn_801D09F8(void);

void fn_801D0888(void* p) { fn_801D08B0(p, (char*)p + 0x38, *(void**)((char*)p + 0x60)); }
int fn_801D08B0(void*, void*, void*) { return 0; }
int fn_801D094C(void) { return 0; }
void fn_801D09F4(void) {  }
void fn_801D09F8(void) {  }

}
