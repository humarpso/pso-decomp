#include "types.h"

extern "C" {

void TAdDrawLineTask__vt2(void* p);

int fn_80141F1C(void*);
int fn_803E26A4(void*, void*, void*);

void TAdDrawLineTask__vt2(void* p) { fn_80141F1C(p); fn_803E26A4((char*)p + 0x64, (void*)4, (void*)1); }

}
