#include "types.h"

extern "C" {

s32 GXSetTexCoordGen2(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0, s32 a5 = 0);
f32 fn_80084800(void);
f64 fn_803A20A4();
void fn_800847FC(void);
int fn_80084854(void* p);

void fn_800847D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2(arg0, arg1, arg2, arg3, 0, 0x7D);
}
void fn_800847FC(void) {  }
f32 fn_80084800(void) {
    return (f32) fn_803A20A4();
}
int fn_80084824(void) { return 0; }
int fn_80084834(void) { return 0; }
int fn_80084840(void) { return 0; }
int fn_80084854(void* p) { return *(u32*)((char*)p + 0xcfc) == 0; }

}
