#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800B96A4();
int fn_800BBA18(void*, void*);
void TObjEneBm3Fly__vt60(void* p);
void TObjEneBm3Fly__vt59(void);
void TObjEneBm3Fly__vt26(void);

void fn_800B1B5C(void *arg0) {
    fn_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x450));
}
void fn_800B1B98(void *arg0) {
    fn_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x44C));
}
void TObjEneBm3Fly__vt59(void) {  }
void TObjEneBm3Fly__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { fn_800BBA18(p, (void*)6); } }
int TObjEneBm3Fly__vt61(void) { return 0; }
void TObjEneBm3Fly__vt26(void) {  }

}
