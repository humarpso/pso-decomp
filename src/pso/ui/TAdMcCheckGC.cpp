#include "types.h"

extern "C" {

void TAdMcCheckGC__vt2(void);
void fn_8033EE10(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8033EE38(void* p);

s32 GXSetTexCoordGen2(s32, s32, s32, s32, s32, s32);

void fn_8033EE10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2(arg0, arg1, arg2, arg3, 0, 0x7D);
}
void fn_8033EE38(void* p) { *(s32*)((char*)p + 0x18) = 0; *(s32*)((char*)p + 0x1c) = 0; }
void TAdMcCheckGC__vt2(void) {  }

}
