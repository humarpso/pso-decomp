#include "types.h"

extern "C" {

int fn_80158298(void*);
void fn_802A6818(void* p);

void fn_802A6818(void* p) { if (*(unsigned int*)((char*)p + 0xbc) != 0) { fn_80158298(p); } }

}
