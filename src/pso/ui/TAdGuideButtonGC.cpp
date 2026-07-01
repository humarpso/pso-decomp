#include "types.h"

extern "C" {

void render__16TAdGuideButtonGCFv(void* p);

int fn_8001A430(void*);
int fn_8032D514(void*, void*, void*);
int fn_8032D550(void*, void*);

void render__16TAdGuideButtonGCFv(void* p) { if (fn_8001A430(p) != 1) { fn_8032D550(p, (void*)0); fn_8032D514(p, (void*)0, *(void**)((char*)p + 0x1a0)); } }

}
