#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_isState2_324(void *);
extern const f32 lbl_805D9EB0;

struct Base { char pad[0x18]; };
struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18(void *, f32);
    virtual void m19();
    virtual void m20(s32, f32);
};

void fn_800BBE90(void *arg0, void *arg1, f32 *arg2) {
    ((VObj*)arg1)->m20(M2C_FIELD(arg0, s32 *, 0xAC), lbl_805D9EB0);
    if (obj_isState2_324(arg1) == 0) {
        ((VObj*)arg0)->m18(arg1, *arg2);
    }
}

}
