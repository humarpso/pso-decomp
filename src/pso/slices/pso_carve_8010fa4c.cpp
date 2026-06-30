#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8010FB74();
M2C_UNK fn_8010FC28();

struct Base_8010FA4C { char pad[0x14]; };
struct VObj_8010FA4C : Base_8010FA4C {
    virtual void m0();
    virtual void m1();
};

void fn_8010FA4C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    switch (temp_r0) {
    case 1:
        fn_8010FC28();
        return;
    case 2:
        fn_8010FB74();
        return;
    case 4:
        ((VObj_8010FA4C *)arg0)->m1();
    case 3:
        return;
    }
}

}
