#include "types.h"

extern "C" {

int fn_801BFE88(void*);
void* fn_801BFE50(void* p);

void* fn_801BFE50(void* p) { fn_801BFE88(p); fn_801BFE88((char*)p + 0xc); return p; }

}
