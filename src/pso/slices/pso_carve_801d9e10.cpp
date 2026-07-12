#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void fn_801D9E10(void* p, s16 v);
void fn_801D9E40(void* p, f32 v);
void fn_801D9E48(void* p, f32 v);

void fn_801D9E10(void* p, s16 v) { *(s16*)((char*)p + 0x8) = v; }
int fn_801D9E18(void) { return 0; }
int fn_801D9E2C(void) { return 0; }
void fn_801D9E40(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
void fn_801D9E48(void* p, f32 v) { *(f32*)((char*)p + 0x18) = v; }

}
