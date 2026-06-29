#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Base_801BE544 { char pad[0x8]; };
struct VObj_801BE544 : Base_801BE544 {
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
    virtual int m14();
};

extern "C" {

short TObjPlayer__sub_801BE544(void *arg0) {
    struct VObj_801BE544 *o = (struct VObj_801BE544 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m14();
}

}
