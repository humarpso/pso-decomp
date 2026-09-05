#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual void * m15();
};
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TObjEneDD__vt99(u8 *arg0);
}

extern "C" {

int TObjEneGibbles__sub_80156780(void*);
int TObjEneDD__sub_800BA934(void* a0 = 0);
void init_model__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);

int TObjEneDD__sub_800BABA4(void) { return 0; }
u8 *TObjEneDD__vt99(u8 *arg0) {
    f32 temp_f31;
    u8 *temp_r3;
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_r3 = (unsigned char *) (((VObj_18 *)(arg0))->m15());
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x248), (int) (M2C_FIELD(temp_r3, s32 *, 4) + 0xC));
    }
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x48) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x384) = 0;
    return temp_r3;
}

}
