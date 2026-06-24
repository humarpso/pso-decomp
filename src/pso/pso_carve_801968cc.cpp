#include "types.h"

extern "C" {

int fn_80197094(void*);
int fn_801F5BD4(void*);
void fn_801968CC(void* p);

void fn_801968CC(void* p) { fn_80197094(p); fn_801F5BD4(*(void**)((char*)p + 0xb0)); }

}
