#include "types.h"

extern "C" {

int fn_80115BC0(void*, void*, void*);
void fn_8034F900(void* p);

void fn_8034F900(void* p) { fn_80115BC0((char*)p + 0x1f8, (void*)16384, (void*)0); fn_80115BC0((char*)p + 0x1fc, (void*)3640, (void*)0); }

}
