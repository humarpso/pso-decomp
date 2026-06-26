#include "types.h"

extern "C" {

int fn_802B8E1C(void*);
void fn_802B27D4(void* p);

void fn_802B27D4(void* p) { if (*(int*)((char*)p + 0x410) == 0) { fn_802B8E1C(p); } }

}
