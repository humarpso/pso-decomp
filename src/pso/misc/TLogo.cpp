#include "types.h"

extern "C" {

void render__5TLogoFv(void);
s32 fn_8013F264(void* p);
s32 fn_8013F288(void* p);

s32 fn_8013F264(void* p) { return fn_8013F288((char*)p + 0x98); }
s32 fn_8013F288(void* p) { return *(s32*)((char*)p + 0x0); }
void render__5TLogoFv(void) {  }

}
