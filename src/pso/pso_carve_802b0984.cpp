#include "types.h"

extern "C" {

void fn_802B0A34(void* p);

int fn_802B0984(void) { return 0; }
int fn_802B09F4(void) { return 0; }
void fn_802B0A34(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3cc) = 0; }

}
