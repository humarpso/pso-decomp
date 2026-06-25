#include "types.h"

extern "C" {

int fn_802B865C(void*, void*);
void fn_802B8980(void* p);

void fn_802B8980(void* p) { if (*(int*)((char*)p + 0x374) != 40) { fn_802B865C(p, (void*)40); } }

}
