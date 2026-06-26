#include "types.h"

extern "C" {

int fn_80080750(void*);
int fn_802F42A0(void*);
void fn_802F4324(void* p);
int fn_802F4360(void* p);
int fn_800BB858(void*);

void fn_802F4324(void* p) { if (fn_80080750(p) == 0) { fn_802F42A0(p); } }
int fn_802F4360(void* p) { return fn_800BB858(p); }

}
