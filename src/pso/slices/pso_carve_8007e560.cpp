#include "types.h"

extern "C" {

int fn_8007E7D8(void*, void*);
int fn_803D8910(void*, void*);
void fn_8007E560(void* p, void* a1);

void fn_8007E560(void* p, void* a1) { fn_8007E7D8(p, (char*)p + 0x8); fn_803D8910(p, a1); }

}
