#include "types.h"

extern "C" {

int fn_80263C24(void*);
int fn_802644D4(void*);
void fn_80288940(void* p);

void fn_80288940(void* p) { if (fn_80263C24(p) != 0) { fn_802644D4(p); } }

}
