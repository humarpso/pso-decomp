#include "types.h"

extern "C" {

void fn_8002D358(void* p);

int fn_8002D324(void) { return 0; }
void fn_8002D358(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
