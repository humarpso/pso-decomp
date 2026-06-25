#include "types.h"

extern "C" {

int fn_8019D964(void*);
int fn_8024A054(void);
void fn_8018612C(void* p);

void fn_8018612C(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { fn_8019D964(p); fn_8024A054(); } }

}
