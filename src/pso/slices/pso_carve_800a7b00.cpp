#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);

struct A7B00Base { char pad[0x14]; };
struct A7B00Obj : A7B00Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

void TObjPlayer__sub_800A7B00(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x390) = 1;
    if (((A7B00Obj*)(arg0 + 0x3A8))->m4() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
