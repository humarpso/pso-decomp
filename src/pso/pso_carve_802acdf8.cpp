#include "types.h"

extern "C" {

int fn_80246258(void*);
int fn_8024664C(void*);
void fn_802ACDF8(void* p);

void fn_802ACDF8(void* p) { fn_8024664C(p); fn_80246258(p); }

}
