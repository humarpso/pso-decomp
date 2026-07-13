#include "types.h"

extern "C" {

int fn_8028C998(void*);
int TAdSinglePlyChrSelectGC__sub_8028CB6C(void*);
void fn_8028D044(void* p);

void fn_8028D044(void* p) { if (fn_8028C998(p) != 0) { TAdSinglePlyChrSelectGC__sub_8028CB6C(p); *(int*)((char*)p + 0x60) = 2; } }

}
