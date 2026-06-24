#include "types.h"

extern "C" {

void fn_8035B5BC(void* p, s32 v);
void fn_8035B5C4(void* p, s32 v);

void fn_8035B5BC(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void fn_8035B5C4(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
