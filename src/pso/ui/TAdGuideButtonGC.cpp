#include "types.h"

extern "C" {

void render__16TAdGuideButtonGCFv(void* p);

int get_state_flag__9TMainTaskFv(void*);
int TAdWarningBaseGC__sub_8032D514(void*, void*, void*);
int render__16TAdWarningBaseGCFi(void*, void*);

void render__16TAdGuideButtonGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { render__16TAdWarningBaseGCFi(p, (void*)0); TAdWarningBaseGC__sub_8032D514(p, (void*)0, *(void**)((char*)p + 0x1a0)); } }

}
