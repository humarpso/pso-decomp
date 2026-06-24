#include "types.h"

extern "C" {

void fn_8032E708(void* p, s32 v);
void fn_8032E710(void* p, s16 v);
void fn_8032E740(void* p, s32 v);

void fn_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void fn_8032E710(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
int fn_8032E718(void) { return 0; }
void fn_8032E740(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }
int fn_8032E748(void) { return 0; }
int fn_8032E770(void) { return 0; }

}
