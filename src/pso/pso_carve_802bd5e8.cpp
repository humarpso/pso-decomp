#include "types.h"

extern "C" {

int fn_802BD014(void*, void*);
void fn_802BD5E8(void* p);

void fn_802BD5E8(void* p) { if (*(int*)((char*)p + 0x374) != 35) { fn_802BD014(p, (void*)35); } }

}
