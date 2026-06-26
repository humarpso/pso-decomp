#include "types.h"

extern "C" {

int fn_8002F588(void*);
int fn_800CB69C(void*);
void fn_800CB72C(void* p);

void fn_800CB72C(void* p) { fn_8002F588((char*)p + 0x468); fn_800CB69C(p); }

}
