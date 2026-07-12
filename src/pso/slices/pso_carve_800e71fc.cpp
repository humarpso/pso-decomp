#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct E71FCBase { char pad[0x14]; };
struct E71FCObj : E71FCBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 TObjEneMe3Shinowa__sub_800E71FC(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 == 1) || (temp_r0 == 9) || (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        ((E71FCObj*)(arg0 + 0x3E8))->m6();
    }
    return 0;
}

}
