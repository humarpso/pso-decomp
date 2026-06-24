#include "types.h"

extern "C" {

void fn_802B1004(void* p);
int fn_802B1018(void);

int fn_802B0FC8(void) { return 0; }
void fn_802B1004(void* p) { *(s32*)((char*)p + 0x20) = 0; *(s32*)((char*)p + 0x1c) = 2; }
int fn_802B1018(void) { return 0; }

}
