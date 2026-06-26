#include "types.h"

extern "C" {

void fn_80125C70(void* p);

int fn_80125B80(void) { return 0; }
int fn_80125BE4(void) { return 0; }
void fn_80125C70(void* p) { *(s32*)((char*)p + 0x1f8) = -1; }
int fn_80125C7C(void) { return 0; }

}
