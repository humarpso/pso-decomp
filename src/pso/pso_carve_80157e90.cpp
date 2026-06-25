#include "types.h"

extern "C" {

int fn_80157D28(void*);
int fn_80158298(void*);
void fn_80157E90(void* p);

void fn_80157E90(void* p) { fn_80158298(p); fn_80157D28(p); *(int*)((char*)p + 0xac) = 2; }

}
