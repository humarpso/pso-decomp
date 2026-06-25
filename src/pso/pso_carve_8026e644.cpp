#include "types.h"

extern "C" {

int fn_80246258(void*);
int fn_8024664C(void*);
int fn_80257C28(void*, void*);
int fn_80288050(void*);
void TWindowShortCut__vt1(void* p);

void TWindowShortCut__vt1(void* p) { fn_80288050(*(void**)((char*)p + 0x60)); fn_8024664C(p); fn_80246258(p); fn_80257C28(p, (char*)p + 0x24); }

}
