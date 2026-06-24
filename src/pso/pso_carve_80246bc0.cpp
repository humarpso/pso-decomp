#include "types.h"

extern "C" {

int fn_8024664C(void*);
int fn_80246980(void*);
int fn_80257C28(void*, void*);
void fn_80246BC0(void* p);

void fn_80246BC0(void* p) { fn_80246980(p); fn_8024664C(p); fn_80257C28(p, (char*)p + 0x24); }

}
