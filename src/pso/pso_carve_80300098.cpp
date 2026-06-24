#include "types.h"

extern "C" {

void fn_80300098(void* p, s32 v);
void fn_803000A0(void);
int fn_8013A4A0(int);
int fn_802930A8(void);

void fn_80300098(void* p, s32 v) { *(s32*)((char*)p + 0xa4) = v; }
void fn_803000A0(void) { fn_802930A8(); fn_8013A4A0(0); }

}
