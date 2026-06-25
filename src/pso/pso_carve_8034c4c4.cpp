#include "types.h"

extern "C" {

int fn_80338534(void);
int fn_80338608(void*);
void fn_8034C4C4(void* p);

void fn_8034C4C4(void* p) { if (*(int*)((char*)p + 0x1c) == 6) { fn_80338608((void*)1); fn_80338534(); } }

}
