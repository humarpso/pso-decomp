#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_800B97B4 { char pad[0x18]; };
struct VObj_800B97B4 : Base_800B97B4 {
#define V8(b) virtual void b##0(); virtual void b##1(); virtual void b##2(); virtual void b##3(); virtual void b##4(); virtual void b##5(); virtual void b##6(); virtual void b##7();
    V8(a) V8(b) V8(c) V8(d) V8(e) V8(f) V8(g) V8(h) V8(i) V8(j) V8(k) V8(l)
    virtual void p96();
    virtual s32 m97();
};

extern "C" {

M2C_UNK TObjEneEpsilon__sub_800B9848(void *, u16);
u16 fn_800BB364(void *, f32);
u16 fn_800BB664(void *, f32);

void TObjEneEpsilon__sub_800B97B4(void *arg0, f32 farg0) {
    u16 temp_r3;
    u16 var_r4;

    if (((VObj_800B97B4 *)arg0)->m97() != 0) {
        temp_r3 = fn_800BB364(arg0, farg0);
        var_r4 = temp_r3;
        if (temp_r3 == 0xFFFF) {
            var_r4 = fn_800BB664(arg0, farg0);
        }
    } else {
        var_r4 = fn_800BB664(arg0, farg0);
    }
    TObjEneEpsilon__sub_800B9848(arg0, var_r4);
}

}
