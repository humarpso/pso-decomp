#include "types.h"

extern "C" {

void fn_8002D324(void* p);
void fn_8002D358(void* p);

void fn_8002D324(void* p) { fn_8002D358(p); *(int*)((char*)p + 0x3c) = 1; }
void fn_8002D358(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
