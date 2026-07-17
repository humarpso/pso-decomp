#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_8019D6F8 { char pad[0x18]; };
struct VObj_8019D6F8 : Base_8019D6F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1);
M2C_UNK TObjWarpBase__vt0(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);

extern M2C_UNK __vt__11TObjMapWarp[];

void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_8019D6F8 *o = (struct VObj_8019D6F8 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMapWarp;
        o->m12();
        TObjWarpBase__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
