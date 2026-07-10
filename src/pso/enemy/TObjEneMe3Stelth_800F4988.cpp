#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneMe3Stelth__sub_800F4988(u8 *arg0);
s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0);

struct E4988Base { char pad[0x14]; };
struct E4988Obj : E4988Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

s32 TObjEneMe3Stelth__sub_800F4988(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E4988Obj*)(arg0 + 0x404))->m7();
        return 1;
    }
    return 0;
}

struct E49D0Base { char pad[0x14]; };
struct E49D0Obj : E49D0Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E49D0Obj*)(arg0 + 0x404))->m6();
        return 1;
    }
    return 0;
}

}
