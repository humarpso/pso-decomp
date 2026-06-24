#include "types.h"

extern "C" {

int fn_8004F1FC(void*);
int fn_8004F2A8(void*);
void fn_8004F3A0(void* p);

void fn_8004F3A0(void* p) { fn_8004F2A8(p); fn_8004F1FC(p); }

}
