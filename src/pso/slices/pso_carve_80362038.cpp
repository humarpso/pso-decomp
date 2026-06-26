#include "types.h"

extern "C" {

int fn_800BBA18(void*, void*);
void fn_80362080(void* p);
void fn_80362038(void);
void fn_803620B0(void);

void fn_80362038(void) {  }
int fn_8036203C(void) { return 0; }
void fn_80362080(void* p) { if (*(short*)((char*)p + 0x326) != 9) { fn_800BBA18(p, (void*)9); } }
void fn_803620B0(void) {  }

}
