#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 TObjPlayer__sub_801BE934(s32);
s32 TObjPlayer__sub_801D921C(void *, s32);

s32 obj_getPtr2B0_1C(void *);

struct Base_801B6414 { char pad[0x18]; };
struct VObj_801B6414 : Base_801B6414 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(s32);
    virtual void m13();
    virtual s32 m14();
};

void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    struct VObj_801B6414 *obj = (struct VObj_801B6414 *) arg0;
    s32 temp_r31;

    temp_r31 = TObjPlayer__sub_801D921C(arg0, TObjPlayer__sub_801BE934(arg1 + obj->m14()));
    obj->m12(temp_r31 - obj_getPtr2B0_1C(arg0));
}

}
