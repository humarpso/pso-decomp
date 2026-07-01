#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);

struct Base_801809F0 { char pad[0x18]; };
struct VObj_801809F0 : Base_801809F0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual int m6(); virtual void m7();
};

void TObjChip__sub_801809F0(void *arg0) {
    struct VObj_801809F0 *o = (struct VObj_801809F0 *)arg0;
    o->m7();
    if (o->m6() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
