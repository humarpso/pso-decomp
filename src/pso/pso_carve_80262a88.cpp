#include "types.h"

extern "C" {

int fn_80246258(void*);
int fn_8024664C(void*);
int fn_80257C28(void*, void*);
void fn_80262A88(void* p);

void fn_80262A88(void* p) { fn_8024664C(p); fn_80246258(p); fn_80257C28(p, (char*)p + 0x24); }

}
