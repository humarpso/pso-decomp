#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_8016AB20(void *);

struct Base0 { char pad[0x18]; };
struct VObj0 : Base0 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); };

void fn_8016AB58(u8 *arg0) {
    ((VObj0*)arg0)->m5();
    fn_8016AB20(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x20) = 2;
}

}
