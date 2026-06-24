#include "types.h"

extern "C" {

void fn_803081F8(void);
void fn_803081FC(void);
void fn_80308200(void* p, s32 v);

void fn_803081F8(void) {  }
void fn_803081FC(void) {  }
void fn_80308200(void* p, s32 v) { *(s32*)((char*)p + 0x2c) = v; }
int fn_80308208(void) { return 0; }
int fn_80308244(void) { return 0; }

}
