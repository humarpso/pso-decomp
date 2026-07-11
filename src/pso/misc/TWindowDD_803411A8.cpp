#include "types.h"

extern "C" {

void init_window__9TWindowDDFPv(void* p);
int fn_80246258(void*);
int fn_8024664C(void*);
int fn_80257C28(void*, void*);

void init_window__9TWindowDDFPv(void* p) { fn_8024664C(p); fn_80246258(p); fn_80257C28(p, (char*)p + 0x24); }

}
