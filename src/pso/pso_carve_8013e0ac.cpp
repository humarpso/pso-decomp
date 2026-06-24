#include "types.h"

extern "C" {

void fn_8013E0AC(void* p, s32 a1);
void fn_8013E0D0(void* p, s32 v);

void fn_8013E0AC(void* p, s32 a1) { fn_8013E0D0((char*)p + 0x3c, a1); }
void fn_8013E0D0(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }

}
