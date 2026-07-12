#include "types.h"

extern "C" {

void render__16TAdGuideButtonGCFv(void* p);

int TMainTask__sub_8001A430(void*);
int TAdWarningBaseGC__sub_8032D514(void*, void*, void*);
int TAdWarningBaseGC__sub_8032D550(void*, void*);

void render__16TAdGuideButtonGCFv(void* p) { if (TMainTask__sub_8001A430(p) != 1) { TAdWarningBaseGC__sub_8032D550(p, (void*)0); TAdWarningBaseGC__sub_8032D514(p, (void*)0, *(void**)((char*)p + 0x1a0)); } }

}
