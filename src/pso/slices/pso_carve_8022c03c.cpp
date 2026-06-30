#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8022C03C { char pad[0x18]; };
struct VObj_8022C03C : Base_8022C03C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

extern "C" {

M2C_UNK fn_8022BF8C(void *);
M2C_UNK fn_8022C008();

void fn_8022C03C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
    switch (temp_r0) {
    case 0:
        fn_8022C008();
        fn_8022BF8C(arg0);
        return;
    case 1:
        ((VObj_8022C03C *)arg0)->m5();
        return;
    }
}

}
