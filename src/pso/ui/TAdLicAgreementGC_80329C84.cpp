#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80329C84 { char pad[0x18]; };
struct VObj_80329C84 : Base_80329C84 {
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
};

extern "C" {

void *__dt__17TAdLicAgreementGCFv(void *arg0, s16 arg1);
void run_task__17TAdLicAgreementGCFv(void *arg0);
void __dl__7TObjectFPv(void *);
void __dt__18TAdAgreementBaseGCFv(void *, int);

void run_task__17TAdLicAgreementGCFv(void *arg0) {
    struct VObj_80329C84 *o = (struct VObj_80329C84 *)arg0;
    o->m9();
}

extern M2C_UNK __vt__17TAdLicAgreementGC[];

void *__dt__17TAdLicAgreementGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdLicAgreementGC;
        __dt__18TAdAgreementBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
