#include "types.h"

extern "C" {

void fn_80028B74(void* p);
void fn_80028B80(void* p);
void fn_80028B8C(void* p);

int fn_80028B54(void) { return 0; }
void fn_80028B74(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void fn_80028B80(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void fn_80028B8C(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

}
