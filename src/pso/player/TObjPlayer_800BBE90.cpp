#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VPad800BC050_800bc050_800BBE90 { char pad[0x18]; };
struct VObj800BC050_800bc050_800BBE90 : VPad800BC050_800bc050_800BBE90 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(void*, s32);
};
struct VPad800BC220_800bc220_800BBE90 { char pad[0x18]; };
struct VObj800BC220_800bc220_800BBE90 : VPad800BC220_800bc220_800BBE90 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(void*, void*, s32);
};

struct VBase { char pad[0x18]; };

struct VObj : VBase { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(f32); };

extern "C" {
extern const f32 lbl_805D9EB4;
void TObjPlayer__sub_800BC1F0(u8 *arg0);
}

extern "C" {

struct Base_800bbe90 { char pad[0x18]; };
struct VObj_800bbe90 : Base_800bbe90 {
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

void TObjPlayer__sub_800BC220(void *arg0, void *arg1, void *arg2);
void apply_hit_if_active__10TObjPlayerFPvPvPv(void *arg0, void *arg1, f32 *arg2);
void dispatch_vt15__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 obj_isState2_324(void *);

extern const f32 lbl_805D9EB0;

void apply_hit_if_active__10TObjPlayerFPvPvPv(void *arg0, void *arg1, f32 *arg2) {
    ((VObj_800bbe90*)arg1)->m20(M2C_FIELD(arg0, s32 *, 0xAC), lbl_805D9EB0);
    if (obj_isState2_324(arg1) == 0) {
        ((VObj_800bbe90*)arg0)->m18(arg1, *arg2);
    }
}

void dispatch_vt15__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    ((VObj800BC050_800bc050_800BBE90*)arg0)->m15(arg1, 0);
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800BC1F0(u8 *arg0) {
    ((VObj *)arg0)->m16(lbl_805D9EB4);
}
#pragma pop

void TObjPlayer__sub_800BC220(void *arg0, void *arg1, void *arg2) {
    ((VObj800BC220_800bc220_800BBE90*)arg0)->m12(arg1, arg2, 0);
}

}
