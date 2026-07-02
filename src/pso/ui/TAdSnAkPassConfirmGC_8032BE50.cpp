#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8032BE50 { char pad[0x18]; };
struct VObj_8032BE50 : Base_8032BE50 {
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
};

extern "C" {

void render__20TAdSnAkPassConfirmGCFv(void *arg0);

void render__20TAdSnAkPassConfirmGCFv(void *arg0) {
    struct VObj_8032BE50 *o = (struct VObj_8032BE50 *)arg0;
    o->m10();
}

}
