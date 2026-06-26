#include "types.h"

extern "C" {

void fn_803112A4(void* p, s32 v);

int fn_80311294(void) { return 0; }
void fn_803112A4(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }
int fn_803112AC(void) { return 0; }
int fn_803112BC(void) { return 0; }

}
