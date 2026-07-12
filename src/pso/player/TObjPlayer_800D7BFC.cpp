#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800D7BFC { char pad[0x14]; };
struct VObj_800D7BFC : Base_800D7BFC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

extern "C" {

void TObjPlayer__sub_800D7BFC(void *arg0);

void TObjPlayer__sub_800D7BFC(void *arg0) {
    struct VObj_800D7BFC *o = (struct VObj_800D7BFC *)arg0;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    o->m2();
}

}
