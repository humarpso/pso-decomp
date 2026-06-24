#include "types.h"

extern "C" {

void fn_8026DE28(void* p, s32 v);

int fn_8026DDE0(void) { return 0; }
void fn_8026DE28(void* p, s32 v) { *(s32*)((char*)p + 0x88) = v; }
int fn_8026DE30(void) { return 0; }

}
