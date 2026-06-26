#include "types.h"

extern "C" {

s32 fn_8030C050(void* p);
void fn_8030C058(void);

s32 fn_8030C050(void* p) { return *(s32*)((char*)p + 0x20); }
void fn_8030C058(void) {  }

}
