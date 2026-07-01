#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" { extern const f32 lbl_805DF378; }

#define V8(n) virtual void v##n();
#define V64(n) V8(n##0) V8(n##1) V8(n##2) V8(n##3) V8(n##4) V8(n##5) V8(n##6) V8(n##7)

struct Base_8031A538 { char pad[0x18]; };
struct VObj_8031A538 : Base_8031A538 {
    V64(a) V64(b)
    V8(c0) V8(c1) V8(c2) V8(c3) V8(c4) V8(c5) V8(c6) V8(c7)
    V8(d0) V8(d1) V8(d2) V8(d3) V8(d4) V8(d5) V8(d6) V8(d7)
    V8(e0) V8(e1) V8(e2) V8(e3) V8(e4) V8(e5) V8(e6) V8(e7)
    V8(f0) V8(f1) V8(f2) V8(f3) V8(f4) V8(f5) V8(f6) V8(f7)
    V8(g0) V8(g1) V8(g2) V8(g3) V8(g4) V8(g5) V8(g6) V8(g7)
    V8(h0) V8(h1) V8(h2) V8(h3) V8(h4) V8(h5) V8(h6) V8(h7)
    V8(i0) V8(i1) V8(i2) V8(i3) V8(i4) V8(i5) V8(i6) V8(i7)
    V8(j0) V8(j1) V8(j2) V8(j3) V8(j4) V8(j5) V8(j6) V8(j7)
    V8(k0) V8(k1) V8(k2) V8(k3) V8(k4) V8(k5) V8(k6) V8(k7)
    V8(l0) V8(l1) V8(l2) V8(l3) V8(l4) V8(l5) V8(l6)
    virtual void m95();
    virtual void m96();
    f32 f3c_get();
};

extern "C" {

void fn_8031A538(void *arg0) {
    VObj_8031A538 *o = (VObj_8031A538 *)arg0;
    f32 thr = lbl_805DF378;
    if ((M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3C)) > thr) {
        o->m95();
        return;
    }
    o->m96();
}

}
