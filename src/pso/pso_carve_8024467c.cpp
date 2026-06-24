#include "types.h"

extern "C" {

int fn_8024664C(void*);
int fn_80257C28(void*, void*);
void fn_8024467C(void* p);

void fn_8024467C(void* p) { fn_8024664C(p); fn_80257C28(p, (char*)p + 0x24); }

}
