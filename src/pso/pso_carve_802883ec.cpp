#include "types.h"

extern "C" {

int fn_80263C24(void*);
int fn_80264124(void*);
void fn_802883EC(void* p);

void fn_802883EC(void* p) { if (fn_80263C24(p) != 0) { fn_80264124(p); } }

}
