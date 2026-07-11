#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8017E158 { char pad[0x18]; };
struct VObj_8017E158 : Base_8017E158 {
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
};

struct Base_8017E184 { char pad[0x18]; };
struct VObj_8017E184 : Base_8017E184 {
    virtual void g0();
    virtual void m0();  virtual void m1();  virtual void m2();
    virtual void m3();  virtual void m4();  virtual void m5();
    virtual void m6();
    virtual s32 m7(f32, f32);
    virtual void m8();  virtual void m9();  virtual void m10();
    virtual void m11();
    virtual void m12();
};

extern "C" {

void TObjContainerIdo__sub_8017E158(void *arg0) {
    struct VObj_8017E158 *o = (struct VObj_8017E158 *)arg0;
    o->m12();
}

void check_and_trigger__16TObjContainerIdoFPv(void *arg0) {
    struct VObj_8017E184 *o = (struct VObj_8017E184 *)arg0;
    if (o->m7(M2C_FIELD(arg0, f32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xB0)) != 0) {
        o->m12();
    }
}

}
