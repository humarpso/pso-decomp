#include "types.h"

extern "C" {

int fn_801C4F80(void*);
int fn_801D6C4C(void*);
void fn_801D6BF8(void* p);

void fn_801D6BF8(void* p) { fn_801D6C4C(p); fn_801C4F80((char*)p + 0x8); fn_801C4F80((char*)p + 0x18); fn_801C4F80((char*)p + 0x28); fn_801C4F80((char*)p + 0x38); fn_801C4F80((char*)p + 0x48); }

}
