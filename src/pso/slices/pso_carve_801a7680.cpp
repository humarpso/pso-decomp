#include "types.h"

extern "C" {

void fn_801A771C(void* p);
int fn_80147A80(void*);

int fn_801A7680(void) { return 0; }
void fn_801A771C(void* p) { void* m = *(void**)((char*)p + 0x148); if (m) fn_80147A80(m); }

}
