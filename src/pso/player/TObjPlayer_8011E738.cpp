#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8011E828 { char pad[0x18]; };
struct VObj_8011E828 : Base_8011E828 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual s32 m33();
};

extern "C" {

void TObjPlayer__sub_8011E738(void *arg0, s32 arg1, s32 arg2);
void apply_model_params__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8011E7E4(s32 arg0);
void TObjPlayer__sub_8011E828(struct VObj_8011E828 *o);
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, M2C_UNK *);
M2C_UNK TObjPlayer__sub_8011C8BC(s32, s16 *, s16 *);
M2C_UNK TObjPlayer__sub_801210C0(void *, s16);
M2C_UNK TObjPlayer__sub_801210C8(void *, s16);
M2C_UNK TItemData__sub_8010EC88(M2C_UNK *);
M2C_UNK init__9TItemDataFv(M2C_UNK *);

extern s32 tl_05;

void TObjPlayer__sub_8011E738(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r12)(s32, void *, s32, s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, s32, s32), 0x1EC);
    if (temp_r12 != NULL) {
        temp_r12(tl_05, arg0, arg1, arg2);
    }
}

struct Base_8011E77C { char pad[0x18]; };
struct VObj_8011E77C : Base_8011E77C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
};

void apply_model_params__10TObjPlayerFPv(void *arg0) {
    s16 spA;
    s16 sp8;
    void *temp_r3;

    TObjPlayer__sub_8011C8BC(M2C_FIELD(arg0, u8 *, 0x1D2) & 0x3F, &spA, &sp8);
    TObjPlayer__sub_801210C8(M2C_FIELD(arg0, void **, 0xF0), spA);
    TObjPlayer__sub_801210C0(M2C_FIELD(arg0, void **, 0xF0), sp8);
    temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    ((VObj_8011E77C *)temp_r3)->m71();
}

void TObjPlayer__sub_8011E7E4(s32 arg0) {
    M2C_UNK sp8[5];

    init__9TItemDataFv(sp8);
    copy_to_item_data__5TItemFPvPv(arg0, sp8);
    TItemData__sub_8010EC88(sp8);
}

void TObjPlayer__sub_8011E828(struct VObj_8011E828 *o) {
    if (o->m33() == 0) {
        M2C_FIELD(o, u8 *, 0x1D2) = M2C_FIELD(o, u8 *, 0x1D2) & 0x7F;
    }
    apply_model_params__10TObjPlayerFPv((void *)(o));
}

}
