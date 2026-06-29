#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneEpsilon__sub_800B96A4();
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

int TObjEneRecon__sub_8031DE88(void) { return 0; }
void TObjEneRecon__sub_8031DEF0(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x398) + M2C_FIELD(arg0, f32 *, 0x464));
}
void TObjEneRecon__sub_8031DF2C(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x460);
}
void TObjEneRecon__vt59(void) {  }
void TObjEneRecon__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { TObjEneDD__sub_800BBA18(p, (void*)6); } }
int TObjEneRecon__vt61(void) { return 0; }
void TObjEneRecon__vt26(void) {  }

}
