#include "types.h"

extern "C" {

void fn_801225F8(void* p, s16 v);

void fn_801225F8(void* p, s16 v) { *(s16*)((char*)p + 0x1cc) = v; }
int fn_80122600(void) { return 0; }
int fn_80122680(void) { return 0; }

}
