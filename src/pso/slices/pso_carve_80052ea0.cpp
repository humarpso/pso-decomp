#include "types.h"

extern "C" {

void fn_80052EA0(void* p, void* q);
void fn_80052EE8(void);
void fn_80052EEC(void* p);

void fn_80052EA0(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
int fn_80052EB4(void) { return 0; }
void fn_80052EE8(void) {  }
void fn_80052EEC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
