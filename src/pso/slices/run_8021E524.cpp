#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8021E524 { char pad[0x18]; };
struct VObj_8021E524 : Base_8021E524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

struct Base_8021E55C { char pad[0x18]; };
struct VObj_8021E55C : Base_8021E55C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void TShopGetItemWindow__vt5(void *arg0) {
    struct VObj_8021E524 *o = (struct VObj_8021E524 *)M2C_FIELD(arg0, void **, 0x5C);
    if (o != NULL) {
        o->m5();
    }
}

void TShopGetItemWindow__vt4(void *arg0) {
    struct VObj_8021E55C *o = (struct VObj_8021E55C *)M2C_FIELD(arg0, void **, 0x5C);
    if (o != NULL) {
        o->m4();
    }
}

}
