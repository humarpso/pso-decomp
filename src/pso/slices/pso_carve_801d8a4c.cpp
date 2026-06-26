#include "types.h"

extern "C" {

int fn_801BFF80(void*);
int fn_801D8A38(void*);
int fn_801D8A90(void*);
void* fn_801D8A4C(void* p);

void* fn_801D8A4C(void* p) { fn_801D8A90((char*)p + 0x50); fn_801BFF80((char*)p + 0xac); fn_801D8A38((char*)p + 0xc0); return p; }

}
