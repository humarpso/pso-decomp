#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_803530C4 { char pad[0x18]; };
struct VObj_803530C4 : Base_803530C4 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
};

extern "C" {

int TEndingPic__sub_8035307C(void* p);
int TEndingPic__sub_803530A0(void* p);
void TEndingPic__sub_803530C4(void *arg0);
int TEndingPic__sub_80353110(void* p);
int TEndingPic__sub_80353134(void* p);
void update_shield__10TEndingPicFPv(void *arg0);
void TEndingPic__sub_80353194(void *arg0);
int TEndingPic__sub_80353018(void*, int);
s32 TItemProShield__sub_8001140C(s32, s32);
s32 TItemProShield__sub_80076B5C(s32);
s32 TObjPlayer__sub_800112A4(s32, s32);
s32 TObjPlayer__sub_80019248(void *);
s32 obj_getS16_2BA(s32);

int TEndingPic__sub_8035307C(void* p) { return TEndingPic__sub_80353018(p, 18); }
int TEndingPic__sub_803530A0(void* p) { return TEndingPic__sub_80353018(p, 17); }

void TEndingPic__sub_803530C4(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    if (TObjPlayer__sub_80019248(temp_r3) != 0) {
        struct VObj_803530C4 *o = (struct VObj_803530C4 *)M2C_FIELD(arg0, void **, 0xF0);
        o->m47();
    }
}

int TEndingPic__sub_80353110(void* p) { return TEndingPic__sub_80353018(p, 16); }
int TEndingPic__sub_80353134(void* p) { return TEndingPic__sub_80353018(p, 15); }
void update_shield__10TEndingPicFPv(void *arg0) {
    TItemProShield__sub_8001140C(M2C_FIELD(arg0, s32 *, 0xF0), TItemProShield__sub_80076B5C(M2C_FIELD(arg0, s32 *, 0xF0)));
}
void TEndingPic__sub_80353194(void *arg0) {
    TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), obj_getS16_2BA(M2C_FIELD(arg0, s32 *, 0xF0)));
}

}
