#include "types.h"

extern "C" {

void fn_80028458(void* p);
void fn_8002846C(void* p);
void fn_800284A0(void* p);

void fn_80028458(void* p) { *(f32*)((char*)p + 0x690) = *(f32*)((char*)p + 0x394); *(f32*)((char*)p + 0x694) = *(f32*)((char*)p + 0x39c); }
void fn_8002846C(void* p) { *(f32*)((char*)p + 0x38) = *(f32*)((char*)p + 0x698); *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x69c); }
int fn_80028480(void) { return 0; }
void fn_800284A0(void* p) { *(f32*)((char*)p + 0x394) = *(f32*)((char*)p + 0x698); *(f32*)((char*)p + 0x39c) = *(f32*)((char*)p + 0x69c); }

}
