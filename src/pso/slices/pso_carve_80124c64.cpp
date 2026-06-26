#include "types.h"

extern "C" {

s32 fn_80124C88(void* p);

int fn_80124C64(void) { return 0; }
int fn_80124C78(void) { return 0; }
s32 fn_80124C88(void* p) { return *(s32*)((char*)p + 0x18); }

}
