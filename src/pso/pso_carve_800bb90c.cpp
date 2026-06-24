#include "types.h"

extern "C" {

void fn_800BBA04(void* p, s32 v);

int fn_800BB90C(void) { return 0; }
int fn_800BB940(void) { return 0; }
int fn_800BB980(void) { return 0; }
int fn_800BB9AC(void) { return 0; }
void fn_800BBA04(void* p, s32 v) { *(s32*)((char*)p + 0x378) = v; }
int fn_800BBA0C(void) { return 0; }

}
