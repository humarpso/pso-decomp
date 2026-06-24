#include "types.h"

extern "C" {

void fn_80149358(void* p, s32 v);
void fn_80149360(void* p, s32 v);
void fn_80149368(void* p);

int fn_8014931C(void) { return 0; }
int fn_80149320(void) { return 0; }
void fn_80149358(void* p, s32 v) { *(s32*)((char*)p + 0x3ac) = v; }
void fn_80149360(void* p, s32 v) { *(s32*)((char*)p + 0x3a8) = v; }
void fn_80149368(void* p) { *(s32*)((char*)p + 0x0) = 2; }
int fn_80149374(void) { return 0; }
int fn_801493A8(void) { return 0; }

}
