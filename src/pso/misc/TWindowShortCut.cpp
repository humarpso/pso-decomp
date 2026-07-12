#include "types.h"

extern "C" {

void run_task__15TWindowShortCutFv(void* p);
int TWindowSubComCard__sub_80246258(void*);
int fn_8024664C(void*);
int fn_80257C28(void*, void*);
int fn_80288050(void*);

void run_task__15TWindowShortCutFv(void* p) { fn_80288050(*(void**)((char*)p + 0x60)); fn_8024664C(p); TWindowSubComCard__sub_80246258(p); fn_80257C28(p, (char*)p + 0x24); }

}
