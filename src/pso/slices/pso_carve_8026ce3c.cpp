#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TWindowSubStatusDisp__sub_80223B88(void * a0 = 0, s32 a1 = 0);
f32 fn_8026CE3C(void* p);

f32 fn_8026CE3C(void* p) { return *(f32*)((char*)p + 0x1c); }
void fn_8026CE44(void *arg0, s32 arg1) {
    M2C_FIELD(TWindowSubStatusDisp__sub_80223B88(arg0, 1), s32 *, 0x20) = arg1;
}

}
